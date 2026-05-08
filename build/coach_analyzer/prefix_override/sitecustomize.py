import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/athmani-roumaissa/ros2_coach_ws/install/coach_analyzer'
