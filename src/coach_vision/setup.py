from setuptools import setup

package_name = 'coach_vision'
setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='athmani-roumaissa',
    maintainer_email='rathmani06@gmail.com',
    description='Pose estimation node',
    license='MIT',
    entry_points={
        'console_scripts': [
            'pose_estimator = coach_vision.pose_estimator_node:main',
        ],
    },
)
