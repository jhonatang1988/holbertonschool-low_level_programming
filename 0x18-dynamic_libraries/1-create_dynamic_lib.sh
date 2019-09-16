#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -Wl,-soname,libholberton.so -o liball.so *.o
