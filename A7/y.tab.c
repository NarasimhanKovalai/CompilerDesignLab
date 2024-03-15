/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "aut_parser.y"
 
    #include <stdio.h> 
    // #include "lex.yy.c"
    int flag=0; 
    void yyerror(const char *str);

#line 78 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AND = 3,                        /* AND  */
  YYSYMBOL_ASSIGN = 4,                     /* ASSIGN  */
  YYSYMBOL_COLON = 5,                      /* COLON  */
  YYSYMBOL_COMMA = 6,                      /* COMMA  */
  YYSYMBOL_DEF = 7,                        /* DEF  */
  YYSYMBOL_DIV = 8,                        /* DIV  */
  YYSYMBOL_DOT = 9,                        /* DOT  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_END = 11,                       /* END  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_EXITLOOP = 13,                  /* EXITLOOP  */
  YYSYMBOL_FLOAT = 14,                     /* FLOAT  */
  YYSYMBOL_FLOAT_CONST = 15,               /* FLOAT_CONST  */
  YYSYMBOL_FORMAT = 16,                    /* FORMAT  */
  YYSYMBOL_FROM = 17,                      /* FROM  */
  YYSYMBOL_FUN = 18,                       /* FUN  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_GLOBAL = 20,                    /* GLOBAL  */
  YYSYMBOL_GT = 21,                        /* GT  */
  YYSYMBOL_ID = 22,                        /* ID  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_INT = 24,                       /* INT  */
  YYSYMBOL_INT_CONST = 25,                 /* INT_CONST  */
  YYSYMBOL_LEFT_PAREN = 26,                /* LEFT_PAREN  */
  YYSYMBOL_LEFT_SQ_BKT = 27,               /* LEFT_SQ_BKT  */
  YYSYMBOL_LE = 28,                        /* LE  */
  YYSYMBOL_LT = 29,                        /* LT  */
  YYSYMBOL_MINUS = 30,                     /* MINUS  */
  YYSYMBOL_MOD = 31,                       /* MOD  */
  YYSYMBOL_MULT = 32,                      /* MULT  */
  YYSYMBOL_NE = 33,                        /* NE  */
  YYSYMBOL_NOT = 34,                       /* NOT  */
  YYSYMBOL_NUL = 35,                       /* NUL  */
  YYSYMBOL_OR = 36,                        /* OR  */
  YYSYMBOL_PLUS = 37,                      /* PLUS  */
  YYSYMBOL_PRINT = 38,                     /* PRINT  */
  YYSYMBOL_PRODUCT = 39,                   /* PRODUCT  */
  YYSYMBOL_READ = 40,                      /* READ  */
  YYSYMBOL_RETURN = 41,                    /* RETURN  */
  YYSYMBOL_RETURNS = 42,                   /* RETURNS  */
  YYSYMBOL_RIGHT_PAREN = 43,               /* RIGHT_PAREN  */
  YYSYMBOL_RIGHT_SQ_BKT = 44,              /* RIGHT_SQ_BKT  */
  YYSYMBOL_SEMICOLON = 45,                 /* SEMICOLON  */
  YYSYMBOL_SKIP = 46,                      /* SKIP  */
  YYSYMBOL_STEP = 47,                      /* STEP  */
  YYSYMBOL_STRING = 48,                    /* STRING  */
  YYSYMBOL_TO = 49,                        /* TO  */
  YYSYMBOL_WHILE = 50,                     /* WHILE  */
  YYSYMBOL_UMINUS = 51,                    /* UMINUS  */
  YYSYMBOL_UPLUS = 52,                     /* UPLUS  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_S = 54,                         /* S  */
  YYSYMBOL_prog = 55,                      /* prog  */
  YYSYMBOL_declList = 56,                  /* declList  */
  YYSYMBOL_decl = 57,                      /* decl  */
  YYSYMBOL_typeList = 58,                  /* typeList  */
  YYSYMBOL_varList = 59,                   /* varList  */
  YYSYMBOL_var = 60,                       /* var  */
  YYSYMBOL_sizeListO = 61,                 /* sizeListO  */
  YYSYMBOL_sizeList = 62,                  /* sizeList  */
  YYSYMBOL_type = 63,                      /* type  */
  YYSYMBOL_typeDef = 64,                   /* typeDef  */
  YYSYMBOL_funDef = 65,                    /* funDef  */
  YYSYMBOL_funID = 66,                     /* funID  */
  YYSYMBOL_fParamListO = 67,               /* fParamListO  */
  YYSYMBOL_fParamList = 68,                /* fParamList  */
  YYSYMBOL_pList = 69,                     /* pList  */
  YYSYMBOL_idP = 70,                       /* idP  */
  YYSYMBOL_funBody = 71,                   /* funBody  */
  YYSYMBOL_stmtListO = 72,                 /* stmtListO  */
  YYSYMBOL_stmtList = 73,                  /* stmtList  */
  YYSYMBOL_stmt = 74,                      /* stmt  */
  YYSYMBOL_assignmentStmt = 75,            /* assignmentStmt  */
  YYSYMBOL_dotId = 76,                     /* dotId  */
  YYSYMBOL_readStmt = 77,                  /* readStmt  */
  YYSYMBOL_printStmt = 78,                 /* printStmt  */
  YYSYMBOL_ifStmt = 79,                    /* ifStmt  */
  YYSYMBOL_elsePart = 80,                  /* elsePart  */
  YYSYMBOL_whileStmt = 81,                 /* whileStmt  */
  YYSYMBOL_loopStmt = 82,                  /* loopStmt  */
  YYSYMBOL_stepPart = 83,                  /* stepPart  */
  YYSYMBOL_callStmt = 84,                  /* callStmt  */
  YYSYMBOL_returnStmt = 85,                /* returnStmt  */
  YYSYMBOL_expO = 86,                      /* expO  */
  YYSYMBOL_exitLoop = 87,                  /* exitLoop  */
  YYSYMBOL_skip = 88,                      /* skip  */
  YYSYMBOL_id = 89,                        /* id  */
  YYSYMBOL_indxListO = 90,                 /* indxListO  */
  YYSYMBOL_indxList = 91,                  /* indxList  */
  YYSYMBOL_bExp = 92,                      /* bExp  */
  YYSYMBOL_relOP = 93,                     /* relOP  */
  YYSYMBOL_exp = 94,                       /* exp  */
  YYSYMBOL_actParamListO = 95,             /* actParamListO  */
  YYSYMBOL_actParamList = 96               /* actParamList  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    76,    76,    81,    83,    84,    86,    87,    89,    90,
      91,    93,    94,    96,    98,    99,   101,   102,   104,   105,
     106,   107,   108,   109,   111,   113,   115,   117,   118,   120,
     121,   123,   124,   126,   128,   130,   131,   133,   134,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   147,
     149,   150,   152,   154,   155,   157,   159,   160,   162,   164,
     166,   167,   169,   171,   173,   174,   176,   178,   180,   182,
     183,   185,   186,   188,   189,   190,   191,   192,   194,   195,
     196,   197,   198,   199,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   215,   216,   218,
     219
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AND", "ASSIGN",
  "COLON", "COMMA", "DEF", "DIV", "DOT", "ELSE", "END", "EQ", "EXITLOOP",
  "FLOAT", "FLOAT_CONST", "FORMAT", "FROM", "FUN", "GE", "GLOBAL", "GT",
  "ID", "IF", "INT", "INT_CONST", "LEFT_PAREN", "LEFT_SQ_BKT", "LE", "LT",
  "MINUS", "MOD", "MULT", "NE", "NOT", "NUL", "OR", "PLUS", "PRINT",
  "PRODUCT", "READ", "RETURN", "RETURNS", "RIGHT_PAREN", "RIGHT_SQ_BKT",
  "SEMICOLON", "SKIP", "STEP", "STRING", "TO", "WHILE", "UMINUS", "UPLUS",
  "$accept", "S", "prog", "declList", "decl", "typeList", "varList", "var",
  "sizeListO", "sizeList", "type", "typeDef", "funDef", "funID",
  "fParamListO", "fParamList", "pList", "idP", "funBody", "stmtListO",
  "stmtList", "stmt", "assignmentStmt", "dotId", "readStmt", "printStmt",
  "ifStmt", "elsePart", "whileStmt", "loopStmt", "stepPart", "callStmt",
  "returnStmt", "expO", "exitLoop", "skip", "id", "indxListO", "indxList",
  "bExp", "relOP", "exp", "actParamListO", "actParamList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-107)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,    65,    25,  -107,    -9,    45,    90,    65,  -107,     6,
      13,    71,    64,  -107,  -107,    69,    63,  -107,    66,   -10,
     210,    70,    26,    83,   226,  -107,   210,   103,    49,  -107,
    -107,   107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,   108,  -107,    81,   104,  -107,   106,  -107,   112,    47,
     112,  -107,   111,    93,    92,   100,  -107,   135,   226,  -107,
     123,  -107,  -107,   212,   226,   210,   226,  -107,    17,   191,
     146,   226,  -107,   226,   228,  -107,   136,    27,  -107,    90,
     226,    66,    -9,   114,   127,   111,   149,  -107,   151,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,    47,    63,    47,    63,
     226,    78,   226,     9,    16,   153,   110,  -107,   110,   210,
      90,   210,   226,   226,  -107,  -107,  -107,  -107,  -107,   226,
     226,   226,  -107,   226,   226,   226,   136,   136,   161,    90,
    -107,   136,  -107,    15,  -107,   119,    47,    65,   121,  -107,
    -107,    -3,  -107,   116,   226,  -107,  -107,  -107,    11,  -107,
     147,   162,   110,   147,   147,   110,   136,   136,    12,    20,
    -107,  -107,  -107,    90,  -107,    47,   226,  -107,   132,   170,
      90,   166,   226,  -107,  -107,  -107,  -107,     7,  -107,    49,
    -107,   136,   226,   173,   136,    90,   169,  -107
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     0,     2,     0,     0,    36,     5,     1,    15,
       0,     0,    12,    10,    26,     0,    28,    66,     0,    70,
       0,     0,     0,     0,    65,    67,     0,     0,    35,    38,
      39,     0,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    50,     4,     0,     0,    13,    14,     6,     0,     0,
       0,     7,    15,     0,    27,     0,    32,     0,     0,    68,
      69,    96,    95,     0,     0,     0,     0,    93,     0,     0,
       0,     0,    53,     0,     0,    63,    64,     0,     3,     0,
       0,     0,     0,     0,     0,    15,     0,    19,    23,    18,
      21,    20,     9,    22,    11,    33,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     0,    89,    75,    90,     0,
       0,     0,     0,     0,    78,    81,    82,    79,    80,     0,
       0,     0,    83,     0,     0,     0,    54,    52,     0,     0,
      37,    49,    51,     0,    17,     0,     0,     5,     0,    30,
      31,     0,    72,     0,    98,    76,    92,    74,    57,    73,
      87,    91,    85,    88,    86,    84,    77,   100,     0,     0,
      24,    16,     8,    36,    25,     0,     0,    71,     0,    97,
       0,     0,     0,    62,    58,    34,    29,    61,    94,    56,
      55,    99,     0,     0,    60,    36,     0,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,  -107,    -5,  -107,   105,    18,  -107,   137,  -107,
     -87,    -1,  -107,  -107,  -107,  -107,    91,    95,  -107,  -101,
    -106,   118,  -107,   120,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,    -6,  -107,  -107,   -18,
    -107,   -23,  -107,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     6,     7,    10,    11,    12,    45,    46,
      92,    93,    15,    16,    53,    54,    55,    56,   164,    27,
      28,    29,    30,    31,    32,    33,    34,   171,    35,    36,
     183,    37,    38,    75,    39,    40,    67,    59,    60,    68,
     124,    69,   168,   158
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    76,    42,    13,   148,   112,   113,     1,    77,   137,
      43,   139,    57,     9,   144,   112,   113,    58,   172,   109,
     109,   170,   110,   159,    47,     8,   160,   119,   120,   121,
     109,   174,   129,    44,   123,   101,    58,   119,   120,   121,
     105,   106,    71,   108,   123,   104,   166,   107,   126,   162,
     127,   128,   111,   111,   182,   173,    79,   131,    48,   145,
      48,    87,   175,   111,   179,    79,    86,    14,    94,    88,
      50,    89,     4,    41,    72,    41,    49,   141,   176,   143,
      51,    13,    90,     5,   186,    52,   112,   113,    19,   150,
     151,   147,    70,   149,    79,    91,   152,   153,   154,    73,
     155,   156,   157,    17,    41,    98,    99,    18,   119,   120,
     121,    80,    19,    20,    78,   123,    21,    81,   112,   113,
      82,   157,   142,    41,   112,   113,   165,    99,    22,    83,
      23,    24,   163,    84,    85,    96,    25,    97,    44,   100,
      26,   120,   121,   177,   112,   113,   119,   120,   121,   181,
     102,   125,   135,   123,   136,    43,   113,    41,   134,   184,
     167,   112,   113,   161,    41,   114,   119,   120,   121,   112,
     113,    -1,   115,   123,   116,   178,   172,   180,   185,    41,
     187,   117,   118,   119,   120,   121,   122,   133,   138,    95,
     123,   119,   120,   121,   140,   169,   146,   130,   123,   112,
     113,   132,     0,   114,   146,     0,     0,     0,     0,     0,
     115,     0,   116,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,   121,   122,    61,     0,    61,   123,     0,
       0,     0,    19,     0,   103,    62,    63,    62,    63,     0,
      64,    61,    64,    61,    65,     0,    65,    66,    19,    66,
     103,    62,    74,    62,    74,     0,    64,     0,    64,     0,
       0,     0,     0,    66,     0,    66
};

static const yytype_int16 yycheck[] =
{
       6,    24,     7,     4,   110,     8,     9,    20,    26,    96,
       4,    98,    18,    22,     5,     8,     9,    27,     6,     3,
       3,    10,     5,   129,    11,     0,    11,    30,    31,    32,
       3,    11,     5,    27,    37,    58,    27,    30,    31,    32,
      63,    64,    16,    66,    37,    63,    49,    65,    71,   136,
      73,    74,    36,    36,    47,    43,    45,    80,    45,    43,
      45,    14,   163,    36,   170,    45,    48,    22,    50,    22,
       6,    24,     7,    79,    48,    81,     5,   100,   165,   102,
      11,    82,    35,    18,   185,    22,     8,     9,    22,   112,
     113,   109,    22,   111,    45,    48,   119,   120,   121,    16,
     123,   124,   125,    13,   110,     5,     6,    17,    30,    31,
      32,     4,    22,    23,    11,    37,    26,     9,     8,     9,
      39,   144,    44,   129,     8,     9,     5,     6,    38,    25,
      40,    41,   137,    27,    22,    42,    46,    45,    27,     4,
      50,    31,    32,   166,     8,     9,    30,    31,    32,   172,
      27,     5,    25,    37,     5,     4,     9,   163,    44,   182,
      44,     8,     9,    44,   170,    12,    30,    31,    32,     8,
       9,     9,    19,    37,    21,    43,     6,    11,     5,   185,
      11,    28,    29,    30,    31,    32,    33,    82,    97,    52,
      37,    30,    31,    32,    99,   144,    43,    79,    37,     8,
       9,    81,    -1,    12,    43,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    15,    -1,    15,    37,    -1,
      -1,    -1,    22,    -1,    22,    25,    26,    25,    26,    -1,
      30,    15,    30,    15,    34,    -1,    34,    37,    22,    37,
      22,    25,    26,    25,    26,    -1,    30,    -1,    30,    -1,
      -1,    -1,    -1,    37,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    54,    55,     7,    18,    56,    57,     0,    22,
      58,    59,    60,    64,    22,    65,    66,    13,    17,    22,
      23,    26,    38,    40,    41,    46,    50,    72,    73,    74,
      75,    76,    77,    78,    79,    81,    82,    84,    85,    87,
      88,    89,    56,     4,    27,    61,    62,    11,    45,     5,
       6,    11,    22,    67,    68,    69,    70,    89,    27,    90,
      91,    15,    25,    26,    30,    34,    37,    89,    92,    94,
      22,    16,    48,    16,    26,    86,    94,    92,    11,    45,
       4,     9,    39,    25,    27,    22,    59,    14,    22,    24,
      35,    48,    63,    64,    59,    61,    42,    45,     5,     6,
       4,    94,    27,    22,    92,    94,    94,    92,    94,     3,
       5,    36,     8,     9,    12,    19,    21,    28,    29,    30,
      31,    32,    33,    37,    93,     5,    94,    94,    94,     5,
      74,    94,    76,    58,    44,    25,     5,    63,    69,    63,
      70,    94,    44,    94,     5,    43,    43,    92,    73,    92,
      94,    94,    94,    94,    94,    94,    94,    94,    96,    73,
      11,    44,    63,    56,    71,     5,    49,    44,    95,    96,
      10,    80,     6,    43,    11,    72,    63,    94,    43,    73,
      11,    94,    47,    83,    94,     5,    72,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    56,    56,    57,    57,    58,    58,
      58,    59,    59,    60,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    64,    65,    66,    67,    67,    68,
      68,    69,    69,    70,    71,    72,    72,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      76,    76,    77,    78,    78,    79,    80,    80,    81,    82,
      83,    83,    84,    85,    86,    86,    87,    88,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    96,
      96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     2,     0,     3,     3,     5,     3,
       1,     3,     1,     2,     1,     0,     4,     3,     1,     1,
       1,     1,     1,     1,     5,     5,     1,     1,     0,     5,
       3,     3,     1,     2,     2,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     2,     3,     6,     2,     0,     5,    10,
       2,     0,     5,     2,     1,     0,     1,     1,     2,     1,
       0,     4,     3,     3,     3,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     1,     5,     1,     1,     1,     0,     3,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* S: prog  */
