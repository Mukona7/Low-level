#!/bin/bash

# Gather all .c files in the current directory
C_FILES=$(find . -maxdepth 1 -name "*.c")

# Compile each .c file into object files
for file in $C_FILES; do
    gcc -c $file -o $(basename "$file" .c).o
done

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm -f *.o

echo "Static library liball.a created successfully."

