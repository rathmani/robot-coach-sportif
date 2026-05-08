import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import threading
import subprocess

GREEN  = '\033[92m'
RED    = '\033[91m'
YELLOW = '\033[93m'
BOLD   = '\033[1m'
RESET  = '\033[0m'

class FeedbackNode(Node):
    def __init__(self):
        super().__init__('feedback_node')
        self.sub = self.create_subscription(
            String, '/feedback/command', self.on_feedback, 10)
        self._last_msg   = ''
        self._tts_thread = None
        self.get_logger().info('FeedbackNode pret !')
        print('\n' + BOLD + '='*50)
        print('   ROBOT COACH — PRET !')
        print('='*50 + RESET + '\n')

    def on_feedback(self, msg: String):
        data = msg.data
        if data == self._last_msg:
            return
        self._last_msg = data
        parts  = data.split('|')
        status = parts[0] if parts else ''

        if status == 'SUCCESS':
            text = parts[1] if len(parts) > 1 else 'Good job!'
            print('\n' + GREEN + BOLD + '  ● LED VERTE ●' + RESET)
            print(GREEN + BOLD + '  ✓ ' + text + RESET + '\n')
            self._speak(text)

        elif status == 'ERROR':
            error_parts = [p for p in parts[1:] if p]
            print('\n' + RED + BOLD + '  ● LED ROUGE ●' + RESET)
            voice_msgs = []
            for ep in error_parts:
                if '|' in ep:
                    code, message = ep.split('|', 1)
                    labels = {'ELBOW': 'COUDE', 'BACK': 'DOS'}
                    label = labels.get(code, code)
                    print(RED + BOLD + '  [' + label + '] ' + message + RESET)
                    voice_msgs.append(message)
                else:
                    print(RED + BOLD + '  ' + ep + RESET)
                    voice_msgs.append(ep)
            print()
            if voice_msgs:
                self._speak('. '.join(voice_msgs))

        elif status == 'RESET':
            text = parts[1] if len(parts) > 1 else 'Starting over!'
            print('\n' + YELLOW + BOLD + '  ↺ RESET — ' + text + RESET + '\n')
            self._speak(text)

    def _speak(self, text: str):
        if self._tts_thread and self._tts_thread.is_alive():
            return
        def run():
            try:
                subprocess.run(
                    ['espeak-ng', '-v', 'en-us', '-s', '200', '-p', '60', text],
                    timeout=6, capture_output=True)
            except Exception:
                pass
        self._tts_thread = threading.Thread(target=run, daemon=True)
        self._tts_thread.start()

def main(args=None):
    rclpy.init(args=args)
    node = FeedbackNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.try_shutdown()

if __name__ == '__main__':
    main()