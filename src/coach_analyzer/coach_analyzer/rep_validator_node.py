import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseArray
from std_msgs.msg import String
import numpy as np
import math
import time
L_SHOULDER, R_SHOULDER = 11, 12
L_ELBOW, R_ELBOW = 13, 14
L_WRIST, R_WRIST = 15, 16
L_HIP, R_HIP = 23, 24
NUMBERS = ['one','two','three','four','five','six','seven','eight','nine','ten','eleven','twelve','thirteen','fourteen','fifteen','sixteen','seventeen','eighteen','nineteen','twenty']
def angle_3pts(a, b, c):
    ba = np.array([a[0]-b[0], a[1]-b[1], a[2]-b[2]])
    bc = np.array([c[0]-b[0], c[1]-b[1], c[2]-b[2]])
    cos_a = np.dot(ba, bc) / (np.linalg.norm(ba) * np.linalg.norm(bc) + 1e-9)
    return math.degrees(math.acos(np.clip(cos_a, -1.0, 1.0)))
def kp(poses, idx):
    p = poses[idx]
    return (p.position.x, p.position.y, p.position.z)
def visible(poses, idx, threshold=0.35):
    return poses[idx].orientation.w > threshold
class RepValidatorNode(Node):
    def __init__(self):
        super().__init__('rep_validator')
        self.declare_parameter('elbow_drift_max', 50.0)
        self.declare_parameter('back_lean_max', 50.0)
        self.declare_parameter('side', 'right')
        self.elbow_drift_max = self.get_parameter('elbow_drift_max').value
        self.back_lean_max   = self.get_parameter('back_lean_max').value
        self.side            = self.get_parameter('side').value
        if self.side == 'left':
            self.idx_shoulder = L_SHOULDER
            self.idx_elbow    = L_ELBOW
            self.idx_wrist    = L_WRIST
            self.idx_hip      = L_HIP
        else:
            self.idx_shoulder = R_SHOULDER
            self.idx_elbow    = R_ELBOW
            self.idx_wrist    = R_WRIST
            self.idx_hip      = R_HIP
        self.sub = self.create_subscription(PoseArray, '/pose/keypoints', self.on_keypoints, 10)
        self.pub = self.create_publisher(String, '/feedback/command', 10)
        self.rep_count      = 0
        self.in_flex        = False
        self.flex_confirmed = False
        self.elbow_ref_x    = None
        self.last_feedback  = ''
        self.last_rep_time  = time.time()
        self.rep_errors     = []
        self.pause_notified = False
        self.min_arm_seen   = 180.0
        self.max_arm_seen   = 0.0
        self.get_logger().info('RepValidatorNode pret')
    def publish(self, feedback):
        if feedback != self.last_feedback:
            msg_out = String()
            msg_out.data = feedback
            self.pub.publish(msg_out)
            self.last_feedback = feedback
    def on_keypoints(self, msg):
        poses = msg.poses
        if len(poses) < 33:
            return
        for idx in [self.idx_shoulder, self.idx_elbow, self.idx_wrist, self.idx_hip]:
            if not visible(poses, idx):
                return
        now = time.time()
        elapsed = now - self.last_rep_time
        if elapsed > 8.0 and self.rep_count > 0 and not self.pause_notified:
            self.pause_notified = True
            self.rep_count      = 0
            self.in_flex        = False
            self.flex_confirmed = False
            self.elbow_ref_x    = None
            self.last_feedback  = ''
            self.min_arm_seen   = 180.0
            self.max_arm_seen   = 0.0
            self.publish('RESET|Pause detected. Starting over. Get ready!')
            return
        elbow_x = kp(poses, self.idx_elbow)[0]
        if self.elbow_ref_x is None:
            self.elbow_ref_x = elbow_x
        drift    = abs(elbow_x - self.elbow_ref_x) * 100
        elbow_ok = drift < self.elbow_drift_max
        ls = kp(poses, L_SHOULDER)
        rs = kp(poses, R_SHOULDER)
        lh = kp(poses, L_HIP)
        rh = kp(poses, R_HIP)
        smx = (ls[0]+rs[0])/2
        smy = (ls[1]+rs[1])/2
        hmx = (lh[0]+rh[0])/2
        hmy = (lh[1]+rh[1])/2
        back_angle = math.degrees(math.atan2(abs(hmx-smx), abs(hmy-smy)))
        back_ok    = back_angle < self.back_lean_max
        shoulder  = kp(poses, self.idx_shoulder)
        elbow     = kp(poses, self.idx_elbow)
        wrist     = kp(poses, self.idx_wrist)
        arm_angle = angle_3pts(shoulder, elbow, wrist)
        self.min_arm_seen = min(self.min_arm_seen, arm_angle)
        self.max_arm_seen = max(self.max_arm_seen, arm_angle)
        errors = []
        if not elbow_ok:
            errors.append('ELBOW|Keep your elbow fixed against your body')
        if not back_ok:
            errors.append('BACK|Stand up straight please')
        if arm_angle < 120 and not self.in_flex:
            self.in_flex        = True
            self.flex_confirmed = True
            self.rep_errors     = list(errors)
            self.pause_notified = False
        if self.in_flex:
            for e in errors:
                if e not in self.rep_errors:
                    self.rep_errors.append(e)
        if arm_angle > 120 and self.in_flex and self.flex_confirmed:
            range_motion = self.max_arm_seen - self.min_arm_seen
            if range_motion > 20:
                self.in_flex        = False
                self.flex_confirmed = False
                self.last_rep_time  = now
                self.pause_notified = False
                if not self.rep_errors:
                    self.rep_count += 1
                    num = NUMBERS[min(self.rep_count-1, 19)]
                    self.publish('SUCCESS|' + num + '! Keep going, you are doing great!')
                else:
                    self.publish('ERROR|' + '||'.join(self.rep_errors))
                self.rep_errors   = []
                self.min_arm_seen = 180.0
                self.max_arm_seen = 0.0
                return
        if errors and not self.in_flex:
            self.publish('ERROR|' + '||'.join(errors))
        elif not errors and not self.in_flex:
            if self.rep_count == 0:
                self.publish('SUCCESS|Good posture! Start your curl when ready.')
        self.get_logger().info('bras=' + str(round(arm_angle)) + ' min=' + str(round(self.min_arm_seen)) + ' max=' + str(round(self.max_arm_seen)) + ' reps=' + str(self.rep_count))
def main(args=None):
    rclpy.init(args=args)
    node = RepValidatorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.try_shutdown()
if __name__ == '__main__':
    main()
