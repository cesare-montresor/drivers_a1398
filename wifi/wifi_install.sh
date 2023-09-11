#! /bin/bash

cd RTL88x2BU-Linux-Driver-master
sudo make uninstall
make clean
make
sudo make install
sudo modprobe 88x2bu

