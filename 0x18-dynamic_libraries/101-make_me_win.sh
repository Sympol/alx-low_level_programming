#!/bin/bash
wget https://github.com/Sympol/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-libfake.so -O /tmp/101-libfake.so
export LD_PRELOAD=/tmp/101-libfake.so
