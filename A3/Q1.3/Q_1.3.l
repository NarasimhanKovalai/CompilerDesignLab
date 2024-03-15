%{
#include <stdio.h>
int charCount = 0;
char prevChar = '\0';  // Initialize previous character to a null character
int con_valid=0;
int overall_valid=0;
%}

%%
[a-c]       { charCount++;
                if(yytext[0]=='a'|| yytext[0]=='b')
                    if (charCount > 1 && prevChar == yytext[0]) 
                        con_valid=1;
                
              
              prevChar = yytext[0];
              overall_valid=con_valid*(charCount==8);
            }
.|\n        {printf("Invalid");exit(1);}
           
%%
int yywrap(void){return 1;}
int main() {
    int token;
    yyin = fopen("test_input.txt", "r");
    while ((token = yylex()) != 0) {
        // Do nothing here, just count the 0s and 1s.
    }
    if(overall_valid){
        printf("String Accepted\n");
    }
    else{
        printf("String Rejected\n");
    }
    return 0;
}
