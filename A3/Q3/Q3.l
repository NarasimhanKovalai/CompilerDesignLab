%{
    #include<stdio.h>
    #include<string.h>
    int strict_parsing=0;
    int yylval = -1;
    int number_lines = 1;
    // Token_Types
    #define IF 1
    #define ELSE 2
    #define THEN 3
    #define RELOP 4
    #define ARITHMETIC 5
    #define ASSIGNMENT 6
    #define ID 7
    #define INTEGER 8
    #define FLOAT 9
    #define INT_NUM 10
    #define FLOAT_NUM 11
    #define SEPERATOR 12
    #define CHAR 13
    #define CUSTOM_IO 14
    #define MAIN 15
    #define LOOP 16
    
    // Relop_operators types
    #define LT 21
    #define LE 22
    #define EQ 23
    #define NE 24
    #define GT 25
    #define GE 26
    #define INCREMENT 31
    #define DECREMENT 32
    #define CUSTOM_INPUT 101
    #define CUSTOM_OUTPUT 102
%}

delim               [ \t]
letter              [A-Za-z]
digit               [0-9]
id                  ({letter})({letter}|{digit})*
ws                  {delim}+
int_num             {digit}+
float_num           ({digit}+)(\.{digit}+)?(E[+-]?({digit})+)?
operator            (\+|\-|\*|\/)
seperator           [;,(){}]
assignment          =
input_construct     input\({id}\) 
output_construct    display\({id}\) 


%%
{ws}*               
{seperator}         {yylval = (int)yytext[0]; return (SEPERATOR);}
main\(\)            {return (MAIN);}
if                  {return(IF);}
then                {return(THEN);}
else                {return(ELSE);}
for                 {yylval = (int)yytext[0]; return(LOOP);}
while               {yylval = (int)yytext[0]; return(LOOP);}
"INT"|"int"         {return (INTEGER);}
"FLOAT"|"float"     {return (FLOAT);}
"CHAR"|"char"       {return (CHAR);}
"++"                {yylval = INCREMENT; return (ARITHMETIC);}
"--"                {yylval = DECREMENT; return (ARITHMETIC);}
{int_num}           {return (INT_NUM);}
{float_num}         {return (FLOAT_NUM);}
{id}                {return(ID);}
{assignment}        { yylval = (int)yytext[0];return (ASSIGNMENT);}
{operator}          {yylval = (int)yytext[0]; return(ARITHMETIC);}
"<"                 {yylval = LT; return(RELOP);}
"<="                {yylval = LE; return(RELOP);}
"=="                {yylval = EQ; return(RELOP);}
"!="                {yylval = NE; return(RELOP);}
">"                 {yylval = GT; return(RELOP);}
">="                {yylval = GE; return(RELOP);}
{input_construct}   {yylval = CUSTOM_INPUT; return (CUSTOM_IO);}
{output_construct}  {yylval = CUSTOM_OUTPUT; return (CUSTOM_IO);}
"\n"                {number_lines++;}
.                   {printf("ERROR: unknown token %s\n",yytext);if(strict_parsing) exit(0);}
\".*\"
[a-z]
.*                    {}
%%

int yywrap() { return (1); }

int main(int argc,char* argv[])

{
    
    int token;
    char* token_type=" ";
    printf("Enter 0 for lenient parsing and 1 for strict parsing : ");
    scanf("%d",&strict_parsing);
    yyin = fopen("test_input.txt", "r");
    printf("The (lexemme    token number) tuple is as follows : \n");
    while ((token = yylex()) != 0)
    {
        switch (token){
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
                    token_type="RELOP";
                    break;
                case 5:
                    token_type="ARITHMETIC";
                    break;
                case 6:
                    token_type="ASSIGNMENT";
                    break;
                case 7:
                    token_type="ID";
                    break;
                case 8:
                    token_type="DATATYPE";
                    break;
                case 9:
                    token_type="DATATYPE";
                    break;
                case 10:
                    token_type="INTEGER_VAL";
                    break;
                case 11:
                    token_type="FLOAT_VAL";
                    break;
                case 12:
                    token_type="SEPERATOR";
                    break;
                case 13:
                    token_type="DATATYPE";
                    break;
                case 14:
                    token_type="CUSTOM_IO";
                    break;
                case 15:
                    token_type="MAIN_ENTRYPOINT";
                    break;
                case 16:
                    token_type="KEYWORD(LOOP)";
                    break;
        }

        printf("(%s %s)\n",yytext, token_type);

    }
    return 0;
}