#line 77 "aut_parser.y"
{ 
	printf("Input example has been parsed successfully."); 
	return 0; 
}
#line 1585 "y.tab.c"
    break;

  case 3: /* prog: GLOBAL declList stmtListO END  */
#line 81 "aut_parser.y"
                                     {}
#line 1591 "y.tab.c"
    break;

  case 4: /* declList: decl declList  */
#line 83 "aut_parser.y"
                        {}
#line 1597 "y.tab.c"
    break;

  case 5: /* declList: %empty  */
#line 84 "aut_parser.y"
  {}
#line 1603 "y.tab.c"
    break;

  case 6: /* decl: DEF typeList END  */
#line 86 "aut_parser.y"
                       {}
#line 1609 "y.tab.c"
    break;

  case 7: /* decl: FUN funDef END  */
#line 87 "aut_parser.y"
                {}
#line 1615 "y.tab.c"
    break;

  case 8: /* typeList: typeList SEMICOLON varList COLON type  */
#line 89 "aut_parser.y"
                                                {}
#line 1621 "y.tab.c"
    break;

  case 9: /* typeList: varList COLON type  */
#line 90 "aut_parser.y"
                    {}
#line 1627 "y.tab.c"
    break;

  case 10: /* typeList: typeDef  */
#line 91 "aut_parser.y"
         {}
