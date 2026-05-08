import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from gtts import gTTS
import pygame
import os
import time

class CoachSpeakerNode(Node):
    def __init__(self):
        super().__init__('coach_speaker')
        # On s'abonne aux messages de l'analyseur
        self.subscription = self.create_subscription(
            String, 
            '/feedback/command', 
            self.callback, 
            10)
        
        pygame.mixer.init()
        self.get_logger().info('Haut-parleur du coach prêt !')

    def callback(self, msg):
        try:
            # On sépare le statut (SUCCESS/ERROR) du message
            parts = msg.data.split('|')
            if len(parts) < 2: return
            
            status, text = parts[0], parts[1]
            
            # Personnalisation des phrases
            if status == "SUCCESS":
                speech_text = f"{text}. You are doing great! Keep going."
            else:
                speech_text = f"Attention! {text}"
            
            # Création et lecture de la voix
            tts = gTTS(text=speech_text, lang='en')
            temp_file = "/tmp/coach_voice.mp3"
            tts.save(temp_file)
            
            pygame.mixer.music.load(temp_file)
            pygame.mixer.music.play()
            while pygame.mixer.music.get_busy():
                time.sleep(0.1)
            
            pygame.mixer.music.unload()
            if os.path.exists(temp_file):
                os.remove(temp_file)
                
        except Exception as e:
            self.get_logger().error(f"Erreur audio : {e}")

def main(args=None):
    rclpy.init(args=args)
    node = CoachSpeakerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()