#!/bin/bash


rm -rfv build
mkdir build
cd build
qmake -project ../.
echo "QT += gui widgets" >> build.pro
qmake build.pro
make
./build


