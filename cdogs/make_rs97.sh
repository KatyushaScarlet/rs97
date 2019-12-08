#!/bin/sh

# To create a debug build, run `cmake -D CMAKE_BUILD_TYPE=Debug .` instead

# Update repo properly (should be handled by most git GUI clients)
git submodule init
git submodule update --init --recursive
git submodule update --recursive

mkdir gcw0build
cd gcw0build
cmake -DCMAKE_TOOLCHAIN_FILE="/opt/rs97/share/buildroot/toolchainfile.cmake" ..
make

