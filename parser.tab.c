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
#line 34 "src/frontend/parser.y"

#include "parser.tab.hh"

  extern int yylex(void);
  void yyerror(const char *s);
  void save_to_dot(FILE *);
  int trav_and_write(FILE *, node *);

  AST ast("TestMod");

#line 82 "parser.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/frontend/parser.y"

  #include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <cstring>
#include <variant>
#include <iostream>
  //all of these includes are done as relative paths starting from the build/ directory, since that's where CMake places parser.tab.cc
#include "../src/ast.h"
#include "../src/expressions/call.h"
#include "../src/expressions/int.h"
#include "../src/expressions/float.h"
#include "../src/expressions/string.h"
#include "../src/expressions/variable.h"
#include "../src/expressions/addition.h"
#include "../src/expressions/subtraction.h"
#include "../src/expressions/multiplication.h"
#include "../src/expressions/division.h"
#include "../src/expressions/assignment.h"
#include "../src/expressions/comparison.h"
#include "../src/expressions/and.h"
#include "../src/expressions/or.h"
#include "../src/expressions/negative.h"
#include "../src/statements/block.h"
#include "../src/statements/while.h"
#include "../scr/statements/for.h"
#include "../src/statements/if.h"
#include "../src/statements/return.h"
#include "../src/types/simple.h"
extern FILE *yyin;
 

