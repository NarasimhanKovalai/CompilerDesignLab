%{
    /*Definitions*/
#include <stdio.h>
#include <string.h>

%}

/*Regular Definitions/rules*/
%%
(0|1)*1(0|1)*1(0|1)*1(0|1)*1(0|1)*  {printf("Accepted");}
.* {printf("Not Accepted");}
%%

int yywrap(void){return 1;}

int main(){
    yylex();
}