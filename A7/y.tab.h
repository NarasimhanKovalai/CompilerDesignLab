/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AND = 258,                     /* AND  */
    ASSIGN = 259,                  /* ASSIGN  */
    COLON = 260,                   /* COLON  */
    COMMA = 261,                   /* COMMA  */
    DEF = 262,                     /* DEF  */
    DIV = 263,                     /* DIV  */
    DOT = 264,                     /* DOT  */
    ELSE = 265,                    /* ELSE  */
    END = 266,                     /* END  */
    EQ = 267,                      /* EQ  */
    EXITLOOP = 268,                /* EXITLOOP  */
    FLOAT = 269,                   /* FLOAT  */
    FLOAT_CONST = 270,             /* FLOAT_CONST  */
    FORMAT = 271,                  /* FORMAT  */
    FROM = 272,                    /* FROM  */
    FUN = 273,                     /* FUN  */
    GE = 274,                      /* GE  */
    GLOBAL = 275,                  /* GLOBAL  */
    GT = 276,                      /* GT  */
    ID = 277,                      /* ID  */
    IF = 278,                      /* IF  */
    INT = 279,                     /* INT  */
    INT_CONST = 280,               /* INT_CONST  */
    LEFT_PAREN = 281,              /* LEFT_PAREN  */
    LEFT_SQ_BKT = 282,             /* LEFT_SQ_BKT  */
    LE = 283,                      /* LE  */
    LT = 284,                      /* LT  */
    MINUS = 285,                   /* MINUS  */
    MOD = 286,                     /* MOD  */
    MULT = 287,                    /* MULT  */
    NE = 288,                      /* NE  */
    NOT = 289,                     /* NOT  */
    NUL = 290,                     /* NUL  */
    OR = 291,                      /* OR  */
    PLUS = 292,                    /* PLUS  */
    PRINT = 293,                   /* PRINT  */
    PRODUCT = 294,                 /* PRODUCT  */
    READ = 295,                    /* READ  */
    RETURN = 296,                  /* RETURN  */
    RETURNS = 297,                 /* RETURNS  */
    RIGHT_PAREN = 298,             /* RIGHT_PAREN  */
    RIGHT_SQ_BKT = 299,            /* RIGHT_SQ_BKT  */
    SEMICOLON = 300,               /* SEMICOLON  */
    SKIP = 301,                    /* SKIP  */
    STEP = 302,                    /* STEP  */
    STRING = 303,                  /* STRING  */
    TO = 304,                      /* TO  */
    WHILE = 305,                   /* WHILE  */
    UMINUS = 306,                  /* UMINUS  */
    UPLUS = 307                    /* UPLUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AND 258
#define ASSIGN 259
#define COLON 260
#define COMMA 261
#define DEF 262
#define DIV 263
#define DOT 264
#define ELSE 265
#define END 266
#define EQ 267
#define EXITLOOP 268
#define FLOAT 269
#define FLOAT_CONST 270
#define FORMAT 271
#define FROM 272
#define FUN 273
#define GE 274
#define GLOBAL 275
#define GT 276
#define ID 277
#define IF 278
#define INT 279
#define INT_CONST 280
#define LEFT_PAREN 281
#define LEFT_SQ_BKT 282
#define LE 283
#define LT 284
#define MINUS 285
#define MOD 286
#define MULT 287
#define NE 288
#define NOT 289
#define NUL 290
#define OR 291
#define PLUS 292
#define PRINT 293
#define PRODUCT 294
#define READ 295
#define RETURN 296
#define RETURNS 297
#define RIGHT_PAREN 298
#define RIGHT_SQ_BKT 299
#define SEMICOLON 300
#define SKIP 301
#define STEP 302
#define STRING 303
#define TO 304
#define WHILE 305
#define UMINUS 306
#define UPLUS 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
