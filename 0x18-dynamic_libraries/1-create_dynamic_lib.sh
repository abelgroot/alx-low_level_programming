#!/bin/bash
# Compile all .c files into position-independent code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
# Create the dynamic library liball.so from the .o files
gcc -shared -o liball.so *.o
# Clean up: remove the .o files to keep the directory clean
rm *.o
