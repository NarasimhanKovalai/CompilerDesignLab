lex lexer.l
yacc -d parser.y
gcc lex.yy.c y.tab.c -o calculator -w
./calculator
dot -Tpng dag.dot >output.png
rm -f lex.yy.c y.tab.c y.tab.h 