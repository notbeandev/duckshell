#!/bin/bash

if [[ -f "basic/default.cpp" ]]
then
    echo "OK!"
    exit
fi
echo "NO"
echo "File not found! exit...."
killall make