#line 1633 "y.tab.c"
    break;

  case 11: /* varList: var COMMA varList  */
#line 93 "aut_parser.y"
                           {}
#line 1639 "y.tab.c"
    break;

  case 12: /* varList: var  */
#line 94 "aut_parser.y"
     {}
#line 1645 "y.tab.c"
    break;

  case 13: /* var: ID sizeListO  */
#line 96 "aut_parser.y"
                  {}
#line 1651 "y.tab.c"
    break;

  case 14: /* sizeListO: sizeList  */
#line 98 "aut_parser.y"
                    {}
#line 1657 "y.tab.c"
    break;

  case 15: /* sizeListO: %empty  */
#line 99 "aut_parser.y"
   {}
#line 1663 "y.tab.c"
    break;

  case 16: /* sizeList: sizeList LEFT_SQ_BKT INT_CONST RIGHT_SQ_BKT  */
#line 101 "aut_parser.y"
                                                      {}
#line 1669 "y.tab.c"
    break;

  case 17: /* sizeList: LEFT_SQ_BKT INT_CONST RIGHT_SQ_BKT  */
#line 102 "aut_parser.y"
                                    {}
#line 1675 "y.tab.c"
    break;

  case 18: /* type: INT  */
#line 104 "aut_parser.y"
          {}
