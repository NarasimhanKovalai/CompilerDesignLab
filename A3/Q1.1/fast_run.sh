#!/bin/bash

if [ $# -ne 3 ]; then
    echo "Usage: $0 <flex_file> <c_alias> <exec_alias>"
    exit 1
fi

flex_file="$1"
c_alias="$2"
exec_alias="$3"

# Compile the Flex program and generate the C file
flex -o "$c_alias.c" "$flex_file"

# Compile the generated C file and generate the executable
gcc -o "$exec_alias" "$c_alias.c" 

# Run the executable
./"$exec_alias"

# Clean up the generated files
rm "$c_alias.c" "$exec_alias"
