%{
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
void yyerror(char *str);
char* insert_triple(char opr, char* src1, char* src2);
%}

%union {
    char* ch_pter;
}

%token <ch_pter> NUMBER 
%token <ch_pter> ID
%left '+' '-'
%left '*' '/'
%type<ch_pter> calc
%type<ch_pter> expr
%type<ch_pter> term
%type<ch_pter> factor

%start calc

%%

calc: expr { printf("\n Ans = %s\n", $$); };

expr: term { $$ = $1; }
    | expr '+' term { $$ = insert_triple('+', $1, $3); }
    | expr '-' term { $$ = insert_triple('-', $1, $3); }
    ;

term: factor { $$ = $1; }
    | term '*' factor { $$ = insert_triple('*', $1, $3); }
    | term '/' factor { $$ = insert_triple('/', $1, $3); }
    ;

factor: NUMBER { $$ = $1; }
       | ID { $$ = $1; }
       | '(' expr ')' { $$ = $2; }
       ;

%%

char p = 'T';
int cnt = 0;

char* insert_triple(char opr, char* src1, char* src2) {
    int stringLength = snprintf(NULL, 0, "%c_%d", p, cnt);
    char *resultString = (char *)malloc(stringLength + 1);
    cnt++;
    printf("\n %c_%d = %s %c %s", p, cnt, src1, opr, src2);
    sprintf(resultString, "%c_%d", p, cnt);
    return resultString;
}

void yyerror(char *str) {
    printf("Encountered Invalid character");
}

int main() {
    printf("Enter Expression: ");
    yyparse();
    return 0;
}
