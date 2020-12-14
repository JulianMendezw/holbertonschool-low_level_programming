#!/bin/bash
gcc -fPIC -Wall -Werror -c *.c
gcc -shared -o liball.so *.o
