#!/bin/bash
gcc -g -c -Wall -Wextra -pedantic -std=gnu89 -O *.c
ar -rc liball.a *.o
