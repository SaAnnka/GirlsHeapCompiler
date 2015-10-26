/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 4 "tokens.y"

#include <iostream>
extern "C" int yylex();
void yyerror( int*, const char* str );

/* Line 371 of yacc.c  */
#line 74 "tokens.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "tokens.tab.hpp".  */
#ifndef YY_YY_TOKENS_TAB_HPP_INCLUDED
# define YY_YY_TOKENS_TAB_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 13 "tokens.y"

#include "classes.h"


/* Line 387 of yacc.c  */
#line 111 "tokens.tab.cpp"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     UMINUS = 258,
     CLASS = 259,
     PUBLIC = 260,
     STATIC = 261,
     VOID = 262,
     MAIN = 263,
     STRING = 264,
     EXTENDS = 265,
     RETURN = 266,
     INT = 267,
     BOOLEAN = 268,
     IF = 269,
     ELSE = 270,
     WHILE = 271,
     PRINT = 272,
     LENGTH = 273,
     TRUE = 274,
     FALSE = 275,
     THIS = 276,
     NEW = 277,
     INTEGER_LITERAL = 278,
     ID = 279
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 20 "tokens.y"

	int ival;
	char sval[255];
	CProgram* program;
	CMainClass* mainClass;
	CClassDecl* classDecl;
	CClassDeclList* classDecls;
	CExpList* expList;
	�FormalList* formalList;
	CIfStatement* ifStatement;
	CLengthExp* lengthExp;
	CMethodDecl* methodDecl;
	CMethodDeclList* methodDecls;
	CNewClass* newClass;
	CNewInt* newInt;
	CPrintStatement* printStatement;
	CStatementList* statements;
	CUnExp* unExp;
	CVarDecl* varDecl;
	CVarDeclList* varDecls;
	CWhileStatement* whileStatements;


