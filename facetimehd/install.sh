#! /bin/sh

cd firmware
make
sudo make install
cd ..
make 
sudo make install

sudo depmod
sudo modprobe facetimehd