#line 1681 "y.tab.c"
    break;

  case 19: /* type: FLOAT  */
#line 105 "aut_parser.y"
       {}
#line 1687 "y.tab.c"
    break;

  case 20: /* type: STRING  */
#line 106 "aut_parser.y"
        {}
#line 1693 "y.tab.c"
    break;

  case 21: /* type: NUL  */
#line 107 "aut_parser.y"
     {}
#line 1699 "y.tab.c"
    break;

  case 22: /* type: typeDef  */
#line 108 "aut_parser.y"
         {}
#line 1705 "y.tab.c"
    break;

  case 23: /* type: ID  */
#line 109 "aut_parser.y"
    {}
#line 1711 "y.tab.c"
    break;

  case 24: /* typeDef: ID ASSIGN PRODUCT typeList END  */
#line 111 "aut_parser.y"
                                        {}
#line 1717 "y.tab.c"
    break;

  case 25: /* funDef: funID fParamListO RETURNS type funBody  */
#line 113 "aut_parser.y"
                                               {}
#line 1723 "y.tab.c"
    break;

  case 26: /* funID: ID  */
#line 115 "aut_parser.y"
          {}
#line 1729 "y.tab.c"
    break;

  case 27: /* fParamListO: fParamList  */
#line 117 "aut_parser.y"
                        {}
