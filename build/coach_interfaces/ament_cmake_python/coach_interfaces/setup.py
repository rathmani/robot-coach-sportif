from setuptools import find_packages
from setuptools import setup

setup(
    name='coach_interfaces',
    version='0.1.0',
    packages=find_packages(
        include=('coach_interfaces', 'coach_interfaces.*')),
)
