%{
#include <stdio.h>

int count_0 = 0;
int count_1 = 0;
%}

%%
[0]    { count_0++; }
[1]    { count_1++; }
\n     {}/* ignore newlines */
[" "\t)]     {printf("Space Detected, Enter string without Space\n");exit(1);}
.      /* ignore other characters */
%%

int yywrap(void) {
    return 1;
}

int main(void) {
    int token;
    yyin = fopen("test_input.txt", "r");
    
    while ((token = yylex()) != 0) {
        // Do nothing here, just count the 0s and 1s.
    }

    if (count_0 % 2 == 0 || count_1 % 2 == 1) {
        printf("Accepted - String has even 0s or odd 1s.\n");
    } else {
        printf("Rejected - String does not have even 0s and odd 1s.\n");
    }

    fclose(yyin);
    return 0;
}