#line 1735 "y.tab.c"
    break;

  case 28: /* fParamListO: %empty  */
#line 118 "aut_parser.y"
   {}
#line 1741 "y.tab.c"
    break;

  case 29: /* fParamList: fParamList SEMICOLON pList COLON type  */
#line 120 "aut_parser.y"
                                                  {}
#line 1747 "y.tab.c"
    break;

  case 30: /* fParamList: pList COLON type  */
#line 121 "aut_parser.y"
                  {}
#line 1753 "y.tab.c"
    break;

  case 31: /* pList: pList COMMA idP  */
#line 123 "aut_parser.y"
                       {}
#line 1759 "y.tab.c"
    break;

  case 32: /* pList: idP  */
#line 124 "aut_parser.y"
     {}
#line 1765 "y.tab.c"
    break;

  case 33: /* idP: ID sizeListO  */
#line 126 "aut_parser.y"
                  {}
#line 1771 "y.tab.c"
    break;

  case 34: /* funBody: declList stmtListO  */
#line 128 "aut_parser.y"
                            {}
#line 1777 "y.tab.c"
    break;

  case 35: /* stmtListO: stmtList  */
#line 130 "aut_parser.y"
                    {}
#line 1783 "y.tab.c"
    break;

  case 36: /* stmtListO: %empty  */
