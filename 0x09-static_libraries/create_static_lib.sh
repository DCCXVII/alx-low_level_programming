#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -pedantic -Wextra -c *.c

# Create the static library from the object files
ar -rc liball.a *.o

# Index the symbols in the library for faster linking
ranlib liball.a

# Clean up the object files
rm *.o