/* Line 387 of yacc.c  */
#line 174 "tokens.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (int* hasError);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_TOKENS_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 202 "tokens.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   379

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  171

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    13,     2,     2,     2,     2,    14,     2,
      10,    11,     5,     3,    40,     4,    12,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
      15,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     8,     2,     9,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     7,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    31,    38,    44,
      50,    55,    64,    72,    80,    87,    89,    92,    94,    97,
     101,   115,   128,   141,   153,   155,   158,   159,   163,   166,
     168,   171,   175,   179,   181,   183,   185,   189,   192,   200,
     206,   212,   217,   225,   228,   232,   236,   240,   244,   248,
     252,   257,   261,   268,   270,   272,   274,   276,   278,   284,
     289,   292,   296,   297,   299,   302,   304,   307
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    45,    -1,    45,    44,    -1,    46,    -1,
      44,    46,    -1,    16,    36,    37,    17,    18,    19,    20,
      10,    21,     8,     9,    36,    11,    37,    51,    38,    38,
      -1,    16,    36,    37,    47,    48,    38,    -1,    16,    36,
      37,    48,    38,    -1,    16,    36,    37,    47,    38,    -1,
      16,    36,    37,    38,    -1,    16,    36,    22,    36,    37,
      47,    48,    38,    -1,    16,    36,    22,    36,    37,    48,
      38,    -1,    16,    36,    22,    36,    37,    47,    38,    -1,
      16,    36,    22,    36,    37,    38,    -1,    49,    -1,    47,
      49,    -1,    50,    -1,    48,    50,    -1,    55,    36,    39,
      -1,    17,    55,    36,    10,    52,    11,    37,    47,    51,
      23,    57,    39,    38,    -1,    17,    55,    36,    10,    52,
      11,    37,    51,    23,    57,    39,    38,    -1,    17,    55,
      36,    10,    52,    11,    37,    47,    23,    57,    39,    38,
      -1,    17,    55,    36,    10,    52,    11,    37,    23,    57,
      39,    38,    -1,    56,    -1,    51,    56,    -1,    -1,    55,
      36,    53,    -1,    55,    36,    -1,    54,    -1,    53,    54,
      -1,    40,    55,    36,    -1,    24,     8,     9,    -1,    25,
      -1,    24,    -1,    36,    -1,    37,    51,    38,    -1,    37,
      38,    -1,    26,    10,    57,    11,    56,    27,    56,    -1,
      28,    10,    57,    11,    56,    -1,    29,    10,    57,    11,
      39,    -1,    36,    41,    57,    39,    -1,    36,     8,    57,
       9,    41,    57,    39,    -1,     4,    57,    -1,    57,     3,
      57,    -1,    57,    15,    57,    -1,    57,    14,    57,    -1,
      57,     4,    57,    -1,    57,     5,    57,    -1,    57,     6,
      57,    -1,    57,     8,    57,     9,    -1,    57,    12,    30,
      -1,    57,    12,    36,    10,    58,    11,    -1,    35,    -1,
      31,    -1,    32,    -1,    36,    -1,    33,    -1,    34,    24,
       8,    57,     9,    -1,    34,    36,    10,    11,    -1,    13,
      57,    -1,    10,    57,    11,    -1,    -1,    57,    -1,    57,
      59,    -1,    60,    -1,    59,    60,    -1,    40,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    94,    94,    95,    96,    97,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   117,   118,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "'['", "']'", "'('", "')'", "'.'", "'!'", "'&'", "'<'", "CLASS",
  "PUBLIC", "STATIC", "VOID", "MAIN", "STRING", "EXTENDS", "RETURN", "INT",
  "BOOLEAN", "IF", "ELSE", "WHILE", "PRINT", "LENGTH", "TRUE", "FALSE",
  "THIS", "NEW", "INTEGER_LITERAL", "ID", "'{'", "'}'", "';'", "','",
  "'='", "$accept", "Program", "ClassDecls", "MainClass", "ClassDecl",
  "VarDecls", "MethodDecls", "VarDecl", "MethodDecl", "Statements",
  "FormalList", "FormalRests", "FormalRest", "Type", "Statement", "Exp",
  "ExpList", "ExpRests", "ExpRest", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    43,    45,    42,    47,   258,    91,    93,
      40,    41,    46,    33,    38,    60,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   123,   125,    59,
      44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    45,    46,    46,    46,
      46,    46,    46,    46,    46,    47,    47,    48,    48,    49,
      50,    50,    50,    50,    51,    51,    52,    52,    52,    53,
      53,    54,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    58,    59,    59,    60
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,    17,     6,     5,     5,
       4,     8,     7,     7,     6,     1,     2,     1,     2,     3,
      13,    12,    12,    11,     1,     2,     0,     3,     2,     1,
       2,     3,     3,     1,     1,     1,     3,     2,     7,     5,
       5,     4,     7,     2,     3,     3,     3,     3,     3,     3,
       4,     3,     6,     1,     1,     1,     1,     1,     5,     4,
       2,     3,     0,     1,     2,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,     3,     4,     0,
       0,     5,     0,     0,     0,     0,     0,     0,    34,    33,
      35,    10,     0,     0,    15,    17,     0,     0,     0,     0,
       0,     9,     0,    16,     8,    18,     0,     0,    14,     0,
       0,     0,    32,     7,    19,     0,    13,     0,    12,    26,
       0,    11,     0,     0,     0,     0,    28,     0,     0,     0,
      27,    29,     0,     0,     0,     0,     0,    35,     0,     0,
       0,    24,     0,    30,     0,     0,     0,     0,    54,    55,
      57,     0,    53,    56,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    25,    31,     0,    43,
       0,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,    61,     0,     0,    44,    47,    48,    49,
       0,    51,     0,    46,    45,    23,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,    59,    50,    62,     0,
      39,    40,     0,    22,     0,    21,     6,    58,    63,     0,
       0,     0,    20,     0,    64,    65,    52,    38,    42,    67,
      66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     3,     8,    22,    23,    24,    25,    70,
      52,    60,    61,    26,    71,    84,   159,   164,   165
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const yytype_int16 yypact[] =
{
      -7,     8,    26,    11,    40,   -75,    39,    11,   -75,    62,
      36,   -75,    63,    50,    18,    69,    55,    80,    87,   -75,
     -75,   -75,   139,   -13,   -75,   -75,    65,    83,   159,    71,
     105,   -75,    -9,   -75,   -75,   -75,    78,   110,   -75,   162,
       3,   117,   -75,   -75,   -75,   108,   -75,    38,   -75,    80,
     122,   -75,   129,    95,   134,   116,   102,   119,   178,    80,
     102,   -75,   154,   158,   147,   156,   157,    -3,   308,   193,
     197,   -75,   137,   -75,   132,   158,   158,   158,   -75,   -75,
     -75,    -8,   -75,   -75,    79,   158,   158,   158,   158,   158,
      -3,   -75,   321,   158,   209,   158,   -75,   -75,   338,   166,
     236,   -75,   136,   160,   158,   158,   158,   158,   158,    15,
     158,   158,   144,   249,   262,   275,   288,    94,   -75,   107,
     158,   120,   325,   -75,   158,   177,   364,   364,   166,   166,
     301,   -75,   186,   -75,   -75,   -75,   338,   338,   169,   164,
     -75,   161,   133,   171,   172,   314,   -75,   -75,   158,   184,
     -75,   -75,   158,   -75,   174,   -75,   -75,   -75,    56,   202,
     338,   146,   -75,   158,   187,   -75,   -75,   -75,   -75,   327,
     -75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   -75,   -75,   217,   -18,    41,   -16,    25,   -51,
     -75,   -75,   168,   -10,   -70,   -74,   -75,   -75,    67
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      96,    99,   100,   101,    17,    88,    33,    29,    17,     1,
      39,   113,   114,   115,   116,   117,   102,    92,    94,   119,
      17,   121,    96,    33,    96,    34,     5,     6,   103,    43,
     126,   127,   128,   129,   130,    17,   133,   134,    89,    53,
      69,    48,    18,    19,     4,   131,   142,   122,    35,    72,
     145,   132,    96,    33,    20,    17,    21,    35,    13,   104,
     105,   106,   107,    32,   108,    35,   149,   150,   109,    40,
     110,   111,    35,    14,   158,    10,    51,     9,   161,    12,
      47,    15,   104,   105,   106,   107,    16,   108,    27,   169,
     167,   109,    28,   110,   111,    30,   163,   104,   105,   106,
     107,    36,   108,    37,    18,    19,   109,    41,   110,   111,
     104,   105,   106,   107,    42,   108,    20,    44,   112,   109,
      45,   110,   111,   104,   105,   106,   107,    49,   108,    50,
      54,    56,   109,   140,   110,   111,   104,   105,   106,   107,
      55,   108,    59,    57,   124,   109,   141,   110,   111,   104,
     105,   106,   107,    58,   108,    62,    17,    85,   109,   143,
     110,   111,    75,    18,    19,    74,    86,    87,    76,    98,
     125,    77,   154,    97,   108,    20,    17,    31,   109,    17,
     110,   111,   135,    18,    19,   168,    18,    19,   146,    78,
      79,    80,    81,    82,    83,    20,   148,    38,    20,   153,
      46,    63,    18,    19,    64,   152,    65,    66,   151,   155,
     156,   160,   162,   166,    67,    68,    93,    18,    19,    64,
      95,    65,    66,    64,    11,    65,    66,   163,    73,    67,
      68,   170,   120,    90,    68,    64,     0,    65,    66,   104,
     105,   106,   107,     0,   108,    90,    68,   123,   109,     0,
     110,   111,   104,   105,   106,   107,     0,   108,     0,     0,
     136,   109,     0,   110,   111,   104,   105,   106,   107,     0,
     108,     0,     0,   137,   109,     0,   110,   111,   104,   105,
     106,   107,     0,   108,     0,     0,   138,   109,     0,   110,
     111,   104,   105,   106,   107,     0,   108,   139,     0,     0,
     109,     0,   110,   111,   104,   105,   106,   107,     0,   108,
     147,     0,     0,   109,     0,   110,   111,   104,   105,   106,
     107,     0,   108,   157,     0,     0,   109,     0,   110,   111,
     104,   105,   106,   107,    64,   108,    65,    66,     0,   109,
       0,   110,   111,     0,    90,    68,    91,    64,     0,    65,
      66,    64,     0,    65,    66,     0,     0,    90,    68,   118,
       0,    90,    68,   144,    64,     0,    65,    66,     0,   106,
     107,     0,   108,     0,    90,    68,   109,     0,   110,   111
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-75)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      70,    75,    76,    77,    17,     8,    22,    17,    17,    16,
      28,    85,    86,    87,    88,    89,    24,    68,    69,    93,
      17,    95,    92,    39,    94,    38,     0,    16,    36,    38,
     104,   105,   106,   107,   108,    17,   110,   111,    41,    49,
      58,    38,    24,    25,    36,    30,   120,    98,    23,    59,
     124,    36,   122,    69,    36,    17,    38,    32,    22,     3,
       4,     5,     6,    22,     8,    40,   136,   137,    12,    28,
      14,    15,    47,    37,   148,    36,    38,    37,   152,    17,
      39,    18,     3,     4,     5,     6,    36,     8,    19,   163,
     160,    12,    37,    14,    15,     8,    40,     3,     4,     5,
       6,    36,     8,    20,    24,    25,    12,    36,    14,    15,
       3,     4,     5,     6,     9,     8,    36,    39,    39,    12,
      10,    14,    15,     3,     4,     5,     6,    10,     8,    21,
       8,    36,    12,    39,    14,    15,     3,     4,     5,     6,
      11,     8,    40,     9,     8,    12,    39,    14,    15,     3,
       4,     5,     6,    37,     8,    36,    17,    10,    12,    39,
      14,    15,     4,    24,    25,    11,    10,    10,    10,    37,
      10,    13,    39,    36,     8,    36,    17,    38,    12,    17,
      14,    15,    38,    24,    25,    39,    24,    25,    11,    31,
      32,    33,    34,    35,    36,    36,    10,    38,    36,    38,
      38,    23,    24,    25,    26,    41,    28,    29,    39,    38,
      38,    27,    38,    11,    36,    37,    23,    24,    25,    26,
      23,    28,    29,    26,     7,    28,    29,    40,    60,    36,
      37,   164,    23,    36,    37,    26,    -1,    28,    29,     3,
       4,     5,     6,    -1,     8,    36,    37,    11,    12,    -1,
      14,    15,     3,     4,     5,     6,    -1,     8,    -1,    -1,
      11,    12,    -1,    14,    15,     3,     4,     5,     6,    -1,
       8,    -1,    -1,    11,    12,    -1,    14,    15,     3,     4,
       5,     6,    -1,     8,    -1,    -1,    11,    12,    -1,    14,
      15,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      12,    -1,    14,    15,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    12,    -1,    14,    15,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    12,    -1,    14,    15,
       3,     4,     5,     6,    26,     8,    28,    29,    -1,    12,
      -1,    14,    15,    -1,    36,    37,    38,    26,    -1,    28,
      29,    26,    -1,    28,    29,    -1,    -1,    36,    37,    38,
      -1,    36,    37,    38,    26,    -1,    28,    29,    -1,     5,
       6,    -1,     8,    -1,    36,    37,    12,    -1,    14,    15
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    43,    45,    36,     0,    16,    44,    46,    37,
      36,    46,    17,    22,    37,    18,    36,    17,    24,    25,
      36,    38,    47,    48,    49,    50,    55,    19,    37,    55,
       8,    38,    48,    49,    38,    50,    36,    20,    38,    47,
      48,    36,     9,    38,    39,    10,    38,    48,    38,    10,
      21,    38,    52,    55,     8,    11,    36,     9,    37,    40,
      53,    54,    36,    23,    26,    28,    29,    36,    37,    47,
      51,    56,    55,    54,    11,     4,    10,    13,    31,    32,
      33,    34,    35,    36,    57,    10,    10,    10,     8,    41,
      36,    38,    51,    23,    51,    23,    56,    36,    37,    57,
      57,    57,    24,    36,     3,     4,     5,     6,     8,    12,
      14,    15,    39,    57,    57,    57,    57,    57,    38,    57,
      23,    57,    51,    11,     8,    10,    57,    57,    57,    57,
      57,    30,    36,    57,    57,    38,    11,    11,    11,     9,
      39,    39,    57,    39,    38,    57,    11,     9,    10,    56,
      56,    39,    41,    38,    39,    38,    38,     9,    57,    58,
      27,    57,    38,    40,    59,    60,    11,    56,    39,    57,
      60
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (hasError, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, hasError); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, int* hasError)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, hasError)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    int* hasError;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (hasError);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, int* hasError)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, hasError)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    int* hasError;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, hasError);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, int* hasError)
#else
static void
yy_reduce_print (yyvsp, yyrule, hasError)
    YYSTYPE *yyvsp;
    int yyrule;
    int* hasError;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , hasError);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, hasError); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, int* hasError)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, hasError)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    int* hasError;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (hasError);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (int* hasError)
