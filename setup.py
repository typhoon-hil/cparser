import os
import codecs
from setuptools import setup, find_packages
from cparser import get_version


NAME = "cparser"
AUTHOR = "Typhoon HIL, Inc"
DESCRIPTION = "C Parser writen in pure Python"
README = codecs.open(os.path.join(os.path.dirname(__file__), "README.rst"),
                     "r", encoding="utf-8").read()

setup(
    name=NAME,
    description=DESCRIPTION,
    long_description=README,
    version=get_version(),
    license="MIT",
    install_requires=["parglare"],
    tests_require=["pytest"],
    author="Typhoon HIL, Inc",
    url="https://github.com/typhoon-hil/cparser",
    include_package_data=True,
    packages=find_packages(),
    keywords="parser C GLR",

    classifiers=[
        "Intended Audience :: Developers",
        "Topic :: Software Development",
        'Topic :: Software Development :: Libraries :: Python Modules',
        "License :: OSI Approved :: MIT Licence",
        "Operating System :: OS Independent",
        "Programming Language :: Python",
    ]
)
