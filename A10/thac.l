
%{
	
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}




%%
[/][/].*["\n"]			{}
and  					{return AND;}
:=           			{return ASSIGN;}
:            			{return COLON;}
\/          			{return DIV;}
[e][l][s][e]  			{return ELSE;}
end          			{return END;}
=	          			{return EQ;}
>=           			{return GE;}
global       			{return GLOBAL;}
> 			 			{return GT;}
if           			{return IF;}
[0-9]+    				{strcpy(yylval.x, yytext); return INT_CONST;}
[(]   		 			{return LEFT_PAREN;}
[<][=]        			{return LE;}
[<]           			{return LT;}
\-           			{return MINUS;}
mod          			{return MOD;}
\*           			{return MULT;}
[<][>]         			{return NE;}
not          			{return NOT;}
or           			{return OR;}
\+           			{return PLUS;}
print        			{return PRINT;}
read         			{return READ;}
[)]           			{return RIGHT_PAREN;}
;           			{return SEMICOLON;}
while        			{return WHILE;}
[a-zA-Z][a-zA-Z0-9]* 	{strcpy(yylval.x, yytext); return ID; }
[\n\t" "]      			{}

%%

int yywrap() {

return 1;

    }
