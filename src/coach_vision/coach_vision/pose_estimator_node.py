import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseArray, Pose
from std_msgs.msg import Header
import cv2
import mediapipe as mp
from mediapipe.tasks import python as mp_python
from mediapipe.tasks.python import vision as mp_vision
import os
import urllib.request

MODEL_PATH = '/tmp/pose_landmarker.task'
MODEL_URL  = 'https://storage.googleapis.com/mediapipe-models/pose_landmarker/pose_landmarker_lite/float16/latest/pose_landmarker_lite.task'

class PoseEstimatorNode(Node):
    def __init__(self):
        super().__init__('pose_estimator')
        self.declare_parameter('camera_index', 0)
        self.declare_parameter('show_preview', True)
        cam_idx = self.get_parameter('camera_index').value
        self.show_preview = self.get_parameter('show_preview').value

        self.pub = self.create_publisher(PoseArray, '/pose/keypoints', 10)

        if not os.path.exists(MODEL_PATH):
            self.get_logger().info('Telechargement du modele...')
            urllib.request.urlretrieve(MODEL_URL, MODEL_PATH)
            self.get_logger().info('Modele telecharge !')

        base_options = mp_python.BaseOptions(model_asset_path=MODEL_PATH)
        options = mp_vision.PoseLandmarkerOptions(
            base_options=base_options,
            running_mode=mp_vision.RunningMode.VIDEO,
            num_poses=1,
            min_pose_detection_confidence=0.6,
            min_pose_presence_confidence=0.6,
            min_tracking_confidence=0.6,
        )
        self.landmarker = mp_vision.PoseLandmarker.create_from_options(options)

        self.cap = cv2.VideoCapture(cam_idx)
        if not self.cap.isOpened():
            self.get_logger().error('Impossible ouvrir camera')
            raise RuntimeError('Camera non disponible')

        self.frame_ts = 0
        self.timer = self.create_timer(1.0/30.0, self.process_frame)
        self.get_logger().info('PoseEstimatorNode demarre !')

    def process_frame(self):
        ret, frame = self.cap.read()
        if not ret:
            return

        self.frame_ts += 1
        rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        mp_image = mp.Image(image_format=mp.ImageFormat.SRGB, data=rgb)
        result = self.landmarker.detect_for_video(mp_image, self.frame_ts)

        if result.pose_landmarks:
            landmarks = result.pose_landmarks[0]
            msg = PoseArray()
            msg.header = Header()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'camera'
            for lm in landmarks:
                p = Pose()
                p.position.x = float(lm.x)
                p.position.y = float(lm.y)
                p.position.z = float(lm.z)
                p.orientation.w = float(lm.visibility)
                msg.poses.append(p)
            self.pub.publish(msg)

            if self.show_preview:
                h, w = frame.shape[:2]
                for lm in landmarks:
                    cx, cy = int(lm.x * w), int(lm.y * h)
                    cv2.circle(frame, (cx, cy), 4, (0, 255, 0), -1)

        if self.show_preview:
            cv2.putText(frame, 'Robot Coach', (10, 30),
                cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 0), 2)
            cv2.imshow('Coach Vision', frame)
            cv2.waitKey(1)

    def destroy_node(self):
        self.cap.release()
        cv2.destroyAllWindows()
        self.landmarker.close()
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    node = PoseEstimatorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
