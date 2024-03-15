%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
#include "y.tab.h"
%}
%%
[0-9]+ {yylval.ch_pter=strdup(yytext);return NUMBER;}
[a-z]+ {yylval.ch_pter=strdup(yytext);return ID;}
[\t] ;
[\n] return 0;
. {return yytext[0];}
%%

int yywrap() 
{ 
	return 1; 
}