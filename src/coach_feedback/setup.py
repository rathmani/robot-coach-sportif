from setuptools import setup

package_name = 'coach_feedback'
setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='athmani-roumaissa',
    maintainer_email='rathmani06@gmail.com',
    description='Feedback node',
    license='MIT',
    entry_points={
        'console_scripts': [
            'feedback_node = coach_feedback.feedback_node:main',
        ],
    },
)
