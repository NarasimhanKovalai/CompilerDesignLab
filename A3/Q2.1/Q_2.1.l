%{
    #include<stdio.h>
    #include<string.h>
    
    int yylval = -1;
    int strict_parsing=1;
    
    //Token types
    #define IF 1
    #define THEN 2
    #define ELSE 3
    #define ID 4
    #define NUM 5
    #define RELOP 6
    
    //Relop operator types
    #define LT 101
    #define LE 102
    #define EQ 103
    #define NE 104
    #define GT 105
    #define GE 106
    
%}

delim       [ " "\t\n]
ws          {delim}+
letter      [A-Za-z]
digit       [0-9]
id          {letter}({letter}|{digit})*
number      ({digit}+)(\.{digit}+)?(E[+-]?({digit})+)?

%%
{ws}*       
if          {return(IF);}
then        {return(THEN);}
else        {return(ELSE);}
{id}        {return(ID);}
{number}    {return(NUM);}
"<"         {yylval = (int)LT; return(RELOP);}
"<="        {yylval = (int)LE; return(RELOP);}
"="         {yylval = (int)EQ; return(RELOP);}
"<>"        {yylval = (int)NE; return(RELOP);}
">"         {yylval = (int)GT; return(RELOP);}
">="        {yylval = (int)GE; return(RELOP);}
.          {printf("ERROR: unknown token %s\n",yytext);if(strict_parsing) exit(0);}
%%

int yywrap() { return (1); }

int main()
{
    int token;
    char* token_type=" ";
    printf("Enter 0 for lenient parsing and 1 for strict parsing : ");
    scanf("%d",&strict_parsing);

    yyin = fopen("test_input.txt", "r");
    while ((token = yylex()) != 0)
    {
            switch(token){
                case 1:
                    token_type="KEYWORD(IF)";
                    break;
                case 2:
                    token_type="KEYWORD(THEN)";
                    break;
                case 3:
                    token_type="KEYWORD(ELSE)";
                    break;
                case 4:
                    token_type="ID";
                    break;
                case 5:
                    token_type="NUM";
                    break;
                case 6:
                    token_type="RELOP";
                    break;
                
                
            }
            printf("(%s,%s)\n",yytext,token_type);
    }
    return 0;
}