lex thac.l
yacc thac.y -d
gcc y.tab.c -o thac_ex
./thac_ex
rm thac_ex lex.yy.c y.tab.c y.tab.h

