#!/bin/bash
wget -P /tmp/ wget https://raw.githubusercontent.com/saintholy
/
alx-low_level_programming/master/0x18-dynamic_libraries/mao.so
export LD_PRELOAD=/tmp/mao.so
