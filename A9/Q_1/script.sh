lex lexer.l
yacc -d parser.y
gcc lex.yy.c y.tab.c -o calculator -ll
./calculator
rm -f lex.yy.c y.tab.c y.tab.h 