lex lexer.l
yacc -d temp.y
gcc lex.yy.c y.tab.c -o calculator -w
./calculator
rm -f lex.yy.c y.tab.c y.tab.h 