#line 148 "parser.tab.c"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    BOOL_TYPE = 259,               /* BOOL_TYPE  */
    INT_TYPE = 260,                /* INT_TYPE  */
    FLOAT_TYPE = 261,              /* FLOAT_TYPE  */
    STRING_TYPE = 262,             /* STRING_TYPE  */
    VOID_TYPE = 263,               /* VOID_TYPE  */
    SEMICOLON = 264,               /* SEMICOLON  */
    LPAREN = 265,                  /* LPAREN  */
    RPAREN = 266,                  /* RPAREN  */
    COMMA = 267,                   /* COMMA  */
    LBRACE = 268,                  /* LBRACE  */
    RBRACE = 269,                  /* RBRACE  */
    IF = 270,                      /* IF  */
    ELSE = 271,                    /* ELSE  */
    WHILE = 272,                   /* WHILE  */
    FOR = 273,                     /* FOR  */
    BREAK = 274,                   /* BREAK  */
    RETURN = 275,                  /* RETURN  */
    EQUALS_SIGN = 276,             /* EQUALS_SIGN  */
    LOGICAL_OR = 277,              /* LOGICAL_OR  */
    LOGICAL_AND = 278,             /* LOGICAL_AND  */
    LOGICAL_NOT = 279,             /* LOGICAL_NOT  */
    RELOP_GT = 280,                /* RELOP_GT  */
    RELOP_LT = 281,                /* RELOP_LT  */
    RELOP_GE = 282,                /* RELOP_GE  */
    RELOP_LE = 283,                /* RELOP_LE  */
    RELOP_EQ = 284,                /* RELOP_EQ  */
    RELOP_NE = 285,                /* RELOP_NE  */
    ARITH_PLUS = 286,              /* ARITH_PLUS  */
    ARITH_MINUS = 287,             /* ARITH_MINUS  */
    ARITH_MULT = 288,              /* ARITH_MULT  */
    ARITH_DIV = 289,               /* ARITH_DIV  */
    ARITH_MOD = 290,               /* ARITH_MOD  */
    VARIADIC = 291,                /* VARIADIC  */
    BOOL_LITERAL = 292,            /* BOOL_LITERAL  */
    INT_LITERAL = 293,             /* INT_LITERAL  */
    FLOAT_LITERAL = 294,           /* FLOAT_LITERAL  */
    STRING_LITERAL = 295,          /* STRING_LITERAL  */
    EOL = 296                      /* EOL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "src/frontend/parser.y"

  bool boolval;
  int intval;
  double fltval;
  char *strval;
  struct node *nodeval;
  ASTFunctionParameter *var;
  std::vector<ASTFunctionParameter *> *vars;
  ASTStatement *stmt;
  std::vector<ASTStatement *> *stmtVec;
  ASTExpression *exp;
  std::vector<ASTExpression *> *exprVec;
  VarType *type;
  ASTExpressionComparisonType rel;

#line 222 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_BOOL_TYPE = 4,                  /* BOOL_TYPE  */
  YYSYMBOL_INT_TYPE = 5,                   /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 6,                 /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 7,                /* STRING_TYPE  */
  YYSYMBOL_VOID_TYPE = 8,                  /* VOID_TYPE  */
  YYSYMBOL_SEMICOLON = 9,                  /* SEMICOLON  */
  YYSYMBOL_LPAREN = 10,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 11,                    /* RPAREN  */
  YYSYMBOL_COMMA = 12,                     /* COMMA  */
  YYSYMBOL_LBRACE = 13,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 14,                    /* RBRACE  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_EQUALS_SIGN = 21,               /* EQUALS_SIGN  */
  YYSYMBOL_LOGICAL_OR = 22,                /* LOGICAL_OR  */
  YYSYMBOL_LOGICAL_AND = 23,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_NOT = 24,               /* LOGICAL_NOT  */
  YYSYMBOL_RELOP_GT = 25,                  /* RELOP_GT  */
  YYSYMBOL_RELOP_LT = 26,                  /* RELOP_LT  */
  YYSYMBOL_RELOP_GE = 27,                  /* RELOP_GE  */
  YYSYMBOL_RELOP_LE = 28,                  /* RELOP_LE  */
  YYSYMBOL_RELOP_EQ = 29,                  /* RELOP_EQ  */
  YYSYMBOL_RELOP_NE = 30,                  /* RELOP_NE  */
  YYSYMBOL_ARITH_PLUS = 31,                /* ARITH_PLUS  */
  YYSYMBOL_ARITH_MINUS = 32,               /* ARITH_MINUS  */
  YYSYMBOL_ARITH_MULT = 33,                /* ARITH_MULT  */
  YYSYMBOL_ARITH_DIV = 34,                 /* ARITH_DIV  */
  YYSYMBOL_ARITH_MOD = 35,                 /* ARITH_MOD  */
  YYSYMBOL_VARIADIC = 36,                  /* VARIADIC  */
  YYSYMBOL_BOOL_LITERAL = 37,              /* BOOL_LITERAL  */
  YYSYMBOL_INT_LITERAL = 38,               /* INT_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 39,             /* FLOAT_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 40,            /* STRING_LITERAL  */
  YYSYMBOL_EOL = 41,                       /* EOL  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_decList = 44,                   /* decList  */
  YYSYMBOL_dec = 45,                       /* dec  */
  YYSYMBOL_type = 46,                      /* type  */
  YYSYMBOL_varDec = 47,                    /* varDec  */
  YYSYMBOL_varDecs = 48,                   /* varDecs  */
  YYSYMBOL_funDec = 49,                    /* funDec  */
  YYSYMBOL_funDef = 50,                    /* funDef  */
  YYSYMBOL_params = 51,                    /* params  */
  YYSYMBOL_paramList = 52,                 /* paramList  */
  YYSYMBOL_stmt = 53,                      /* stmt  */
  YYSYMBOL_exprStmt = 54,                  /* exprStmt  */
  YYSYMBOL_stmts = 55,                     /* stmts  */
  YYSYMBOL_selStmt = 56,                   /* selStmt  */
  YYSYMBOL_iterStmt = 57,                  /* iterStmt  */
  YYSYMBOL_forStmt = 58,                   /* forStmt  */
  YYSYMBOL_jumpStmt = 59,                  /* jumpStmt  */
  YYSYMBOL_expr = 60,                      /* expr  */
  YYSYMBOL_orExpr = 61,                    /* orExpr  */
  YYSYMBOL_andExpr = 62,                   /* andExpr  */
  YYSYMBOL_unaryRelExpr = 63,              /* unaryRelExpr  */
  YYSYMBOL_relExpr = 64,                   /* relExpr  */
  YYSYMBOL_relop = 65,                     /* relop  */
  YYSYMBOL_term = 66,                      /* term  */
  YYSYMBOL_factor = 67,                    /* factor  */
  YYSYMBOL_unary = 68,                     /* unary  */
  YYSYMBOL_primary = 69,                   /* primary  */
  YYSYMBOL_call = 70,                      /* call  */
  YYSYMBOL_args = 71,                      /* args  */
  YYSYMBOL_constant = 72,                  /* constant  */
  YYSYMBOL_int_lit = 73,                   /* int_lit  */
  YYSYMBOL_flt_lit = 74                    /* flt_lit  */
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
typedef yytype_int8 yy_state_t;

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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   176

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  124

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    86,    86,    86,    87,    87,    88,    88,    90,    92,
      94,    96,    98,   101,   105,   108,   112,   126,   150,   150,
     151,   154,   157,   162,   162,   169,   169,   169,   169,   170,
     172,   175,   179,   182,   184,   188,   192,   196,   200,   206,
     206,   209,   209,   212,   212,   215,   218,   219,   221,   222,
     224,   226,   228,   230,   232,   235,   235,   237,   240,   240,
     242,   244,   248,   250,   251,   253,   255,   257,   260,   267,
     271,   274,   278,   278,   278,   279,   280
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "BOOL_TYPE",
  "INT_TYPE", "FLOAT_TYPE", "STRING_TYPE", "VOID_TYPE", "SEMICOLON",
  "LPAREN", "RPAREN", "COMMA", "LBRACE", "RBRACE", "IF", "ELSE", "WHILE",
  "FOR", "BREAK", "RETURN", "EQUALS_SIGN", "LOGICAL_OR", "LOGICAL_AND",
  "LOGICAL_NOT", "RELOP_GT", "RELOP_LT", "RELOP_GE", "RELOP_LE",
  "RELOP_EQ", "RELOP_NE", "ARITH_PLUS", "ARITH_MINUS", "ARITH_MULT",
  "ARITH_DIV", "ARITH_MOD", "VARIADIC", "BOOL_LITERAL", "INT_LITERAL",
  "FLOAT_LITERAL", "STRING_LITERAL", "EOL", "$accept", "program",
  "decList", "dec", "type", "varDec", "varDecs", "funDec", "funDef",
  "params", "paramList", "stmt", "exprStmt", "stmts", "selStmt",
  "iterStmt", "forStmt", "jumpStmt", "expr", "orExpr", "andExpr",
  "unaryRelExpr", "relExpr", "relop", "term", "factor", "unary", "primary",
  "call", "args", "constant", "int_lit", "flt_lit", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     156,   -69,   -69,   -69,   -69,   -69,     7,   156,   -69,    15,
     -69,   -69,   -69,   -69,    20,   156,    35,    42,    43,   -69,
      12,   140,   -69,   -69,   -69,    56,   156,   -69,    58,    69,
       2,   -69,   -69,    -7,   -69,    98,   -69,   -69,    71,    72,
      81,    60,   103,   111,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,    84,    74,    79,   -69,   -69,   127,    -6,
     -69,   -69,   -69,   -69,   -69,   -69,    65,    98,    96,    34,
      98,    98,    85,   -69,   101,   105,   -69,   -69,   -69,   103,
     103,   -69,   -69,   -69,   -69,   -69,   -69,    80,    80,    80,
      80,    80,    80,   -69,   -69,    -2,   -69,   -69,   -69,   100,
     115,    85,   -69,    79,   -69,    -6,    -6,    -8,   -69,   -69,
     -69,   -69,    98,    47,    47,    98,   -69,   112,   -69,   118,
      47,    47,   -69,   -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     8,     9,    10,    11,    12,     0,     3,     5,     0,
       7,     6,     1,     4,     0,    19,     0,     0,    18,    21,
       0,     0,    16,    15,    22,     0,    32,    20,     0,     0,
       0,    13,    14,    64,    30,     0,    32,    17,     0,     0,
       0,     0,     0,     0,    75,    76,    74,    31,    23,    25,
      26,    28,    27,     0,    39,    41,    43,    46,    48,    55,
      58,    63,    66,    67,    72,    73,     0,     0,     0,     0,
       0,     0,     0,    37,     0,    64,    45,    62,    29,     0,
       0,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,     0,    69,    71,     0,    40,    65,    24,     0,
       0,     0,    38,    42,    44,    56,    57,    47,    59,    60,
      61,    68,     0,     0,     0,     0,    70,    33,    35,     0,
       0,     0,    34,    36
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,   109,   -13,   -69,   -69,   -69,   -69,   -69,
     -69,    19,   -68,    95,   -69,   -69,   -69,   -69,   -35,   -69,
      55,   -41,   -69,   -69,    82,   -42,    75,   125,   -69,   -69,
     -69,   -69,   -69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,     9,    29,    26,    10,    11,    17,
      18,    47,    48,    30,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    89,    58,    59,    60,    61,    62,    95,
      63,    64,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      68,    76,    16,    66,   101,    33,    74,    12,    25,   111,
     112,    34,    35,    28,    67,    36,    37,    38,    14,    39,
      40,    22,    41,    87,    88,    23,    42,    90,    91,    92,
      15,    94,    96,   115,    43,    99,   100,    33,    19,   104,
      44,    45,    46,    34,    35,   105,   106,    36,    98,    38,
      33,    39,    40,    20,    41,    21,    34,    35,    42,    27,
      36,    31,    38,    33,    39,    40,    43,    41,    33,    73,
      35,    42,    44,    45,    46,    35,    93,   116,    32,    43,
     119,    70,    71,    75,    42,    44,    45,    46,    33,    42,
      35,    72,    43,    78,    34,    35,    79,    43,    44,    45,
      46,    33,    80,    44,    45,    46,    75,    97,    35,    42,
     102,   113,    43,    35,    75,    66,    13,    43,    44,    45,
      46,    35,    42,    44,    45,    46,   114,    42,   120,   121,
      43,    69,   117,   118,   103,    43,    44,    45,    46,   122,
     123,    44,    45,    46,     1,     2,     3,     4,     5,    44,
      45,    46,    81,    82,    83,    84,    85,    86,    87,    88,
       1,     2,     3,     4,     5,   108,   109,   110,    77,     0,
       0,   107,     0,     0,     0,     0,    24
};

