from setuptools import find_packages, setup

package_name = 'coach_analyzer'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='votre_nom',
    maintainer_email='votre_email@example.com',
    description='Coach sportif intelligent avec ROS 2',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'rep_validator = coach_analyzer.rep_validator_node:main',
            'coach_speaker = coach_analyzer.coach_speaker:main',
        ],
    },
)