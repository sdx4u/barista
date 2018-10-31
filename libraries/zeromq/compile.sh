#!/bin/bash

# extract the source files of ZeroMQ
tar xvfz zeromq-4.2.2.tar.gz

cd zeromq-4.2.2

# compile ZeroMQ
./autogen.sh && ./configure
make && sudo make install && sudo ldconfig

cd ..

# remove the source files
rm -rf zeromq-4.2.2