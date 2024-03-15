%{
#include <stdio.h>
#include <stddef.h>
void yyerror(char *str);
char* insert_triple(char opr, char* src1,char* src2);
%}
%union
{
    char* ch_pter;
}
%token <ch_pter> NUMBER 
%token <ch_pter> ID
%left '+' '-'
%left '*' '/'
%type<ch_pter> calc
%type<ch_pter> expr 
%%
calc : expr {printf("\n Ans = %s\n",$$);}
;
expr : NUMBER {$$ = $1;}
| ID {$$ = $1;}
| expr '+' expr {$$ =insert_triple('+',$1,$3);}
| expr '-' expr {$$ =insert_triple('-',$1,$3);}
| expr '*' expr {$$ =insert_triple('*',$1,$3);}
| expr '/' expr {$$ =insert_triple('/',$1,$3);}

;
%%
char p='T';
int cnt=0;

char* insert_triple(char opr, char* src1,char* src2)

{   int stringLength = snprintf(NULL, 0, "%c_%d", p, cnt);
    char *resultString = (char *)malloc(stringLength + 1);
    cnt++;
    printf("\n %c_%d = %s %c %s ",p,cnt,src1,opr,src2);
    sprintf(resultString, "%c_%d", p, cnt);
    return resultString;
}
void yyerror(char *str)
{
printf("Encountered Invalid character");
}
void main()
{
printf("Enter Expression : ");
yyparse();
}