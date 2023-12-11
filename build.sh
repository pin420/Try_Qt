#!/bin/bash


rm -rfv build
mkdir build
cd build
qmake ../*.pro
make
./$(basename $(dirname $(pwd)))

