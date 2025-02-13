from setuptools import find_packages
from setuptools import setup

setup(
    name='map_manager',
    version='0.0.0',
    packages=find_packages(
        include=('map_manager', 'map_manager.*')),
)
