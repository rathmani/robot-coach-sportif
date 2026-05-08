from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():

    camera_arg = DeclareLaunchArgument(
        'camera_index', default_value='0',
        description='Index de la camera')

    preview_arg = DeclareLaunchArgument(
        'show_preview', default_value='true',
        description='Afficher la fenetre webcam')

    side_arg = DeclareLaunchArgument(
        'side', default_value='right',
        description='Bras analyse : right ou left')

    pose_estimator = Node(
        package='coach_vision',
        executable='pose_estimator',
        name='pose_estimator',
        output='screen',
        parameters=[{
            'camera_index': LaunchConfiguration('camera_index'),
            'show_preview':  LaunchConfiguration('show_preview'),
        }],
    )

    rep_validator = Node(
        package='coach_analyzer',
        executable='rep_validator',
        name='rep_validator',
        output='screen',
        parameters=[{
            'side':            LaunchConfiguration('side'),
            'elbow_drift_max': 15.0,
            'back_lean_max':   20.0,
        }],
    )

    feedback = Node(
        package='coach_feedback',
        executable='feedback_node',
        name='feedback_node',
        output='screen',
        parameters=[{
            'use_tts': True,
        }],
    )

    return LaunchDescription([
        camera_arg,
        preview_arg,
        side_arg,
        pose_estimator,
        rep_validator,
        feedback,
    ])
