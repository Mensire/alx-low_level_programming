#!/bin/bash
wget -P /home/ruth/Desktop/data/alx-low_level_programming/0x18-dynamic_libraries/ https://github.com/Mensire/alx-low_level_programming/blob/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/home/ruth/Desktop/data/alx-low_level_programming/0x18-dynamic_libraries/nrandom.so
