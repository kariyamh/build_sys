#!/bin/bash
# changes directory to the build directory, performs build, 
# then returns to origional directory

init_dir=$(pwd)
mkdir -p $(dirname $0)//..//build
cd $(dirname $0)//..//build

cmake ..
make all

cd $init_dir