#line 131 "aut_parser.y"
   {}
#line 1789 "y.tab.c"
    break;

  case 37: /* stmtList: stmtList SEMICOLON stmt  */
#line 133 "aut_parser.y"
                                  {}
#line 1795 "y.tab.c"
    break;

  case 38: /* stmtList: stmt  */
#line 134 "aut_parser.y"
       {}
#line 1801 "y.tab.c"
    break;

  case 39: /* stmt: assignmentStmt  */
#line 136 "aut_parser.y"
                     {}
#line 1807 "y.tab.c"
    break;

  case 40: /* stmt: readStmt  */
#line 137 "aut_parser.y"
          {}
#line 1813 "y.tab.c"
    break;

  case 41: /* stmt: printStmt  */
#line 138 "aut_parser.y"
           {}
#line 1819 "y.tab.c"
    break;

  case 42: /* stmt: ifStmt  */
#line 139 "aut_parser.y"
        {}
#line 1825 "y.tab.c"
    break;

  case 43: /* stmt: whileStmt  */
#line 140 "aut_parser.y"
           {}
#line 1831 "y.tab.c"
    break;

  case 44: /* stmt: loopStmt  */
#line 141 "aut_parser.y"
          {}
#line 1837 "y.tab.c"
    break;

  case 45: /* stmt: callStmt  */
#line 142 "aut_parser.y"
          {}
#line 1843 "y.tab.c"
    break;

  case 46: /* stmt: returnStmt  */
#line 143 "aut_parser.y"
            {}
#line 1849 "y.tab.c"
    break;

  case 47: /* stmt: exitLoop  */
#line 144 "aut_parser.y"
          {}
#line 1855 "y.tab.c"
    break;

  case 48: /* stmt: skip  */
#line 145 "aut_parser.y"
     {}
#line 1861 "y.tab.c"
    break;

  case 49: /* assignmentStmt: dotId ASSIGN exp  */
#line 147 "aut_parser.y"
                                 {}
#line 1867 "y.tab.c"
    break;

  case 50: /* dotId: id  */
#line 149 "aut_parser.y"
          {}
#line 1873 "y.tab.c"
    break;

  case 51: /* dotId: id DOT dotId  */
