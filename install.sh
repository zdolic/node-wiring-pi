#!/bin/bash

rm ./install.log 2>/dev/null 1>&2

echo -n "Cloning wiringPi... "
rm -Rf ./wiringPi 2>/dev/null 1>&2
git clone git://git.drogon.net/wiringPi > ./install.log 2>&1

echo -n "Building wiringPi... "
cd ./wiringPi/
./build >> ../install.log 2>&1
cd ..

echo -n "Building node-wiring-pi ... "
node-gyp rebuild 2>&1 | tee -a ./install.log