static const yytype_int8 yycheck[] =
{
      35,    42,    15,    10,    72,     3,    41,     0,    21,    11,
      12,     9,    10,    26,    21,    13,    14,    15,     3,    17,
      18,     9,    20,    31,    32,    13,    24,    33,    34,    35,
      10,    66,    67,   101,    32,    70,    71,     3,     3,    80,
      38,    39,    40,     9,    10,    87,    88,    13,    14,    15,
       3,    17,    18,    11,    20,    12,     9,    10,    24,     3,
      13,     3,    15,     3,    17,    18,    32,    20,     3,     9,
      10,    24,    38,    39,    40,    10,    11,   112,     9,    32,
     115,    10,    10,     3,    24,    38,    39,    40,     3,    24,
      10,    10,    32,     9,     9,    10,    22,    32,    38,    39,
      40,     3,    23,    38,    39,    40,     3,    11,    10,    24,
       9,    11,    32,    10,     3,    10,     7,    32,    38,    39,
      40,    10,    24,    38,    39,    40,    11,    24,    16,    11,
      32,    36,   113,   114,    79,    32,    38,    39,    40,   120,
     121,    38,    39,    40,     4,     5,     6,     7,     8,    38,
      39,    40,    25,    26,    27,    28,    29,    30,    31,    32,
       4,     5,     6,     7,     8,    90,    91,    92,    43,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     7,     8,    43,    44,    45,    46,
      49,    50,     0,    45,     3,    10,    46,    51,    52,     3,
      11,    12,     9,    13,    36,    46,    48,     3,    46,    47,
      55,     3,     9,     3,     9,    10,    13,    14,    15,    17,
      18,    20,    24,    32,    38,    39,    40,    53,    54,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    66,    67,
      68,    69,    70,    72,    73,    74,    10,    21,    60,    55,
      10,    10,    10,     9,    60,     3,    63,    69,     9,    22,
      23,    25,    26,    27,    28,    29,    30,    31,    32,    65,
      33,    34,    35,    11,    60,    71,    60,    11,    14,    60,
      60,    54,     9,    62,    63,    67,    67,    66,    68,    68,
      68,    11,    12,    11,    11,    54,    60,    53,    53,    60,
      16,    11,    53,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    45,    45,    46,    46,
      46,    46,    46,    47,    48,    48,    49,    50,    51,    51,
      52,    52,    52,    53,    53,    53,    53,    53,    53,    54,
      54,    55,    55,    56,    56,    57,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    66,    66,    66,    67,    67,
      67,    67,    68,    68,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    72,    73,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     0,     6,     9,     1,     0,
       4,     2,     3,     1,     3,     1,     1,     1,     1,     2,
       1,     2,     0,     5,     7,     5,     7,     2,     3,     1,
       3,     1,     3,     1,     3,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     2,     1,     1,     3,     1,     1,     4,     3,
       3,     1,     1,     1,     1,     1,     1
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 8: /* type: BOOL_TYPE  */
#line 90 "src/frontend/parser.y"
                {
  (yyval.type) = new VarTypeSimple(VarTypeSimple::BoolType);
 }
#line 1645 "parser.tab.c"
    break;

  case 9: /* type: INT_TYPE  */
#line 92 "src/frontend/parser.y"
             {
  (yyval.type) = new VarTypeSimple(VarTypeSimple::IntType);
 }
#line 1653 "parser.tab.c"
    break;

  case 10: /* type: FLOAT_TYPE  */
#line 94 "src/frontend/parser.y"
               {
  (yyval.type) = new VarTypeSimple(VarTypeSimple::FloatType);
 }
#line 1661 "parser.tab.c"
    break;

  case 11: /* type: STRING_TYPE  */
#line 96 "src/frontend/parser.y"
                {
  (yyval.type) = new VarTypeSimple(VarTypeSimple::StringType);
 }
#line 1669 "parser.tab.c"
    break;

  case 12: /* type: VOID_TYPE  */
#line 98 "src/frontend/parser.y"
               {
  (yyval.type) = new VarTypeSimple(VarTypeSimple::VoidType);
 }
#line 1677 "parser.tab.c"
    break;

  case 13: /* varDec: type ID  */
#line 101 "src/frontend/parser.y"
                {
  //ASTFunctionParameter is just a tuple of a unique pointer to a type and a string (see definition in function.h)
  (yyval.var) = new ASTFunctionParameter(std::unique_ptr<VarType>((yyvsp[-1].type)), (yyvsp[0].strval)); 
 }
#line 1686 "parser.tab.c"
    break;

  case 14: /* varDecs: varDecs varDec SEMICOLON  */
#line 105 "src/frontend/parser.y"
                                  {
  (yyval.vars) = (yyvsp[-2].vars); //We know that varDecs is always a pointer to vector of variables, so we can just copy it and push the next variable
  (yyval.vars)->push_back((yyvsp[-1].var));
 }
#line 1695 "parser.tab.c"
    break;

  case 15: /* varDecs: %empty  */
#line 108 "src/frontend/parser.y"
     {
  (yyval.vars) = new std::vector<ASTFunctionParameter *>();
 }
#line 1703 "parser.tab.c"
    break;

  case 16: /* funDec: type ID LPAREN params RPAREN SEMICOLON  */
#line 112 "src/frontend/parser.y"
                                               {
  //create the parameters
  auto parameters = ASTFunctionParameters();
  bool variadic = false;
  for(auto p : *(yyvsp[-2].vars)) {
    /* The AST uses unique pointers for memory purposes, but bison doesn't work well with those, so the parser uses plain C-style pointers.
     * To account for this, make sure to dereference the pointers before using. */
    if (p) parameters.push_back(std::move(*p));
    else variadic = true;
  }
  //then make the function
  auto f = ast.AddFunction((yyvsp[-4].strval), std::unique_ptr<VarType>((yyvsp[-5].type)), std::move(parameters), variadic);
}
#line 1721 "parser.tab.c"
    break;

  case 17: /* funDef: type ID LPAREN params RPAREN LBRACE varDecs stmts RBRACE  */
#line 126 "src/frontend/parser.y"
                                                                 {
  /* Fill in this block. (This will be the largest one)
   * You can follow these steps to create the function and assign its behavior correctly:
   * - First, change the vector "stmts" into an ASTStatementBlock (this will need to be a unique pointer).
   * - Then, create the parameters and make the function, as above.
   * - Add the variables in "varDecs" to the function as stack variables.
   * - Define the function by the ASTStatementBlock. */
   auto ASTStatementBlock statements = new ASTStatementBlock();
   for(auto s : *(yyvsp[-1].stmtVec)) {
    statements->statements.push_back(std::unique_ptr<ASTStatement>(s));
   }
   auto parameters = ASTFunctionParameters();
   bool varidac = false;
   for(auto p : *(yyvsp[-5].vars)) {
    if(p) parameters.push_back(std::move(*p));
    else varidac = true;
   }
   auto f = ast.AddFunction((yyvsp[-7].strval), std::unique_ptr<VarType>((yyvsp[-8].type)), std::move(parameters), variadac);
  for(auto p : *(yyvsp[-2].vars)) {
    f.AddStackVar(std::move(*p));
  }
  f.Define(statements);

 }
#line 1750 "parser.tab.c"
    break;

  case 19: /* params: %empty  */
#line 150 "src/frontend/parser.y"
                    {(yyval.vars) = new std::vector<ASTFunctionParameter *>();}
#line 1756 "parser.tab.c"
    break;

  case 20: /* paramList: paramList COMMA type ID  */
#line 151 "src/frontend/parser.y"
                                   { // This works similarly to varDecs
  (yyval.vars) = (yyvsp[-3].vars);
  (yyval.vars)->push_back(new ASTFunctionParameter(std::unique_ptr<VarType>((yyvsp[-1].type)), (yyvsp[0].strval)));
 }
#line 1765 "parser.tab.c"
    break;

  case 21: /* paramList: type ID  */
#line 154 "src/frontend/parser.y"
             {
   (yyval.vars) = new std::vector<ASTFunctionParameter *>();
   (yyval.vars)->push_back(new ASTFunctionParameter(std::unique_ptr<VarType>((yyvsp[-1].type)), (yyvsp[0].strval)));
 }
#line 1774 "parser.tab.c"
    break;

  case 22: /* paramList: paramList COMMA VARIADIC  */
#line 157 "src/frontend/parser.y"
                              {
  (yyval.vars) = new std::vector<ASTFunctionParameter *>();
  (yyval.vars)->push_back(nullptr); // Using a null pointer to indicate a variadic function (see funDec)
 }
#line 1783 "parser.tab.c"
    break;

  case 23: /* stmt: exprStmt  */
#line 162 "src/frontend/parser.y"
               {(yyval.stmt) = (yyvsp[0].stmt);}
#line 1789 "parser.tab.c"
    break;

  case 24: /* stmt: LBRACE stmts RBRACE  */
#line 162 "src/frontend/parser.y"
                                                {
  //"stmts" is a vector of plain pointers to statements. We convert it to a statement block as follows:
  auto statements = new ASTStatementBlock();
  for(auto s : *(yyvsp[-1].stmtVec)) {
    statements->statements.push_back(std::unique_ptr<ASTStatement>(s));
  }
  (yyval.stmt) = statements;
 }
#line 1802 "parser.tab.c"
    break;

  case 25: /* stmt: selStmt  */
#line 169 "src/frontend/parser.y"
            {(yyval.stmt) = (yyvsp[0].stmt);}
#line 1808 "parser.tab.c"
    break;

  case 26: /* stmt: iterStmt  */
#line 169 "src/frontend/parser.y"
                                  {(yyval.stmt) = (yyvsp[0].stmt);}
#line 1814 "parser.tab.c"
    break;

  case 27: /* stmt: jumpStmt  */
#line 169 "src/frontend/parser.y"
                                                        {(yyval.stmt) = (yyvsp[0].stmt);}
#line 1820 "parser.tab.c"
    break;

  case 28: /* stmt: forStmt  */
#line 169 "src/frontend/parser.y"
                                                                             {(yyval.stmt) = (yyvsp[0].stmt);}
#line 1826 "parser.tab.c"
    break;

  case 29: /* exprStmt: expr SEMICOLON  */
#line 170 "src/frontend/parser.y"
                         {
  (yyval.stmt) = (yyvsp[-1].exp); //implicit cast expr -> stmt
 }
#line 1834 "parser.tab.c"
    break;

  case 30: /* exprStmt: SEMICOLON  */
#line 172 "src/frontend/parser.y"
               {
  (yyval.stmt) = new ASTStatementBlock(); //empty statement = empty block
 }
#line 1842 "parser.tab.c"
    break;

  case 31: /* stmts: stmts stmt  */
#line 175 "src/frontend/parser.y"
                  {
  //Here, we just place the statements into a vector. They'll be added to the AST in a parent's code action.
  (yyval.stmtVec) = (yyvsp[-1].stmtVec);
  (yyval.stmtVec)->push_back((yyvsp[0].stmt));
 }
#line 1852 "parser.tab.c"
    break;

  case 32: /* stmts: %empty  */
#line 179 "src/frontend/parser.y"
    {
  (yyval.stmtVec) = new std::vector<ASTStatement *>();
 }
#line 1860 "parser.tab.c"
    break;

  case 33: /* selStmt: IF LPAREN expr RPAREN stmt  */
#line 182 "src/frontend/parser.y"
                                    {
  (yyval.stmt) = new ASTStatementIf(std::unique_ptr<ASTExpression>((yyvsp[-2].exp)), std::unique_ptr<ASTStatement>((yyvsp[0].stmt)), std::unique_ptr<ASTStatement>(nullptr));
 }
#line 1868 "parser.tab.c"
    break;

  case 34: /* selStmt: IF LPAREN expr RPAREN stmt ELSE stmt  */
#line 184 "src/frontend/parser.y"
                                          {
  (yyval.stmt) = new ASTStatementIf(std::unique_ptr<ASTExpression>((yyvsp[-4].exp)), std::unique_ptr<ASTStatement>((yyvsp[0].stmt)), std::unique_ptr<ASTStatement>((yyvsp[-2].stmt)));
 }
#line 1876 "parser.tab.c"
    break;

  case 35: /* iterStmt: WHILE LPAREN expr RPAREN stmt  */
#line 188 "src/frontend/parser.y"
                                        {
  (yyval.stmt) = new ASTStatementWhile(std::unique_ptr<ASTExpression>((yyvsp[-2].exp)), std::unique_ptr<ASTStatement>((yyvsp[0].stmt)));
 }
#line 1884 "parser.tab.c"
    break;

  case 36: /* forStmt: FOR LPAREN exprStmt exprStmt expr RPAREN stmt  */
#line 192 "src/frontend/parser.y"
                                                       {
  (yyval.stmt) = new ASTStatementFor(std::unique_ptr<ASTStatement>((yyvsp[-4].stmt)), std::unique_ptr<ASTExpression>((yyvsp[-3].stmt)), std::unique_ptr<ASTStatement>((yyvsp[-2].exp)));
}
#line 1892 "parser.tab.c"
    break;

  case 37: /* jumpStmt: RETURN SEMICOLON  */
#line 196 "src/frontend/parser.y"
                           {
  auto retStmt = new ASTStatementReturn();
  retStmt->returnExpression = std::unique_ptr<ASTExpression>(nullptr);
  (yyval.stmt) = retStmt;
 }
#line 1902 "parser.tab.c"
    break;

  case 38: /* jumpStmt: RETURN expr SEMICOLON  */
#line 200 "src/frontend/parser.y"
                          {
  auto retStmt = new ASTStatementReturn();
  retStmt->returnExpression = std::unique_ptr<ASTExpression>((yyvsp[-1].exp));
  (yyval.stmt) = retStmt;
 }
#line 1912 "parser.tab.c"
    break;

  case 39: /* expr: orExpr  */
#line 206 "src/frontend/parser.y"
             { (yyval.exp) = (yyvsp[0].exp);}
#line 1918 "parser.tab.c"
    break;

  case 40: /* expr: ID EQUALS_SIGN expr  */
#line 206 "src/frontend/parser.y"
                                               {
  (yyval.exp) = new ASTExpressionAssignment(std::unique_ptr<ASTExpression>((yyvsp[-2].strval)), std::unique<ASTExpression>((yyvsp[0].exp)));
 }
#line 1926 "parser.tab.c"
    break;

  case 41: /* orExpr: andExpr  */
#line 209 "src/frontend/parser.y"
                {(yyval.exp) = (yyvsp[0].exp);}
#line 1932 "parser.tab.c"
    break;

  case 42: /* orExpr: orExpr LOGICAL_OR andExpr  */
#line 209 "src/frontend/parser.y"
                                                       {
  (yyval.exp) = new ASTExpressionOr(std::unique_ptr<ASTExpression>((yyvsp[-2].exp)), std::unique_ptr<ASTExpression>((yyvsp[0].exp)));
 }
#line 1940 "parser.tab.c"
    break;

  case 43: /* andExpr: unaryRelExpr  */
#line 212 "src/frontend/parser.y"
                      {(yyval.exp) = (yyvsp[0].exp);}
#line 1946 "parser.tab.c"
    break;

  case 44: /* andExpr: andExpr LOGICAL_AND unaryRelExpr  */
#line 212 "src/frontend/parser.y"
                                                                    {
  (yyval.exp) = new ASTExpressionAnd(std::unique_ptr<ASTExpression>((yyvsp[-2].exp)), std::unique_ptr<ASTExpression>((yyvsp[0].exp)));
 }
#line 1954 "parser.tab.c"
    break;

  case 45: /* unaryRelExpr: LOGICAL_NOT unaryRelExpr  */
#line 215 "src/frontend/parser.y"
                                       {
  //logical not isn't implmented in ast, so we just don't do anything
  (yyval.exp) = (yyvsp[0].exp);
 }
#line 1963 "parser.tab.c"
    break;

  case 46: /* unaryRelExpr: relExpr  */
#line 218 "src/frontend/parser.y"
             {(yyval.exp) = (yyvsp[0].exp);}
#line 1969 "parser.tab.c"
    break;

  case 47: /* relExpr: term relop term  */
#line 219 "src/frontend/parser.y"
                         {
  (yyval.exp) = new ASTExpressionComparison((yyvsp[-1].rel), std::unique_ptr<ASTExpression>((yyvsp[-2].exp)), std::unique_ptr<ASTExpression>((yyvsp[0].exp)));
 }
#line 1977 "parser.tab.c"
    break;

  case 48: /* relExpr: term  */
#line 221 "src/frontend/parser.y"
          {(yyval.exp) = (yyvsp[0].exp);}
#line 1983 "parser.tab.c"
    break;

  case 49: /* relop: RELOP_GT  */
#line 222 "src/frontend/parser.y"
                {
  (yyval.rel) = ASTExpressionComparisonType::GreaterThan;
 }
#line 1991 "parser.tab.c"
    break;

  case 50: /* relop: RELOP_LT  */
#line 224 "src/frontend/parser.y"
             {
  (yyval.rel) = ASTExpressionComparisonType::LessThan;
 }
#line 1999 "parser.tab.c"
    break;

  case 51: /* relop: RELOP_GE  */
#line 226 "src/frontend/parser.y"
             {
  (yyval.rel) = ASTExpressionComparisonType::GreaterThanOrEqual;
 }
#line 2007 "parser.tab.c"
    break;

  case 52: /* relop: RELOP_LE  */
#line 228 "src/frontend/parser.y"
             {
  (yyval.rel) = ASTExpressionComparisonType::LessThanOrEqual;
 }
#line 2015 "parser.tab.c"
    break;

  case 53: /* relop: RELOP_EQ  */
#line 230 "src/frontend/parser.y"
             {
  (yyval.rel) = ASTExpressionComparisonType::Equal;
 }
#line 2023 "parser.tab.c"
    break;

  case 54: /* relop: RELOP_NE  */
#line 232 "src/frontend/parser.y"
             {
  (yyval.rel) = ASTExpressionComparisonType::NotEqual;
 }
#line 2031 "parser.tab.c"
    break;

  case 55: /* term: factor  */
#line 235 "src/frontend/parser.y"
             {(yyval.exp) = (yyvsp[0].exp);}
#line 2037 "parser.tab.c"
    break;

  case 56: /* term: term ARITH_PLUS factor  */
#line 235 "src/frontend/parser.y"
                                                {
  (yyval.exp) = new ASTExpressionAddition(std::unique_ptr<ASTExpression>((yyvsp[-2].exp)), std::unique_ptr<ASTExpression>((yyvsp[0].exp)));
 }
#line 2045 "parser.tab.c"
    break;

  case 57: /* term: term ARITH_MINUS factor  */
#line 237 "src/frontend/parser.y"
                            {
  (yyval.exp) = new ASTExpressionSubtraction(std::unique_ptr<ASTExpression>((yyvsp[-2].exp)), std::unique_ptr<ASTExpression>((yyvsp[0].exp)));
 }
#line 2053 "parser.tab.c"
    break;

  case 58: /* factor: unary  */
#line 240 "src/frontend/parser.y"
              {(yyval.exp) = (yyvsp[0].exp);}
#line 2059 "parser.tab.c"
    break;

  case 59: /* factor: factor ARITH_MULT unary  */
#line 240 "src/frontend/parser.y"
                                                   {
  (yyval.exp) = new ASTExpressionMultiplication(std::unique_ptr<ASTExpression>((yyvsp[-2].exp)), std::unique_ptr<ASTExpression>((yyvsp[0].exp)));
 }
#line 2067 "parser.tab.c"
    break;

  case 60: /* factor: factor ARITH_DIV unary  */
#line 242 "src/frontend/parser.y"
                           {
  (yyval.exp) = new ASTExpressionDivision(std::unique_ptr<ASTExpression>((yyvsp[-2].exp)), std::unique_ptr<ASTExpression>((yyvsp[0].exp)));
 }
#line 2075 "parser.tab.c"
    break;

  case 61: /* factor: factor ARITH_MOD unary  */
#line 244 "src/frontend/parser.y"
                           {
  //not implemented in AST
  (yyval.exp) = (yyvsp[-2].exp);
 }
#line 2084 "parser.tab.c"
    break;

  case 62: /* unary: ARITH_MINUS primary  */
#line 248 "src/frontend/parser.y"
                           {
  (yyval.exp) = new ASTExpressionNegation(std::unique_ptr<ASTExpression>((yyvsp[0].exp)));
 }
#line 2092 "parser.tab.c"
    break;

  case 64: /* primary: ID  */
#line 251 "src/frontend/parser.y"
            {
  (yyval.exp) = new ASTExpressionVariable((yyvsp[0].strval));
 }
#line 2100 "parser.tab.c"
    break;

  case 65: /* primary: LPAREN expr RPAREN  */
#line 253 "src/frontend/parser.y"
                       {
  (yyval.exp) = (yyvsp[-1].exp);
 }
#line 2108 "parser.tab.c"
    break;

  case 66: /* primary: call  */
#line 255 "src/frontend/parser.y"
          {
  (yyval.exp) = (yyvsp[0].exp);
 }
#line 2116 "parser.tab.c"
    break;

  case 67: /* primary: constant  */
#line 257 "src/frontend/parser.y"
             {
  (yyval.exp) = (yyvsp[0].exp);
 }
#line 2124 "parser.tab.c"
    break;

  case 68: /* call: ID LPAREN args RPAREN  */
#line 260 "src/frontend/parser.y"
                            {
  //convert args to a vector of unique ptrs:
  auto argVec = std::vector<std::unique_ptr<ASTExpression>>();
  for(auto a : *(yyvsp[-1].exprVec)) {
    argVec.push_back(std::unique_ptr<ASTExpression>(a));
  }
  (yyval.exp) = new ASTExpressionCall(ASTExpressionVariable::Create((yyvsp[-3].strval)), std::move(argVec));
 }
#line 2137 "parser.tab.c"
    break;

  case 69: /* call: ID LPAREN RPAREN  */
#line 267 "src/frontend/parser.y"
                      {
  //if there are no args, then just give it an empty vector
  (yyval.exp) = new ASTExpressionCall(ASTExpressionVariable::Create((yyvsp[-2].strval)), std::vector<std::unique_ptr<ASTExpression>>());
   }
#line 2146 "parser.tab.c"
    break;

  case 70: /* args: args COMMA expr  */
#line 271 "src/frontend/parser.y"
                       {
   (yyval.exprVec) = (yyvsp[-2].exprVec);
   (yyval.exprVec)->push_back((yyvsp[0].exp));
 }
#line 2155 "parser.tab.c"
    break;

  case 71: /* args: expr  */
#line 274 "src/frontend/parser.y"
          {
   (yyval.exprVec) = new std::vector<ASTExpression *>();
   (yyval.exprVec)->push_back((yyvsp[0].exp));
 }
#line 2164 "parser.tab.c"
    break;

  case 72: /* constant: int_lit  */
#line 278 "src/frontend/parser.y"
                  {(yyval.exp) = new ASTExpressionInt((yyvsp[0].intval));}
#line 2170 "parser.tab.c"
    break;

  case 73: /* constant: flt_lit  */
#line 278 "src/frontend/parser.y"
                                                             {(yyval.exp) = new ASTExpressionFloat((yyvsp[0].fltval));}
#line 2176 "parser.tab.c"
    break;

  case 74: /* constant: STRING_LITERAL  */
#line 278 "src/frontend/parser.y"
                                                                                                                 {(yyval.exp) = new ASTExpressionString(std::string((yyvsp[0].strval)));}
#line 2182 "parser.tab.c"
    break;


#line 2186 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 282 "src/frontend/parser.y"

int main(int argc, char **argv) {

  // Arg flags:
  bool showHelp = false; // Show the help and exit.
  std::string openFile = ""; // File to open. Nothing for standard in.
  std::string outFile = ""; // File to write to. Nothing for standard out.
  int outputFormat = 3; // 0 - LLVM Assembly. 1 - LLVM Bitcode. 2 - Object (TODO). 3 - AST tree.
  bool printAST = true; // If to print the AST to console.

  // Read the arguments. Don't count the first which is the executable name.
  for (int i = 1; i < argc; i++)
  {
    bool hasNextArg = i + 1 < argc;
    std::string arg(argv[i]);
    if (arg == "-i" && hasNextArg)
    {
      i++;
      openFile = argv[i];
    }
    else if (arg == "-o" && hasNextArg)
    {
      i++;
      outFile = argv[i];
    }
    else if (arg == "-nPrint")
    {
      printAST = false;
    }
    else if (arg == "-fAsm")
    {
      outputFormat = 0;
    }
    else if (arg == "-fBc")
    {
      outputFormat = 1;
    }
    else if (arg == "-fObj")
    {
      outputFormat = 2;
    }
    else if (arg == "-fAst")
    {
      outputFormat = 3;
    }
    else
    {
      showHelp = true;
    }
  }
  printAST &= outputFormat != 3 && outFile != ""; // Always print AST by default in addition to whatever is being output.

  // Show help if needed.
  if (showHelp)
  {
    printf("Usage: LLVM-Lab [options]\n");
    printf("\nOptions:\n\n");
    printf("-h              Show this help screen.\n");
    printf("-i [input]      Read from an input file (reads from console by default).\n");
    printf("-o [output]     Write to an output file (writes to console by default).\n");
    printf("-nPrint         If to not print the AST to the console.\n");
    printf("-fAsm           Output format is in LLVM assembly.\n");
    printf("-fAst           Output format is an abstract syntax tree.\n");
    printf("-fBc            Output format is in LLVM bitcode.\n");
    printf("-fObj           Output format is an object file.\n");
    return 1;
  }

  // Fetch input.
  if (openFile != "")
  {
    yyin = fopen(openFile.c_str(), "r");
  }

  if (yyparse() == 1)
  {
    printf("Irrecoverable error state, aborting\n");
    return 1;
  }

  // Close input if needed.
  if (openFile != "")
  {
    fclose(yyin);
  }

  // Do the compilation.
  ast.Compile();

  // Print AST if needed.
  if (printAST) std::cout << ast.ToString() << std::endl;

  // Export data.
  if (outputFormat == 0)
  {
    ast.WriteLLVMAssemblyToFile(outFile);
  }
  else if (outputFormat == 1)
  {
    ast.WriteLLVMBitcodeToFile(outFile);
  }
  else if (outputFormat == 2)
  {
    std::cout << "OBJ exporting not supported yet." << std::endl;
  }
  else
  {
    std::cout << ast.ToString() << std::endl;
  }
  return 0;
}

void yyerror(const char *s)
{
  fprintf(stderr, "error: %s\n", s);
}