#line 150 "aut_parser.y"
              {}
#line 1879 "y.tab.c"
    break;

  case 52: /* readStmt: READ FORMAT exp  */
#line 152 "aut_parser.y"
                          {}
#line 1885 "y.tab.c"
    break;

  case 53: /* printStmt: PRINT STRING  */
#line 154 "aut_parser.y"
                        {}
#line 1891 "y.tab.c"
    break;

  case 54: /* printStmt: PRINT FORMAT exp  */
#line 155 "aut_parser.y"
                  {}
#line 1897 "y.tab.c"
    break;

  case 55: /* ifStmt: IF bExp COLON stmtList elsePart END  */
#line 157 "aut_parser.y"
                                            {}
#line 1903 "y.tab.c"
    break;

  case 56: /* elsePart: ELSE stmtList  */
#line 159 "aut_parser.y"
                        {}
#line 1909 "y.tab.c"
    break;

  case 57: /* elsePart: %empty  */
#line 160 "aut_parser.y"
   {}
#line 1915 "y.tab.c"
    break;

  case 58: /* whileStmt: WHILE bExp COLON stmtList END  */
#line 162 "aut_parser.y"
                                         {}
#line 1921 "y.tab.c"
    break;

  case 59: /* loopStmt: FROM id ASSIGN exp TO exp stepPart COLON stmtListO END  */
#line 164 "aut_parser.y"
                                                                 {}
#line 1927 "y.tab.c"
    break;

  case 60: /* stepPart: STEP exp  */
#line 166 "aut_parser.y"
                   {}
#line 1933 "y.tab.c"
    break;

  case 61: /* stepPart: %empty  */
#line 167 "aut_parser.y"
   {}
#line 1939 "y.tab.c"
    break;

  case 62: /* callStmt: LEFT_PAREN ID COLON actParamList RIGHT_PAREN  */
#line 169 "aut_parser.y"
                                                       {}
#line 1945 "y.tab.c"
    break;

  case 63: /* returnStmt: RETURN expO  */
#line 171 "aut_parser.y"
                        {}
#line 1951 "y.tab.c"
    break;

  case 64: /* expO: exp  */
#line 173 "aut_parser.y"
          {}
#line 1957 "y.tab.c"
    break;

  case 65: /* expO: %empty  */
#line 174 "aut_parser.y"
   {}
#line 1963 "y.tab.c"
    break;

  case 66: /* exitLoop: EXITLOOP  */
#line 176 "aut_parser.y"
                   {}
#line 1969 "y.tab.c"
    break;

  case 67: /* skip: SKIP  */
#line 178 "aut_parser.y"
           {}
#line 1975 "y.tab.c"
    break;

  case 68: /* id: ID indxListO  */
#line 180 "aut_parser.y"
                 {}
#line 1981 "y.tab.c"
    break;

  case 69: /* indxListO: indxList  */
#line 182 "aut_parser.y"
                    {}
#line 1987 "y.tab.c"
    break;

  case 70: /* indxListO: %empty  */
#line 183 "aut_parser.y"
   {}
#line 1993 "y.tab.c"
    break;

  case 71: /* indxList: indxList LEFT_SQ_BKT exp RIGHT_SQ_BKT  */
#line 185 "aut_parser.y"
                                                {}
#line 1999 "y.tab.c"
    break;

  case 72: /* indxList: LEFT_SQ_BKT exp RIGHT_SQ_BKT  */
#line 186 "aut_parser.y"
                              {}
#line 2005 "y.tab.c"
    break;

  case 73: /* bExp: bExp OR bExp  */
#line 188 "aut_parser.y"
                   {}
#line 2011 "y.tab.c"
    break;

  case 74: /* bExp: bExp AND bExp  */
#line 189 "aut_parser.y"
                {}
#line 2017 "y.tab.c"
    break;

  case 75: /* bExp: NOT bExp  */
#line 190 "aut_parser.y"
           {}
#line 2023 "y.tab.c"
    break;

  case 76: /* bExp: LEFT_PAREN bExp RIGHT_PAREN  */
#line 191 "aut_parser.y"
                             {}
#line 2029 "y.tab.c"
    break;

  case 77: /* bExp: exp relOP exp  */
#line 192 "aut_parser.y"
                {}
