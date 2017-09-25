#!/bin/bash

sudo apt-get install -qq autopoint autoconf automake 
sudo apt-get install -qq libtool

wget http://ftp.gnu.org/gnu/libtool/libtool-2.4.tar.gz
tar -xvf libtool-2.4.tar.gz
cd libtool-2.4
./configure
make
sudo make install
cd ../

libtool --version
