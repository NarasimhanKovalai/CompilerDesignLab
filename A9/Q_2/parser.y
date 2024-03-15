%{ 
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  struct DAGNode
{
    int op;
    char type[1000];
    int un_id;
    char expression[200];
    struct DAGNode *left;
    struct DAGNode *right;
};
  struct DAGNode *main_func(char expression[200], int, char* , struct DAGNode *, struct DAGNode *);
  struct DAGNode * dp[200];
struct DAGNode *dag_new_node(int un_id, int op, char *type, char expression[200], struct DAGNode *left, struct DAGNode *right)
{
    struct DAGNode *newnode = (struct DAGNode *)malloc(sizeof(struct DAGNode));
    newnode->un_id = un_id;
    newnode->op = op;
    strcpy(newnode->type,type);
    printf("Successfuly constructed DAGNode  %s\n",type);
    strcpy(newnode->expression, expression);
    newnode->left = left;
    newnode->right = right;
    return newnode;
}
  
  void traverse_dag(struct DAGNode *, int v[]);
  void display_traversal(struct DAGNode *);
  int optim_scope(char expression[200]);
  void insert_func(struct DAGNode *newNode);

  int node_id = 0;
  void yyerror(const char* );
  int flag=0;
 FILE * dot;
%}

%union {
  struct DAGNode *DAGNode;
  char* ch_pter;
}

%type<DAGNode> calc expr term factor


%token <ch_pter> NUMBER

/* Precedence section */
%left '+' '-'
%left '*' '/' 
%left '(' ')'


%start calc

/* Rule Section */
%%
calc: expr  { 
        $$ = $1;
        display_traversal($$);
        return 0; 
      };

expr: expr'+'term { 
            char temp[200];
            sprintf(temp,"%s + %s", $1->expression, $3->expression);
            char*  plus="+";
            $$ = main_func(temp, 1, plus, $1, $3);
            
            
         }
|  expr'-'term { 
            char temp[200];
            sprintf(temp,"%s - %s", $1->expression, $3->expression);
            char* minus="-";
            $$ = main_func(temp, 1, minus, $1, $3);
         }
|  term     { $$ = $1; };

term: term'*'factor {  
            char temp[200];
            sprintf(temp,"%s * %s", $1->expression, $3->expression);
            char* mult="*";
            $$= main_func(temp, 1,mult, $1, $3);
            
            
         }
|  term'/'factor { 
            char temp[200];
            sprintf(temp,"%s / %s", $1->expression, $3->expression);
            char* divi="/";
            $$= main_func(temp, 1, divi, $1, $3);
            
         }

|   factor    { $$ = $1; }; 

factor: NUMBER  { 
            char temp[200];
            sprintf(temp,"%s", $1);
            $$ = main_func(temp, 0, $1, NULL, NULL);
        }

| '('expr')' { $$ = $2; }
%%



int main()
{
    printf("Enter input \n");
    dot=fopen("dag.dot","w");
    fprintf(dot,"Digraph G{\n");
    yyparse();
    fprintf(dot,"}");
    fclose(dot); 
    return 0;
    if(!flag){
        printf("Valid");
    }
}


void display_traversal(struct DAGNode *root)
{
    printf("\nResult\n");
    printf(" The root of the DAG traversal is %s\n",root->type);
    int v[node_id];
    int i;
    for (i = 0; i < node_id; i++)
    {
        v[i] = 0;
    }
    traverse_dag(root, v);
    printf("\n");
}

void traverse_dag(struct DAGNode *root, int v[]) {
    if (!root) {
        return;
    }

    if (v[root->un_id]) {
        return;
    }

    v[root->un_id] = 1;

    traverse_dag(root->left, v);
    traverse_dag(root->right, v);
    
    fprintf(dot,"%d [color=red shape=\"tripleoctagon\" label=\"%s\"];\n",root->un_id,root->type);
    if(root->left){
        fprintf(dot,"%d -> %d;\n",root->un_id,root->left->un_id);

    }
    if(root->right){
        fprintf(dot,"%d -> %d;\n",root->un_id,root->right->un_id);
    }

    if (root->op) {
        printf("Operator: %s\n", root->type);
    } else {
        printf("Operand: %s\n", root->expression);
    }
}


int optim_scope(char expression[200])
{
    int i;
    for (int i = 0; i < node_id; i++)
    {
        if (strcmp(dp[i]->expression, expression) == 0)
        {
            return i;
        }
    }
    return -1;
}

void insert_func(struct DAGNode *newNode)
{
    dp[node_id++] = newNode;
}

struct DAGNode *main_func(char expression[200], int op, char* type, struct DAGNode *left, struct DAGNode *right)
{

    int optimize = optim_scope(expression);
    /*Use already existing value if possible*/
    if (optimize >= 0)
    {
        return dp[optimize];
    }
    else
    {
        struct DAGNode *newnode = dag_new_node(node_id, op, type, expression, left, right);
        insert_func(newnode);
        return newnode;
    }
}

void yyerror(const char*str)
{
    printf("Entered arithmetic expression is invalid\n");
    flag=1;
}