#line 2035 "y.tab.c"
    break;

  case 78: /* relOP: EQ  */
#line 194 "aut_parser.y"
          {}
#line 2041 "y.tab.c"
    break;

  case 79: /* relOP: LE  */
#line 195 "aut_parser.y"
    {}
#line 2047 "y.tab.c"
    break;

  case 80: /* relOP: LT  */
#line 196 "aut_parser.y"
    {}
#line 2053 "y.tab.c"
    break;

  case 81: /* relOP: GE  */
#line 197 "aut_parser.y"
    {}
#line 2059 "y.tab.c"
    break;

  case 82: /* relOP: GT  */
#line 198 "aut_parser.y"
    {}
#line 2065 "y.tab.c"
    break;

  case 83: /* relOP: NE  */
#line 199 "aut_parser.y"
    {}
#line 2071 "y.tab.c"
    break;

  case 84: /* exp: exp PLUS exp  */
#line 201 "aut_parser.y"
                  {}
#line 2077 "y.tab.c"
    break;

  case 85: /* exp: exp MINUS exp  */
#line 202 "aut_parser.y"
                {}
#line 2083 "y.tab.c"
    break;

  case 86: /* exp: exp MULT exp  */
#line 203 "aut_parser.y"
               {}
#line 2089 "y.tab.c"
    break;

  case 87: /* exp: exp DIV exp  */
#line 204 "aut_parser.y"
              {}
#line 2095 "y.tab.c"
    break;

  case 88: /* exp: exp MOD exp  */
#line 205 "aut_parser.y"
              {}
#line 2101 "y.tab.c"
    break;

  case 89: /* exp: MINUS exp  */
#line 206 "aut_parser.y"
            {}
#line 2107 "y.tab.c"
    break;

  case 90: /* exp: PLUS exp  */
#line 207 "aut_parser.y"
           {}
#line 2113 "y.tab.c"
    break;

  case 91: /* exp: exp DOT exp  */
#line 208 "aut_parser.y"
              {}
#line 2119 "y.tab.c"
    break;

  case 92: /* exp: LEFT_PAREN exp RIGHT_PAREN  */
#line 209 "aut_parser.y"
                             {}
#line 2125 "y.tab.c"
    break;

  case 93: /* exp: id  */
#line 210 "aut_parser.y"
     {}
#line 2131 "y.tab.c"
    break;

  case 94: /* exp: LEFT_PAREN ID COLON actParamListO RIGHT_PAREN  */
#line 211 "aut_parser.y"
                                                {}
#line 2137 "y.tab.c"
    break;

  case 95: /* exp: INT_CONST  */
#line 212 "aut_parser.y"
            {}
#line 2143 "y.tab.c"
    break;

  case 96: /* exp: FLOAT_CONST  */
#line 213 "aut_parser.y"
              {}
#line 2149 "y.tab.c"
    break;

  case 97: /* actParamListO: actParamList  */
#line 215 "aut_parser.y"
                            {}
#line 2155 "y.tab.c"
    break;

  case 98: /* actParamListO: %empty  */
#line 216 "aut_parser.y"
   {}
#line 2161 "y.tab.c"
    break;

  case 99: /* actParamList: actParamList COMMA exp  */
#line 218 "aut_parser.y"
                                     {}
#line 2167 "y.tab.c"
    break;

  case 100: /* actParamList: exp  */
#line 219 "aut_parser.y"
      {}
#line 2173 "y.tab.c"
    break;


#line 2177 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 221 "aut_parser.y"
 


void main() 
{ 
  // Get the example number
  int exampleNumber;
  printf("Enter the example number: ");
  scanf("%d", &exampleNumber);
  printf("\n");

  // Construct the file location
  char filename[100];
  snprintf(filename, sizeof(filename), "./inputs/e%d.txt", exampleNumber);

  // Open the file
  extern FILE *yyin;
  yyin = fopen(filename, "r");
  if (yyin == NULL) {
    printf("Please check file location %s\n", filename);
    return;
  }

  // Parse
  yyparse(); 

  // Successful parsing
  if (flag == 0) {
    printf("\nEntered program is Valid\n\n"); 
  }
}

// Error handling
void yyerror(const char *str) 
{ 
  printf("Detected error at line_number : %d\n%s\n" , yylineno, str); 
  flag = 1;
}

