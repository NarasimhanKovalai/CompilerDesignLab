%{

#include <stdio.h>
#include <string.h>
#include "lex.yy.c"
int yylex();
int s_flag = 1;
int temporary = 0;

void yyerror(const char *s);
extern int yylineno;

int label = 0;
int else_label = 0;
int while_label = 0;


%}

%locations
%token AND ASSIGN COLON DIV ELSE END EQ GE GLOBAL GT IF LEFT_PAREN LE LT MINUS MOD MULT NE NOT OR PLUS PRINT READ RIGHT_PAREN SEMICOLON WHILE

%left PLUS MINUS
%left MULT DIV MOD
%left AND OR 
%nonassoc NOT
%left LEFT_PAREN RIGHT_PAREN
%nonassoc IF
%nonassoc ELSE

%start prog


%union{ 

  char x[100];
  
}
   
%type<x> exp relOP bExp
%token<x> ID INT_CONST

%%
prog
  : GLOBAL stmtListO END 
  ;

stmtListO
  : stmtList
  |
  ;
stmtList
  : stmtList SEMICOLON stmt
  | stmt
  ;

stmt
  : assignmentStmt 
  | readStmt
  | printStmt
  | ifStmt
  | whileStmt
  ;

assignmentStmt
  : ID ASSIGN exp {printf("%s = %s\n",$1,$3);}
  ;

readStmt
  : READ ID {printf("T%d = Read %s\n",temporary++,$2);}
  ;

printStmt
  : PRINT ID {printf("print %s\n",$2);}
  ;

ifStmt
  : IF bExp 
  {
    printf("T%d = %s\n",temporary,$2);
    printf("If !T%d goto L_%d\n",temporary,label);
    else_label = label;
    temporary++;
    label++;
  }

  COLON stmtList elsePart END
  ;

elsePart
  : ELSE 
  {
    printf("goto L_%d\n",label);
    printf("L_%d : ",else_label);
    else_label--;
    label++;
  }

  stmtList {printf("L_%d : ",label-1);}

  | {printf("L_%d : ",label);}
  ;

whileStmt
  : WHILE {
            printf("L_%d : ",label);
            while_label = label;
            label++;
          }
    bExp {  printf("If !%s goto L_%d\n",$3,while_label+1); label++;}

    COLON stmtList {
            printf("goto L_%d\n",while_label); 
            printf("L_%d : ",while_label+1);
            while_label--;
            while_label--;
          }
    END
  ;

bExp
  : bExp OR bExp 
  {
    printf("T%d = %s or %s\n",temporary,$1,$3); 
    sprintf($$, "T%d", temporary++);
  }

  | bExp AND bExp
  {
    printf("T%d = %s and %s\n",temporary,$1,$3); 
    sprintf($$, "T%d", temporary++);
  }

  | NOT bExp 
  {
    printf("T%d = !%s\n",temporary,$2);
    sprintf($$, "T%d", temporary++);
  }  
  | LEFT_PAREN bExp RIGHT_PAREN 
  {
    printf("T%d = %s\n",temporary,$2);
    sprintf($$, "T%d", temporary++);
  }

  | exp relOP exp 
  {
    printf("T%d = %s %s %s\n",temporary,$1,$2,$3);
    sprintf($$, "T%d", temporary++);
  }
  ;

relOP
  : EQ {strcpy($$, "==");}
  | LE {strcpy($$, "<=");}
  | LT {strcpy($$, "<");}
  | GE {strcpy($$, ">=");}
  | GT {strcpy($$, ">");}
  | NE {strcpy($$, "!=");}
  ;

exp
  : exp PLUS exp  
  {
    printf("T%d = %s + %s\n",temporary,$1,$3);
    sprintf($$, "T%d", temporary++);
  }

  | exp MINUS exp 
  {
    printf("T%d = %s - %s\n",temporary,$1,$3);
    sprintf($$, "T%d", temporary++);
  }

  | exp MULT exp 
  {
    printf("T%d = %s * %s\n",temporary,$1,$3);
    sprintf($$, "T%d", temporary++);
  }  

  | exp DIV exp
  {
    printf("T%d = %s / %s\n",temporary,$1,$3);
    sprintf($$, "T%d", temporary++);
  }  
  | exp MOD exp
  {
    printf("T%d = %s mod %s\n",temporary,$1,$3);
    sprintf($$, "T%d", temporary++);
  }  

  | MINUS exp
  {
    printf("T%d = -%s\n",temporary,$2); 
    sprintf($$, "T%d", temporary++);
  }

  | PLUS exp
  {
    printf("T%d = +%s\n",temporary,$2);
    sprintf($$, "T%d", temporary++);
  }

  | LEFT_PAREN exp RIGHT_PAREN 
  {
    printf("T%d = %s\n",temporary,$2);
    sprintf($$, "T%d", temporary++);
  }
  | ID                         
  | INT_CONST                     
  ;

%%

int main() 
{ 
  int sno=0;
  printf("Enter the sample number you want to test : ");
  scanf("%d",&sno);
  char filename[100];
  snprintf(filename, sizeof(filename), "./inputs/e%d.txt", sno);
  extern FILE *yyin;  
  yyin = fopen(filename,"r");
  printf("3 address code of the selected example : ");
  yyparse(); 
  if(s_flag == 1) printf("Successful Program\n\n");
} 

void yyerror(const char *s) 
{  
  fprintf(stderr,"Check your input, error found at line: %d\n%s\n",yylineno,s); 
  s_flag = 0; 
} 