#else
int
yyparse (hasError)
    int* hasError;
#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 94 "tokens.y"
    { (yyval.program) = new CProgram(dynamic_cast<IMainClass*>((yyvsp[(1) - (1)].mainClass)), nullptr); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 95 "tokens.y"
    { (yyval.program) = new CProgram(dynamic_cast<IMainClass*>((yyvsp[(1) - (2)].mainClass)), dynamic_cast<IClassDeclList*>((yyvsp[(2) - (2)].classDecls))); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 96 "tokens.y"
    { (yyval.classDecls) = new CClassDeclList((yyvsp[(1) - (1)].classDecl)); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 97 "tokens.y"
    { 
		std::vector< IClassDecl* > decls = dynamic_cast<CClassDeclList*>((yyvsp[(1) - (2)].classDecls))->ClassDeclList();
		decls.push_back(dynamic_cast<IClassDecl*>((yyvsp[(2) - (2)].classDecl)));
		(yyval.classDecls) = new CClassDeclList(decls); 
	}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 102 "tokens.y"
    { (yyval.mainClass) = new CMainClass(std::string((yyvsp[(2) - (17)].sval)), dynamic_cast<IStatementList*>((yyvsp[(15) - (17)].statements))); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 103 "tokens.y"
    { (yyval.classDecl) = new CClassDecl(std::string((yyvsp[(2) - (6)].sval)), "", dynamic_cast<IVarDeclList*>((yyvsp[(4) - (6)].varDecls)), dynamic_cast<IMethodDeclList*>((yyvsp[(5) - (6)].methodDecls)) ); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 104 "tokens.y"
    { (yyval.classDecl) = new CClassDecl(std::string((yyvsp[(2) - (5)].sval)), "", nullptr, dynamic_cast<IMethodDeclList*>((yyvsp[(4) - (5)].methodDecls)) ); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 105 "tokens.y"
    { (yyval.classDecl) = new CClassDecl(std::string((yyvsp[(2) - (5)].sval)), "", dynamic_cast<IVarDeclList*>((yyvsp[(4) - (5)].varDecls)), nullptr ); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 106 "tokens.y"
    { (yyval.classDecl) = new CClassDecl(std::string((yyvsp[(2) - (4)].sval)), "", nullptr, nullptr ); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 107 "tokens.y"
    { (yyval.classDecl) = new CClassDecl(std::string((yyvsp[(2) - (8)].sval)), std::string((yyvsp[(4) - (8)].sval)), dynamic_cast<IVarDeclList*>((yyvsp[(6) - (8)].varDecls)), dynamic_cast<IMethodDeclList*>((yyvsp[(7) - (8)].methodDecls)) ); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 108 "tokens.y"
    { (yyval.classDecl) = new CClassDecl(std::string((yyvsp[(2) - (7)].sval)), std::string((yyvsp[(4) - (7)].sval)), nullptr, dynamic_cast<IMethodDeclList*>((yyvsp[(6) - (7)].methodDecls)) ); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 109 "tokens.y"
    { (yyval.classDecl) = new CClassDecl(std::string((yyvsp[(2) - (7)].sval)), std::string((yyvsp[(4) - (7)].sval)), dynamic_cast<IVarDeclList*>((yyvsp[(6) - (7)].varDecls)), nullptr ); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 110 "tokens.y"
    { (yyval.classDecl) = new CClassDecl(std::string((yyvsp[(2) - (6)].sval)), std::string((yyvsp[(4) - (6)].sval)), nullptr, nullptr ); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 111 "tokens.y"
    { (yyval.varDecls) = new CVarDeclList( dynamic_cast< IVarDecl* >((yyvsp[(1) - (1)].varDecl)) ); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 112 "tokens.y"
    { 
		std::vector< IVarDecl* > decls = dynamic_cast<CVarDeclList*>((yyvsp[(1) - (2)].varDecls))->VarDeclList();
		decls.push_back(dynamic_cast<IVarDecl*>((yyvsp[(2) - (2)].varDecl)));
		(yyval.varDecls) = new CVarDeclList(decls); 
	}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 117 "tokens.y"
    { (yyval.methodDecls) = new CMethodDeclList( dynamic_cast<IMethodDecl*>((yyvsp[(1) - (1)].methodDecl)) ); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 118 "tokens.y"
    { 
		std::vector< IMethodDecl* > decls = dynamic_cast<CMethodDeclList*>((yyvsp[(1) - (2)].methodDecls))->MethodDeclList();
		decls.push_back(dynamic_cast<IMethodDecl*>((yyvsp[(2) - (2)].methodDecl)));
		(yyval.methodDecls) = new CMethodDeclList(decls); 
	}
    break;


/* Line 1792 of yacc.c  */
#line 1691 "tokens.tab.cpp"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (hasError, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (hasError, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
		      yytoken, &yylval, hasError);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp, hasError);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (hasError, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, hasError);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, hasError);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 172 "tokens.y"


/* ������� ��������� ������. */
void yyerror( int*, const char* str )
{
	std::cout << str << std::endl;
}