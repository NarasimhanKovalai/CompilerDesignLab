#!/bin/bash

# Generate parser and lexer
yacc aut_parser.y -d
flex tokenize.l
gcc y.tab.c -o ans

# Run the generated parser
./ans

# Clean up generated files
#rm -f y.tab.c y.tab.h lex.yy.c ans

# Display a message indicating the cleanup of files
echo "Generated files have been removed."
