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
#line 29 "parser_gram.y"


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <signal.h>
#include <errno.h>
#include <sys/types.h>
#include <locale.h>
#include <sys/utsname.h>
#include <sys/statvfs.h>
#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include "parsertypes.h"
#include "filebench.h"
#include "utils.h"
#include "stats.h"
#include "vars.h"
#include "eventgen.h"
#include "aslr.h"
#include "multi_client_sync.h"

/* yacc and lex externals */
extern FILE *yyin;
extern int yydebug;
extern void yyerror(char *s);
extern int yylex(void);

/* executable name to execute worker processes later */
char *execname;

/* utilities */
static cmd_t *alloc_cmd(void);
static attr_t *alloc_attr(void);
static attr_t *alloc_lvar_attr(var_t *var);
static attr_t *get_attr(cmd_t *cmd, int64_t name);
static void get_attr_lvars(cmd_t *cmd, flowop_t *flowop);
static list_t *alloc_list();
static probtabent_t *alloc_probtabent(void);
static void add_lvar_to_list(var_t *newlvar, var_t **lvar_list);

/* Info Commands */
static void parser_fileset_list(cmd_t *);
static void parser_flowop_list(cmd_t *);

/* Define Commands */
static void parser_proc_define(cmd_t *);
static void parser_thread_define(cmd_t *, procflow_t *);
static void parser_flowop_define(cmd_t *, threadflow_t *, flowop_t **, int);
static void parser_composite_flowop_define(cmd_t *);
static void parser_file_define(cmd_t *);
static void parser_fileset_define(cmd_t *);
static void parser_var_assign_random(char *, cmd_t *);
static void parser_var_assign_custom(char *, cmd_t *);

/* Create Commands */
static void parser_fileset_create(cmd_t *);

/* Run Commands */
static void parser_run(cmd_t *cmd);
static void parser_run_variable(cmd_t *cmd);
static void parser_psrun(cmd_t *cmd);

/* Shutdown (Quit) Commands */
static void parser_filebench_shutdown(cmd_t *cmd);

/* Other Commands */
static void parser_echo(cmd_t *cmd);
static void parser_system(cmd_t *cmd);
static void parser_eventgen(cmd_t *cmd);
static void parser_enable_mc(cmd_t *cmd);
static void parser_domultisync(cmd_t *cmd);
static void parser_sleep(cmd_t *cmd);
static void parser_sleep_variable(cmd_t *cmd);
static void parser_version(cmd_t *cmd);
static void parser_enable_lathist(cmd_t *cmd);


/* Line 371 of yacc.c  */
#line 153 "parser_gram.c"

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
   by #include "y.tab.h".  */
#ifndef YY_YY_PARSER_GRAM_H_INCLUDED
# define YY_YY_PARSER_GRAM_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FSC_LIST = 258,
     FSC_DEFINE = 259,
     FSC_QUIT = 260,
     FSC_DEBUG = 261,
     FSC_CREATE = 262,
     FSC_SLEEP = 263,
     FSC_SET = 264,
     FSC_SYSTEM = 265,
     FSC_EVENTGEN = 266,
     FSC_ECHO = 267,
     FSC_RUN = 268,
     FSC_PSRUN = 269,
     FSC_VERSION = 270,
     FSC_ENABLE = 271,
     FSC_DOMULTISYNC = 272,
     FSV_STRING = 273,
     FSV_VAL_POSINT = 274,
     FSV_VAL_NEGINT = 275,
     FSV_VAL_BOOLEAN = 276,
     FSV_VARIABLE = 277,
     FSV_WHITESTRING = 278,
     FSV_RANDUNI = 279,
     FSV_RANDTAB = 280,
     FSV_URAND = 281,
     FSV_RAND48 = 282,
     FSE_FILE = 283,
     FSE_FILES = 284,
     FSE_FILESET = 285,
     FSE_PROC = 286,
     FSE_THREAD = 287,
     FSE_FLOWOP = 288,
     FSE_CVAR = 289,
     FSE_RAND = 290,
     FSE_MODE = 291,
     FSE_MULTI = 292,
     FSK_SEPLST = 293,
     FSK_OPENLST = 294,
     FSK_CLOSELST = 295,
     FSK_OPENPAR = 296,
     FSK_CLOSEPAR = 297,
     FSK_ASSIGN = 298,
     FSK_IN = 299,
     FSK_QUOTE = 300,
     FSA_SIZE = 301,
     FSA_PREALLOC = 302,
     FSA_PARALLOC = 303,
     FSA_PATH = 304,
     FSA_REUSE = 305,
     FSA_MEMSIZE = 306,
     FSA_RATE = 307,
     FSA_READONLY = 308,
     FSA_TRUSTTREE = 309,
     FSA_IOSIZE = 310,
     FSA_FILENAME = 311,
     FSA_WSS = 312,
     FSA_NAME = 313,
     FSA_RANDOM = 314,
     FSA_INSTANCES = 315,
     FSA_DSYNC = 316,
     FSA_TARGET = 317,
     FSA_ITERS = 318,
     FSA_NICE = 319,
     FSA_VALUE = 320,
     FSA_BLOCKING = 321,
     FSA_HIGHWATER = 322,
     FSA_DIRECTIO = 323,
     FSA_DIRWIDTH = 324,
     FSA_FD = 325,
     FSA_SRCFD = 326,
     FSA_ROTATEFD = 327,
     FSA_ENTRIES = 328,
     FSA_DIRDEPTHRV = 329,
     FSA_DIRGAMMA = 330,
     FSA_USEISM = 331,
     FSA_TYPE = 332,
     FSA_LEAFDIRS = 333,
     FSA_INDEXED = 334,
     FSA_RANDTABLE = 335,
     FSA_RANDSRC = 336,
     FSA_ROUND = 337,
     FSA_RANDSEED = 338,
     FSA_RANDGAMMA = 339,
     FSA_RANDMEAN = 340,
     FSA_MIN = 341,
     FSA_MAX = 342,
     FSA_MASTER = 343,
     FSA_CLIENT = 344,
     FSS_TYPE = 345,
     FSS_SEED = 346,
     FSS_GAMMA = 347,
     FSS_MEAN = 348,
     FSS_MIN = 349,
     FSS_SRC = 350,
     FSS_ROUND = 351,
     FSA_LVAR_ASSIGN = 352,
     FSA_ALLDONE = 353,
     FSA_FIRSTDONE = 354,
     FSA_TIMEOUT = 355,
     FSA_LATHIST = 356,
     FSA_NOREADAHEAD = 357,
     FSA_IOPRIO = 358,
     FSA_WRITEONLY = 359,
     FSA_PARAMETERS = 360,
     FSA_NOUSESTATS = 361
   };
#endif
/* Tokens.  */
#define FSC_LIST 258
#define FSC_DEFINE 259
#define FSC_QUIT 260
#define FSC_DEBUG 261
#define FSC_CREATE 262
#define FSC_SLEEP 263
#define FSC_SET 264
#define FSC_SYSTEM 265
#define FSC_EVENTGEN 266
#define FSC_ECHO 267
#define FSC_RUN 268
#define FSC_PSRUN 269
#define FSC_VERSION 270
#define FSC_ENABLE 271
#define FSC_DOMULTISYNC 272
#define FSV_STRING 273
#define FSV_VAL_POSINT 274
#define FSV_VAL_NEGINT 275
#define FSV_VAL_BOOLEAN 276
#define FSV_VARIABLE 277
#define FSV_WHITESTRING 278
#define FSV_RANDUNI 279
#define FSV_RANDTAB 280
#define FSV_URAND 281
#define FSV_RAND48 282
#define FSE_FILE 283
#define FSE_FILES 284
#define FSE_FILESET 285
#define FSE_PROC 286
#define FSE_THREAD 287
#define FSE_FLOWOP 288
#define FSE_CVAR 289
#define FSE_RAND 290
#define FSE_MODE 291
#define FSE_MULTI 292
#define FSK_SEPLST 293
#define FSK_OPENLST 294
#define FSK_CLOSELST 295
#define FSK_OPENPAR 296
#define FSK_CLOSEPAR 297
#define FSK_ASSIGN 298
#define FSK_IN 299
#define FSK_QUOTE 300
#define FSA_SIZE 301
#define FSA_PREALLOC 302
#define FSA_PARALLOC 303
#define FSA_PATH 304
#define FSA_REUSE 305
#define FSA_MEMSIZE 306
#define FSA_RATE 307
#define FSA_READONLY 308
#define FSA_TRUSTTREE 309
#define FSA_IOSIZE 310
#define FSA_FILENAME 311
#define FSA_WSS 312
#define FSA_NAME 313
#define FSA_RANDOM 314
#define FSA_INSTANCES 315
#define FSA_DSYNC 316
#define FSA_TARGET 317
#define FSA_ITERS 318
#define FSA_NICE 319
#define FSA_VALUE 320
#define FSA_BLOCKING 321
#define FSA_HIGHWATER 322
#define FSA_DIRECTIO 323
#define FSA_DIRWIDTH 324
#define FSA_FD 325
#define FSA_SRCFD 326
#define FSA_ROTATEFD 327
#define FSA_ENTRIES 328
#define FSA_DIRDEPTHRV 329
#define FSA_DIRGAMMA 330
#define FSA_USEISM 331
#define FSA_TYPE 332
#define FSA_LEAFDIRS 333
#define FSA_INDEXED 334
#define FSA_RANDTABLE 335
#define FSA_RANDSRC 336
#define FSA_ROUND 337
#define FSA_RANDSEED 338
#define FSA_RANDGAMMA 339
#define FSA_RANDMEAN 340
#define FSA_MIN 341
#define FSA_MAX 342
#define FSA_MASTER 343
#define FSA_CLIENT 344
#define FSS_TYPE 345
#define FSS_SEED 346
#define FSS_GAMMA 347
#define FSS_MEAN 348
#define FSS_MIN 349
#define FSS_SRC 350
#define FSS_ROUND 351
#define FSA_LVAR_ASSIGN 352
#define FSA_ALLDONE 353
#define FSA_FIRSTDONE 354
#define FSA_TIMEOUT 355
#define FSA_LATHIST 356
#define FSA_NOREADAHEAD 357
#define FSA_IOPRIO 358
#define FSA_WRITEONLY 359
#define FSA_PARAMETERS 360
#define FSA_NOUSESTATS 361



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 114 "parser_gram.y"

	int64_t		 ival;
	unsigned char	 bval;
	char *		 sval;
	avd_t		 avd;
	cmd_t		*cmd;
	attr_t		*attr;
	list_t		*list;
	probtabent_t	*rndtb;


/* Line 387 of yacc.c  */
#line 420 "parser_gram.c"
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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSER_GRAM_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 448 "parser_gram.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNRULES -- Number of states.  */
#define YYNSTATES  295

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   361

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    49,    52,    55,    57,    61,    64,
      67,    70,    73,    76,    79,    82,    85,    88,    91,    94,
      97,   100,   102,   104,   106,   108,   113,   118,   125,   130,
     138,   146,   151,   156,   161,   165,   167,   169,   172,   178,
     180,   183,   190,   194,   198,   201,   204,   207,   210,   213,
     215,   217,   220,   223,   227,   231,   234,   237,   239,   241,
     245,   247,   251,   255,   257,   261,   263,   265,   269,   277,
     281,   283,   287,   291,   299,   301,   305,   307,   311,   315,
     317,   319,   323,   327,   329,   331,   335,   339,   343,   345,
     347,   351,   355,   357,   359,   363,   367,   371,   373,   375,
     377,   379,   381,   383,   385,   387,   389,   391,   393,   395,
     397,   399,   401,   403,   405,   407,   409,   411,   413,   415,
     417,   419,   421,   423,   425,   427,   429,   431,   433,   435,
     437,   439,   441,   443,   445,   447,   449,   451,   453,   455,
     457,   459,   461,   463,   465,   467,   469,   471,   473,   475,
     477,   479,   481,   483,   485,   487,   489,   491,   493,   495,
     497,   499,   501,   503,   505,   507,   509,   511,   515,   519,
     523,   527,   531,   537,   541,   545,   547,   554,   557,   559,
     563,   567,   569,   571,   573,   577,   579,   581,   583,   585
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,   108,   109,    -1,   108,     1,    -1,    -1,
     129,    -1,   130,    -1,   172,    -1,   119,    -1,   110,    -1,
     131,    -1,   112,    -1,   118,    -1,   133,    -1,   134,    -1,
     120,    -1,   125,    -1,   132,    -1,   111,    -1,   113,    -1,
     114,    -1,   115,    -1,    11,    -1,   110,   151,    -1,    10,
     117,    -1,    12,   117,    -1,    15,    -1,    16,    37,   153,
      -1,    16,   101,    -1,    17,   155,    -1,    45,    22,    -1,
      45,    23,    -1,   116,    23,    -1,   116,    22,    -1,   117,
      23,    -1,   117,    22,    -1,   117,    45,    -1,   116,    45,
      -1,     3,    30,    -1,     3,    33,    -1,     6,    19,    -1,
     121,    -1,   122,    -1,   123,    -1,   124,    -1,     9,    22,
      43,    19,    -1,     9,    22,    43,    21,    -1,     9,    22,
      43,    45,    23,    45,    -1,     9,    22,    43,    18,    -1,
       9,    22,    43,    35,    41,   141,    42,    -1,     9,    22,
      43,    34,    41,   173,    42,    -1,     9,    36,     5,   100,
      -1,     9,    36,     5,    98,    -1,     9,    36,     5,    99,
      -1,     9,    36,   106,    -1,     5,    -1,   135,    -1,   126,
     135,    -1,    32,   147,    39,   126,    40,    -1,   127,    -1,
     128,   127,    -1,     4,    31,   145,    39,   128,    40,    -1,
       4,    28,   137,    -1,     4,    30,   138,    -1,     7,    29,
      -1,     8,    19,    -1,     8,    22,    -1,    13,    19,    -1,
      13,    22,    -1,    13,    -1,    14,    -1,    14,    20,    -1,
      14,    19,    -1,    14,    20,    19,    -1,    14,    19,    19,
      -1,    33,   136,    -1,   135,   149,    -1,    18,    -1,   139,
      -1,   137,    38,   139,    -1,   140,    -1,   138,    38,   140,
      -1,   157,    43,   176,    -1,   157,    -1,   158,    43,   176,
      -1,   158,    -1,   142,    -1,   141,    38,   142,    -1,   141,
      38,    80,    43,    39,   144,    40,    -1,   159,    43,   176,
      -1,   159,    -1,    77,    43,   160,    -1,    81,    43,   162,
      -1,    39,   177,    38,   177,    38,   177,    40,    -1,   143,
      -1,   144,    38,   143,    -1,   146,    -1,   145,    38,   146,
      -1,   156,    43,   176,    -1,   156,    -1,   148,    -1,   147,
      38,   148,    -1,   165,    43,   176,    -1,   165,    -1,   150,
      -1,   149,    38,   150,    -1,   149,    38,   171,    -1,   166,
      43,   176,    -1,   166,    -1,   152,    -1,   151,    38,   152,
      -1,   167,    43,   176,    -1,   167,    -1,   154,    -1,   153,
      38,   154,    -1,   168,    43,   176,    -1,    65,    43,   176,
      -1,    58,    -1,    60,    -1,    64,    -1,    58,    -1,    49,
      -1,    46,    -1,    47,    -1,    48,    -1,    50,    -1,    54,
      -1,    53,    -1,   104,    -1,    58,    -1,    49,    -1,    73,
      -1,    46,    -1,    47,    -1,    48,    -1,    50,    -1,    54,
      -1,    53,    -1,   104,    -1,    69,    -1,    74,    -1,    75,
      -1,    78,    -1,    58,    -1,    83,    -1,    84,    -1,    85,
      -1,    86,    -1,    82,    -1,   161,    -1,    24,    -1,    25,
      -1,    84,    -1,   163,    -1,    26,    -1,    27,    -1,    77,
      -1,   105,    -1,    86,    -1,    87,    -1,    82,    -1,    58,
      -1,    51,    -1,    76,    -1,    60,    -1,   103,    -1,    57,
      -1,    56,    -1,    58,    -1,    59,    -1,    70,    -1,    71,
      -1,    72,    -1,    61,    -1,    68,    -1,    79,    -1,    62,
      -1,    63,    -1,    65,    -1,    66,    -1,    67,    -1,    55,
      -1,   102,    -1,    52,    -1,    88,    -1,    89,    -1,   170,
      -1,   169,    38,   170,    -1,   169,    38,   171,    -1,   175,
      43,   176,    -1,    22,    43,    21,    -1,    22,    43,    19,
      -1,    22,    43,    45,    23,    45,    -1,    22,    43,    18,
      -1,    22,    43,    22,    -1,    22,    -1,     4,    33,   169,
      39,   126,    40,    -1,   172,   169,    -1,   174,    -1,   173,
      38,   174,    -1,   164,    43,   176,    -1,    58,    -1,    63,
      -1,    18,    -1,    45,    23,    45,    -1,    19,    -1,    21,
      -1,    22,    -1,    19,    -1,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   191,   191,   198,   202,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   223,   229,   234,   243,   252,   259,   268,   276,
     285,   292,   300,   318,   335,   353,   370,   373,   378,   384,
     391,   406,   406,   406,   406,   408,   419,   429,   439,   450,
     462,   474,   484,   494,   504,   516,   523,   526,   544,   556,
     559,   577,   587,   595,   605,   613,   620,   628,   635,   642,
     650,   658,   667,   676,   684,   693,   699,   704,   706,   710,
     723,   727,   740,   745,   755,   760,   771,   775,   788,   807,
     812,   819,   824,   830,   840,   844,   858,   862,   876,   881,
     891,   895,   909,   914,   923,   927,   940,   954,   959,   968,
     972,   986,   991,  1000,  1004,  1018,  1024,  1034,  1035,  1036,
    1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1050,
    1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1061,  1062,  1063,  1066,  1067,  1068,  1069,  1070,  1071,  1073,
    1081,  1082,  1083,  1085,  1093,  1094,  1097,  1098,  1099,  1100,
    1101,  1104,  1105,  1106,  1107,  1108,  1111,  1112,  1113,  1114,
    1115,  1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,
    1125,  1126,  1127,  1130,  1133,  1134,  1136,  1140,  1153,  1167,
    1173,  1178,  1183,  1188,  1193,  1198,  1204,  1212,  1218,  1222,
    1236,  1243,  1244,  1246,  1252,  1257,  1262,  1267,  1274,  1277
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FSC_LIST", "FSC_DEFINE", "FSC_QUIT",
  "FSC_DEBUG", "FSC_CREATE", "FSC_SLEEP", "FSC_SET", "FSC_SYSTEM",
  "FSC_EVENTGEN", "FSC_ECHO", "FSC_RUN", "FSC_PSRUN", "FSC_VERSION",
  "FSC_ENABLE", "FSC_DOMULTISYNC", "FSV_STRING", "FSV_VAL_POSINT",
  "FSV_VAL_NEGINT", "FSV_VAL_BOOLEAN", "FSV_VARIABLE", "FSV_WHITESTRING",
  "FSV_RANDUNI", "FSV_RANDTAB", "FSV_URAND", "FSV_RAND48", "FSE_FILE",
  "FSE_FILES", "FSE_FILESET", "FSE_PROC", "FSE_THREAD", "FSE_FLOWOP",
  "FSE_CVAR", "FSE_RAND", "FSE_MODE", "FSE_MULTI", "FSK_SEPLST",
  "FSK_OPENLST", "FSK_CLOSELST", "FSK_OPENPAR", "FSK_CLOSEPAR",
  "FSK_ASSIGN", "FSK_IN", "FSK_QUOTE", "FSA_SIZE", "FSA_PREALLOC",
  "FSA_PARALLOC", "FSA_PATH", "FSA_REUSE", "FSA_MEMSIZE", "FSA_RATE",
  "FSA_READONLY", "FSA_TRUSTTREE", "FSA_IOSIZE", "FSA_FILENAME", "FSA_WSS",
  "FSA_NAME", "FSA_RANDOM", "FSA_INSTANCES", "FSA_DSYNC", "FSA_TARGET",
  "FSA_ITERS", "FSA_NICE", "FSA_VALUE", "FSA_BLOCKING", "FSA_HIGHWATER",
  "FSA_DIRECTIO", "FSA_DIRWIDTH", "FSA_FD", "FSA_SRCFD", "FSA_ROTATEFD",
  "FSA_ENTRIES", "FSA_DIRDEPTHRV", "FSA_DIRGAMMA", "FSA_USEISM",
  "FSA_TYPE", "FSA_LEAFDIRS", "FSA_INDEXED", "FSA_RANDTABLE",
  "FSA_RANDSRC", "FSA_ROUND", "FSA_RANDSEED", "FSA_RANDGAMMA",
  "FSA_RANDMEAN", "FSA_MIN", "FSA_MAX", "FSA_MASTER", "FSA_CLIENT",
  "FSS_TYPE", "FSS_SEED", "FSS_GAMMA", "FSS_MEAN", "FSS_MIN", "FSS_SRC",
  "FSS_ROUND", "FSA_LVAR_ASSIGN", "FSA_ALLDONE", "FSA_FIRSTDONE",
  "FSA_TIMEOUT", "FSA_LATHIST", "FSA_NOREADAHEAD", "FSA_IOPRIO",
  "FSA_WRITEONLY", "FSA_PARAMETERS", "FSA_NOUSESTATS", "$accept",
  "commands", "command", "eventgen_command", "system_command",
  "echo_command", "version_command", "enable_command", "multisync_command",
  "whitevar_string", "whitevar_string_list", "list_command",
  "debug_command", "set_command", "set_variable", "set_random_variable",
  "set_custom_variable", "set_mode", "quit_command", "flowop_list",
  "thread", "thread_list", "proc_define_command", "files_define_command",
  "create_command", "sleep_command", "run_command", "psrun_command",
  "flowop_command", "name", "file_attr_ops", "fileset_attr_ops",
  "file_attr_op", "fileset_attr_op", "randvar_attr_ops", "randvar_attr_op",
  "probtabentry", "probtabentry_list", "p_attr_ops", "p_attr_op",
  "t_attr_ops", "t_attr_op", "fo_attr_ops", "fo_attr_op", "ev_attr_ops",
  "ev_attr_op", "enable_multi_ops", "enable_multi_op", "multisync_op",
  "attrs_define_proc", "attrs_define_file", "attrs_define_fileset",
  "randvar_attr_name", "randvar_attr_typop", "randtype_name",
  "randvar_attr_srcop", "randsrc_name", "cvar_attr_name",
  "attrs_define_thread", "attrs_flowop", "attrs_eventgen", "em_attr_name",
  "comp_attr_ops", "comp_attr_op", "comp_lvar_def",
  "flowop_define_command", "cvar_attr_ops", "cvar_attr_op",
  "attrs_define_comp", "attr_value", "var_int_val", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   110,   111,   112,   113,   114,   114,   115,
     116,   116,   117,   117,   117,   117,   117,   117,   118,   118,
     119,   120,   120,   120,   120,   121,   121,   121,   121,   122,
     123,   124,   124,   124,   124,   125,   126,   126,   127,   128,
     128,   129,   130,   130,   131,   132,   132,   133,   133,   133,
     134,   134,   134,   134,   134,   135,   135,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   141,   142,
     142,   142,   142,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   155,   156,   156,   156,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   159,   159,   159,   159,   159,   159,   160,
     161,   161,   161,   162,   163,   163,   164,   164,   164,   164,
     164,   165,   165,   165,   165,   165,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   167,   168,   168,   169,   169,   169,   170,
     171,   171,   171,   171,   171,   171,   172,   172,   173,   173,
     174,   175,   175,   176,   176,   176,   176,   176,   177,   177
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     4,     4,     6,     4,     7,
       7,     4,     4,     4,     3,     1,     1,     2,     5,     1,
       2,     6,     3,     3,     2,     2,     2,     2,     2,     1,
       1,     2,     2,     3,     3,     2,     2,     1,     1,     3,
       1,     3,     3,     1,     3,     1,     1,     3,     7,     3,
       1,     3,     3,     7,     1,     3,     1,     3,     3,     1,
       1,     3,     3,     1,     1,     3,     3,     3,     1,     1,
       3,     3,     1,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     5,     3,     3,     1,     6,     2,     1,     3,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     1,     3,     0,     0,    55,     0,     0,     0,
       0,     0,    22,     0,    69,    70,    26,     0,     0,     2,
       9,    18,    11,    19,    20,    21,    12,     8,    15,    41,
      42,    43,    44,    16,     5,     6,    10,    17,    13,    14,
       7,    38,    39,     0,     0,     0,     0,    40,    64,    65,
      66,     0,     0,     0,     0,    24,    25,    67,    68,    72,
      71,     0,    28,     0,    29,   183,    23,   109,   112,   201,
     202,   197,   186,     0,   122,   123,   124,   121,   125,   127,
     126,   120,   128,    62,    78,    83,   132,   133,   134,   130,
     135,   137,   136,   129,   139,   131,   140,   141,   142,   138,
      63,    80,    85,   117,   118,   119,     0,    96,    99,     0,
       0,     0,    54,    30,    31,    33,    32,    37,    35,    34,
      36,    74,    73,   184,   185,    27,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,    45,    46,     0,     0,     0,    52,    53,    51,
       0,     0,   203,   205,   206,   207,     0,   116,   110,   111,
     195,   187,   188,   189,    79,    82,    81,    84,    97,     0,
      59,     0,    98,     0,     0,    56,     0,     0,     0,   114,
     115,     0,     0,   162,   161,   164,   163,   165,     0,   100,
     103,    61,    60,    77,    75,   196,    57,   181,   167,   166,
     168,   169,   173,   176,   177,   178,   179,   180,   174,   170,
     171,   172,   175,   182,    76,   104,   108,   156,   160,   158,
     159,   157,     0,     0,   198,   143,     0,     0,   148,   144,
     145,   146,   147,     0,    86,    90,    47,   204,   193,   191,
     190,   194,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    49,     0,     0,   101,     0,   102,
     105,   106,   107,   200,   199,   150,   151,   152,    91,   149,
     154,   155,    92,   153,     0,    87,    89,   192,    58,     0,
       0,     0,    94,     0,   208,   209,     0,     0,    88,     0,
      95,     0,     0,     0,    93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    19,    20,    21,    22,    23,    24,    25,    54,
      55,    26,    27,    28,    29,    30,    31,    32,    33,   174,
     170,   171,    34,    35,    36,    37,    38,    39,   175,   194,
      83,   100,    84,   101,   233,   234,   282,   283,   106,   107,
     188,   189,   214,   215,    66,    67,   125,   126,    64,   108,
      85,   102,   235,   268,   269,   272,   273,   222,   190,   216,
      68,   127,    71,    72,   162,    40,   223,   224,    73,   157,
     286
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -172
static const yytype_int16 yypact[] =
{
    -172,   185,  -172,  -172,    68,   141,  -172,    39,    50,   100,
      -8,    54,  -172,    54,   143,    12,  -172,   -30,    46,  -172,
      32,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
      -2,  -172,  -172,   -24,    19,    52,    -2,  -172,  -172,  -172,
    -172,    70,    -4,    41,   -10,    14,    14,  -172,  -172,   101,
     112,     1,  -172,    81,  -172,  -172,    97,  -172,   110,  -172,
    -172,   119,  -172,   123,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,   132,  -172,   138,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
     174,  -172,   171,  -172,  -172,  -172,   145,  -172,   172,   168,
     133,   105,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,   175,  -172,   173,   137,    32,
     137,    -6,   137,   -24,   137,    19,   137,    52,   186,   137,
     187,  -172,  -172,  -172,   134,   176,   196,  -172,  -172,  -172,
       1,   137,  -172,  -172,  -172,  -172,   198,  -172,  -172,  -172,
     179,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,   -43,
    -172,   -13,  -172,   205,    42,    71,     9,    63,   180,  -172,
    -172,   181,   142,  -172,  -172,  -172,  -172,  -172,   170,  -172,
     188,  -172,  -172,  -172,  -172,  -172,    71,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,   189,  -172,   190,  -172,  -172,  -172,
    -172,  -172,   191,     5,  -172,  -172,   192,   193,  -172,  -172,
    -172,  -172,  -172,    36,  -172,   194,  -172,  -172,  -172,  -172,
    -172,  -172,   201,   -43,   187,   137,   -17,   137,   137,     9,
    -172,   -14,   184,    23,  -172,   137,   183,  -172,    43,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,   195,  -172,  -172,  -172,  -172,   200,
     202,   157,  -172,   -20,  -172,  -172,   204,   202,  -172,   157,
    -172,   206,   157,   203,  -172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
     216,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,   -12,
      59,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -171,  -172,
    -172,  -172,   107,   111,  -172,    -5,   -42,  -172,  -172,   113,
    -172,     4,  -172,     3,  -172,   122,  -172,   102,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,   207,   124,     8,  -172,  -172,     7,  -172,  -130,
    -112
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     159,   111,   163,   196,   165,   160,   167,    61,   183,   172,
     265,   266,   115,   116,    51,   184,   160,   185,   287,   169,
     288,   180,    74,    75,    76,    77,    78,   191,    52,    79,
      80,    59,    60,   186,    81,   117,   118,   119,   197,   198,
     199,   200,   201,   249,   202,   203,   204,   250,   205,   206,
     207,   208,    69,   209,   210,   211,    69,    70,    47,   120,
     187,    70,   212,   113,   114,    86,    87,    88,    89,    90,
     267,    62,    91,    92,   253,   173,   173,    93,   254,    48,
      82,   225,   195,   278,    65,   213,   217,   196,    94,   123,
     124,   218,    95,    96,    97,   219,   220,    98,    41,    53,
     226,    42,   112,   274,   227,   228,   229,   230,   231,   232,
     103,    63,   104,   110,   221,   259,   105,   262,   263,    49,
     121,   225,    50,    99,   128,   276,   197,   198,   199,   200,
     201,   122,   202,   203,   204,   129,   205,   206,   207,   208,
     226,   209,   210,   211,   227,   228,   229,   230,   231,   232,
     212,   141,   142,   130,   143,   152,   153,   131,   154,   155,
     238,   239,    57,   240,   241,    58,   132,   144,   145,    43,
     133,    44,    45,   213,    46,   176,   284,   291,   146,   285,
     293,   134,   156,   137,   138,     2,     3,   242,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   147,   148,   149,   131,   140,   243,   244,
     270,   271,   135,   150,   136,   139,   151,   177,   169,   178,
     173,   181,   182,   193,   256,   236,   237,   246,   277,    56,
     192,   245,   258,   247,   248,   251,   252,   255,   279,   280,
     164,   281,   289,   294,   292,   290,   166,   257,   275,   260,
     168,   158,   179,   109,   261,   161,   264
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-172)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint16 yycheck[] =
{
     130,     5,   132,   174,   134,    22,   136,    37,    51,   139,
      24,    25,    22,    23,    22,    58,    22,    60,    38,    32,
      40,   151,    46,    47,    48,    49,    50,    40,    36,    53,
      54,    19,    20,    76,    58,    45,    22,    23,    55,    56,
      57,    58,    59,    38,    61,    62,    63,    42,    65,    66,
      67,    68,    58,    70,    71,    72,    58,    63,    19,    45,
     103,    63,    79,    22,    23,    46,    47,    48,    49,    50,
      84,   101,    53,    54,    38,    33,    33,    58,    42,    29,
     104,    58,    40,    40,    52,   102,    77,   258,    69,    88,
      89,    82,    73,    74,    75,    86,    87,    78,    30,    45,
      77,    33,   106,    80,    81,    82,    83,    84,    85,    86,
      58,    65,    60,    43,   105,   245,    64,   247,   248,    19,
      19,    58,    22,   104,    43,   255,    55,    56,    57,    58,
      59,    19,    61,    62,    63,    38,    65,    66,    67,    68,
      77,    70,    71,    72,    81,    82,    83,    84,    85,    86,
      79,    18,    19,    43,    21,    18,    19,    38,    21,    22,
      18,    19,    19,    21,    22,    22,    43,    34,    35,    28,
      38,    30,    31,   102,    33,    41,    19,   289,    45,    22,
     292,    43,    45,    38,    39,     0,     1,    45,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    98,    99,   100,    38,    39,    38,    39,
      26,    27,    38,    38,    43,    43,    43,    41,    32,    23,
      33,    23,    43,    18,    23,    45,    45,    38,    45,    13,
     171,    43,   244,    43,    43,    43,    43,    43,    43,    39,
     133,    39,    38,    40,    38,   287,   135,   243,   253,   246,
     137,   129,   150,    46,   246,   131,   249
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   108,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   109,
     110,   111,   112,   113,   114,   115,   118,   119,   120,   121,
     122,   123,   124,   125,   129,   130,   131,   132,   133,   134,
     172,    30,    33,    28,    30,    31,    33,    19,    29,    19,
      22,    22,    36,    45,   116,   117,   117,    19,    22,    19,
      20,    37,   101,    65,   155,    52,   151,   152,   167,    58,
      63,   169,   170,   175,    46,    47,    48,    49,    50,    53,
      54,    58,   104,   137,   139,   157,    46,    47,    48,    49,
      50,    53,    54,    58,    69,    73,    74,    75,    78,   104,
     138,   140,   158,    58,    60,    64,   145,   146,   156,   169,
      43,     5,   106,    22,    23,    22,    23,    45,    22,    23,
      45,    19,    19,    88,    89,   153,   154,   168,    43,    38,
      43,    38,    43,    38,    43,    38,    43,    38,    39,    43,
      39,    18,    19,    21,    34,    35,    45,    98,    99,   100,
      38,    43,    18,    19,    21,    22,    45,   176,   152,   176,
      22,   170,   171,   176,   139,   176,   140,   176,   146,    32,
     127,   128,   176,    33,   126,   135,    41,    41,    23,   154,
     176,    23,    43,    51,    58,    60,    76,   103,   147,   148,
     165,    40,   127,    18,   136,    40,   135,    55,    56,    57,
      58,    59,    61,    62,    63,    65,    66,    67,    68,    70,
      71,    72,    79,   102,   149,   150,   166,    77,    82,    86,
      87,   105,   164,   173,   174,    58,    77,    81,    82,    83,
      84,    85,    86,   141,   142,   159,    45,    45,    18,    19,
      21,    22,    45,    38,    39,    43,    38,    43,    43,    38,
      42,    43,    43,    38,    42,    43,    23,   148,   126,   176,
     150,   171,   176,   176,   174,    24,    25,    84,   160,   161,
      26,    27,   162,   163,    80,   142,   176,    45,    40,    43,
      39,    39,   143,   144,    19,    22,   177,    38,    40,    38,
     143,   177,    38,   177,    40
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
      yyerror (YY_("syntax error: cannot back up")); \
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
yyparse (void)
#else
int
yyparse ()

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
#line 192 "parser_gram.y"
    {
	if ((yyvsp[(2) - (2)].cmd)->cmd)
		(yyvsp[(2) - (2)].cmd)->cmd((yyvsp[(2) - (2)].cmd));

	free((yyvsp[(2) - (2)].cmd));
}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 199 "parser_gram.y"
    {
	YYABORT;
}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 224 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_eventgen;
}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 230 "parser_gram.y"
    {
	(yyvsp[(1) - (2)].cmd)->cmd_attr_list = (yyvsp[(2) - (2)].attr);
}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 235 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd_param_list = (yyvsp[(2) - (2)].list);
	(yyval.cmd)->cmd = parser_system;
}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 244 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd_param_list = (yyvsp[(2) - (2)].list);
	(yyval.cmd)->cmd = parser_echo;
}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 253 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_version;
}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 260 "parser_gram.y"
    {

	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd = parser_enable_mc;
	(yyval.cmd)->cmd_attr_list = (yyvsp[(3) - (3)].attr);
}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 269 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd = parser_enable_lathist;
}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 277 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd = parser_domultisync;
	(yyval.cmd)->cmd_attr_list = (yyvsp[(2) - (2)].attr);
}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 286 "parser_gram.y"
    {
	if (((yyval.list) = alloc_list()) == NULL)
			YYERROR;

	(yyval.list)->list_string = avd_str_alloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 293 "parser_gram.y"
    {
	if (((yyval.list) = alloc_list()) == NULL)
			YYERROR;

	(yyval.list)->list_string = avd_str_alloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 301 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add string */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = avd_str_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);

}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 319 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add variable */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = avd_str_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 336 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add string */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = avd_str_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);

}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 354 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add variable */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = avd_str_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 371 "parser_gram.y"
    {
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 374 "parser_gram.y"
    {
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 379 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_fileset_list;
}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 385 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_flowop_list;
}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 392 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = NULL;
	filebench_shm->shm_debug_level = (yyvsp[(2) - (2)].ival);
	if (filebench_shm->shm_debug_level > 10) {
		filebench_log(LOG_ERROR, "Debug level set out of range."
					"  Adjusting to 10.");
			filebench_shm->shm_debug_level = 10;
		}
	if (filebench_shm->shm_debug_level > 9)
		yydebug = 1;
}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 409 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	var_assign_integer((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].ival));

	(yyval.cmd)->cmd = NULL;
}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 420 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	var_assign_boolean((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].bval));

	(yyval.cmd)->cmd = NULL;
}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 430 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	var_assign_string((yyvsp[(2) - (6)].sval), (yyvsp[(5) - (6)].sval));

	(yyval.cmd)->cmd = NULL;
}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 440 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	var_assign_string((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval));

	(yyval.cmd)->cmd = NULL;
}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 451 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	(yyval.cmd)->cmd_attr_list = (yyvsp[(6) - (7)].attr);
	(yyval.cmd)->cmd = NULL;

	parser_var_assign_random((yyvsp[(2) - (7)].sval), (yyval.cmd));
}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 463 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	(yyval.cmd)->cmd_attr_list = (yyvsp[(6) - (7)].attr);
	(yyval.cmd)->cmd = NULL;

	parser_var_assign_custom((yyvsp[(2) - (7)].sval), (yyval.cmd));
}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 475 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	filebench_shm->shm_rmode = FILEBENCH_MODE_TIMEOUT;

	(yyval.cmd)->cmd = NULL;
}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 485 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	filebench_shm->shm_rmode = FILEBENCH_MODE_QALLDONE;

	(yyval.cmd)->cmd = NULL;
}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 495 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	filebench_shm->shm_rmode = FILEBENCH_MODE_Q1STDONE;

	(yyval.cmd)->cmd = NULL;
}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 505 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	filebench_log(LOG_INFO, "Disabling CPU usage statistics");
	filebench_shm->shm_mmode |= FILEBENCH_MODE_NOUSAGE;

	(yyval.cmd)->cmd = NULL;
}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 517 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_filebench_shutdown;
}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 524 "parser_gram.y"
    {
	(yyval.cmd) = (yyvsp[(1) - (1)].cmd);
}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 527 "parser_gram.y"
    {
	cmd_t *list = NULL;
	cmd_t *list_end = NULL;

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].cmd); list != NULL;
	    list = list->cmd_next)
		list_end = list;

	list_end->cmd_next = (yyvsp[(2) - (2)].cmd);

	filebench_log(LOG_DEBUG_IMPL,
	    "flowop_list adding cmd %zx to list %zx", (yyvsp[(2) - (2)].cmd), (yyvsp[(1) - (2)].cmd));

	(yyval.cmd) = (yyvsp[(1) - (2)].cmd);
}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 545 "parser_gram.y"
    {
	/*
	 * Allocate a cmd node per thread, with a
	 * list of flowops attached to the cmd_list
	 */
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd_list = (yyvsp[(4) - (5)].cmd);
	(yyval.cmd)->cmd_attr_list = (yyvsp[(2) - (5)].attr);
}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 557 "parser_gram.y"
    {
	(yyval.cmd) = (yyvsp[(1) - (1)].cmd);
}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 560 "parser_gram.y"
    {
	cmd_t *list = NULL;
	cmd_t *list_end = NULL;

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].cmd); list != NULL;
	    list = list->cmd_next)
		list_end = list;

	list_end->cmd_next = (yyvsp[(2) - (2)].cmd);

	filebench_log(LOG_DEBUG_IMPL,
	    "thread_list adding cmd %zx to list %zx", (yyvsp[(2) - (2)].cmd), (yyvsp[(1) - (2)].cmd));

	(yyval.cmd) = (yyvsp[(1) - (2)].cmd);
}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 578 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;
	(yyval.cmd)->cmd = &parser_proc_define;
	(yyval.cmd)->cmd_list = (yyvsp[(5) - (6)].cmd);
	(yyval.cmd)->cmd_attr_list = (yyvsp[(3) - (6)].attr);
}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 588 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	(yyval.cmd)->cmd = &parser_file_define;
	(yyval.cmd)->cmd_attr_list = (yyvsp[(3) - (3)].attr);
}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 596 "parser_gram.y"
    {
	(yyval.cmd) = alloc_cmd();
	if (!(yyval.cmd))
		YYERROR;

	(yyval.cmd)->cmd = &parser_fileset_define;
	(yyval.cmd)->cmd_attr_list = (yyvsp[(3) - (3)].attr);
}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 606 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd = &parser_fileset_create;
}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 614 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_sleep;
	(yyval.cmd)->cmd_qty = (yyvsp[(2) - (2)].ival);
}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 621 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_sleep_variable;
	(yyval.cmd)->cmd_tgt1 = fb_stralloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 629 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_run;
	(yyval.cmd)->cmd_qty = (yyvsp[(2) - (2)].ival);
}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 636 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_run_variable;
	(yyval.cmd)->cmd_tgt1 = fb_stralloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 643 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_run;
	(yyval.cmd)->cmd_qty = 0;
}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 651 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_psrun;
	(yyval.cmd)->cmd_qty1 = 0;
	(yyval.cmd)->cmd_qty = 0;
}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 659 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_psrun;
	(yyval.cmd)->cmd_qty1 = (yyvsp[(2) - (2)].ival);
	(yyval.cmd)->cmd_qty = 0;

}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 668 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_psrun;
	(yyval.cmd)->cmd_qty1 = (yyvsp[(2) - (2)].ival);
	(yyval.cmd)->cmd_qty = 0;

}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 677 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_psrun;
	(yyval.cmd)->cmd_qty1 = (yyvsp[(2) - (3)].ival);
	(yyval.cmd)->cmd_qty = (yyvsp[(3) - (3)].ival);
}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 685 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_psrun;
	(yyval.cmd)->cmd_qty1 = (yyvsp[(2) - (3)].ival);
	(yyval.cmd)->cmd_qty = (yyvsp[(3) - (3)].ival);
}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 694 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd_name = fb_stralloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 700 "parser_gram.y"
    {
	(yyvsp[(1) - (2)].cmd)->cmd_attr_list = (yyvsp[(2) - (2)].attr);
}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 707 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 711 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr; attr = attr->attr_next)
		list_end = attr;

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 724 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 728 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr; attr = attr->attr_next)
		list_end = attr;

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 741 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 746 "parser_gram.y"
    {
	(yyval.attr) = alloc_attr();
	if (!(yyval.attr))
		YYERROR;

	(yyval.attr)->attr_name = (yyvsp[(1) - (1)].ival);
	(yyval.attr)->attr_avd = avd_bool_alloc(TRUE);
}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 756 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 761 "parser_gram.y"
    {
	(yyval.attr) = alloc_attr();
	if (!(yyval.attr))
		YYERROR;

	(yyval.attr)->attr_name = (yyvsp[(1) - (1)].ival);
	(yyval.attr)->attr_avd = avd_bool_alloc(TRUE);
}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 772 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 776 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 789 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (7)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */


	if ((attr = alloc_attr()) == NULL)
		YYERROR;

	attr->attr_name = FSA_RANDTABLE;
	attr->attr_obj = (void *)(yyvsp[(6) - (7)].rndtb);
	list_end->attr_next = attr;
	(yyval.attr) = (yyvsp[(1) - (7)].attr);
}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 808 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 813 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_name = (yyvsp[(1) - (1)].ival);
	(yyval.attr)->attr_avd = avd_bool_alloc(TRUE);
}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 820 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = FSA_TYPE;
}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 825 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = FSA_RANDSRC;
}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 831 "parser_gram.y"
    {
	if (((yyval.rndtb) = alloc_probtabent()) == NULL)
		YYERROR;
	(yyval.rndtb)->pte_percent = (yyvsp[(2) - (7)].avd);
	(yyval.rndtb)->pte_segmin  = (yyvsp[(4) - (7)].avd);
	(yyval.rndtb)->pte_segmax  = (yyvsp[(6) - (7)].avd);
}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 841 "parser_gram.y"
    {
	(yyval.rndtb) = (yyvsp[(1) - (1)].rndtb);
}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 845 "parser_gram.y"
    {
	probtabent_t *pte = NULL;
	probtabent_t *ptelist_end = NULL;

	for (pte = (yyvsp[(1) - (3)].rndtb); pte != NULL;
	    pte = pte->pte_next)
		ptelist_end = pte; /* Find end of prob table entry list */

	ptelist_end->pte_next = (yyvsp[(3) - (3)].rndtb);

	(yyval.rndtb) = (yyvsp[(1) - (3)].rndtb);
}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 859 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 863 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 877 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 882 "parser_gram.y"
    {
	(yyval.attr) = alloc_attr();
	if (!(yyval.attr))
		YYERROR;
	(yyval.attr)->attr_name = (yyvsp[(1) - (1)].ival);
	(yyval.attr)->attr_avd = avd_bool_alloc(TRUE);
}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 892 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 896 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 910 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 915 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_name = (yyvsp[(1) - (1)].ival);
	(yyval.attr)->attr_avd = avd_bool_alloc(TRUE);
}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 924 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 928 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 941 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 955 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 960 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_name = (yyvsp[(1) - (1)].ival);
	(yyval.attr)->attr_avd = avd_bool_alloc(TRUE);
}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 969 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 973 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 987 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 992 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_name = (yyvsp[(1) - (1)].ival);
	(yyval.attr)->attr_avd = avd_bool_alloc(TRUE);
}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 1001 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 1005 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 1019 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 1025 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = FSA_VALUE;
}
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 1034 "parser_gram.y"
    { (yyval.ival) = FSA_NAME;}
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 1035 "parser_gram.y"
    { (yyval.ival) = FSA_INSTANCES;}
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 1036 "parser_gram.y"
    { (yyval.ival) = FSA_NICE;}
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 1039 "parser_gram.y"
    { (yyval.ival) = FSA_NAME;}
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 1040 "parser_gram.y"
    { (yyval.ival) = FSA_PATH;}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 1041 "parser_gram.y"
    { (yyval.ival) = FSA_SIZE;}
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 1042 "parser_gram.y"
    { (yyval.ival) = FSA_PREALLOC;}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 1043 "parser_gram.y"
    { (yyval.ival) = FSA_PARALLOC;}
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 1044 "parser_gram.y"
    { (yyval.ival) = FSA_REUSE;}
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 1045 "parser_gram.y"
    { (yyval.ival) = FSA_TRUSTTREE;}
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 1046 "parser_gram.y"
    { (yyval.ival) = FSA_READONLY;}
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 1047 "parser_gram.y"
    { (yyval.ival) = FSA_WRITEONLY;}
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 1050 "parser_gram.y"
    { (yyval.ival) = FSA_NAME;}
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 1051 "parser_gram.y"
    { (yyval.ival) = FSA_PATH;}
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 1052 "parser_gram.y"
    { (yyval.ival) = FSA_ENTRIES;}
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 1053 "parser_gram.y"
    { (yyval.ival) = FSA_SIZE;}
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 1054 "parser_gram.y"
    { (yyval.ival) = FSA_PREALLOC;}
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 1055 "parser_gram.y"
    { (yyval.ival) = FSA_PARALLOC;}
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 1056 "parser_gram.y"
    { (yyval.ival) = FSA_REUSE;}
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 1057 "parser_gram.y"
    { (yyval.ival) = FSA_TRUSTTREE;}
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 1058 "parser_gram.y"
    { (yyval.ival) = FSA_READONLY;}
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 1059 "parser_gram.y"
    { (yyval.ival) = FSA_WRITEONLY;}
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 1060 "parser_gram.y"
    { (yyval.ival) = FSA_DIRWIDTH;}
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 1061 "parser_gram.y"
    { (yyval.ival) = FSA_DIRDEPTHRV;}
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 1062 "parser_gram.y"
    { (yyval.ival) = FSA_DIRGAMMA;}
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 1063 "parser_gram.y"
    { (yyval.ival) = FSA_LEAFDIRS;}
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 1066 "parser_gram.y"
    { (yyval.ival) = FSA_NAME;}
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 1067 "parser_gram.y"
    { (yyval.ival) = FSA_RANDSEED;}
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 1068 "parser_gram.y"
    { (yyval.ival) = FSA_RANDGAMMA;}
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 1069 "parser_gram.y"
    { (yyval.ival) = FSA_RANDMEAN;}
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 1070 "parser_gram.y"
    { (yyval.ival) = FSA_MIN;}
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 1071 "parser_gram.y"
    { (yyval.ival) = FSA_ROUND;}
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 1074 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_avd = avd_int_alloc((yyvsp[(1) - (1)].ival));
}
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 1081 "parser_gram.y"
    { (yyval.ival) = FSV_RANDUNI;}
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 1082 "parser_gram.y"
    { (yyval.ival) = FSV_RANDTAB;}
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 1083 "parser_gram.y"
    { (yyval.ival) = FSA_RANDGAMMA;}
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 1086 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_avd = avd_int_alloc((yyvsp[(1) - (1)].ival));
}
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 1093 "parser_gram.y"
    { (yyval.ival) = FSV_URAND;}
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 1094 "parser_gram.y"
    { (yyval.ival) = FSV_RAND48;}
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 1097 "parser_gram.y"
    { (yyval.ival) = FSA_TYPE;}
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 1098 "parser_gram.y"
    { (yyval.ival) = FSA_PARAMETERS;}
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 1099 "parser_gram.y"
    { (yyval.ival) = FSA_MIN;}
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 1100 "parser_gram.y"
    { (yyval.ival) = FSA_MAX;}
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 1101 "parser_gram.y"
    { (yyval.ival) = FSA_ROUND;}
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 1104 "parser_gram.y"
    { (yyval.ival) = FSA_NAME;}
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 1105 "parser_gram.y"
    { (yyval.ival) = FSA_MEMSIZE;}
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 1106 "parser_gram.y"
    { (yyval.ival) = FSA_USEISM;}
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 1107 "parser_gram.y"
    { (yyval.ival) = FSA_INSTANCES;}
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 1108 "parser_gram.y"
    { (yyval.ival) = FSA_IOPRIO;}
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 1111 "parser_gram.y"
    { (yyval.ival) = FSA_WSS;}
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 1112 "parser_gram.y"
    { (yyval.ival) = FSA_FILENAME;}
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 1113 "parser_gram.y"
    { (yyval.ival) = FSA_NAME;}
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 1114 "parser_gram.y"
    { (yyval.ival) = FSA_RANDOM;}
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 1115 "parser_gram.y"
    { (yyval.ival) = FSA_FD;}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 1116 "parser_gram.y"
    { (yyval.ival) = FSA_SRCFD;}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 1117 "parser_gram.y"
    { (yyval.ival) = FSA_ROTATEFD;}
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 1118 "parser_gram.y"
    { (yyval.ival) = FSA_DSYNC;}
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 1119 "parser_gram.y"
    { (yyval.ival) = FSA_DIRECTIO;}
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 1120 "parser_gram.y"
    { (yyval.ival) = FSA_INDEXED;}
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 1121 "parser_gram.y"
    { (yyval.ival) = FSA_TARGET;}
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 1122 "parser_gram.y"
    { (yyval.ival) = FSA_ITERS;}
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 1123 "parser_gram.y"
    { (yyval.ival) = FSA_VALUE;}
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 1124 "parser_gram.y"
    { (yyval.ival) = FSA_BLOCKING;}
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 1125 "parser_gram.y"
    { (yyval.ival) = FSA_HIGHWATER;}
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 1126 "parser_gram.y"
    { (yyval.ival) = FSA_IOSIZE;}
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 1127 "parser_gram.y"
    { (yyval.ival) = FSA_NOREADAHEAD;}
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 1130 "parser_gram.y"
    { (yyval.ival) = FSA_RATE;}
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 1133 "parser_gram.y"
    { (yyval.ival) = FSA_MASTER;}
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 1134 "parser_gram.y"
    { (yyval.ival) = FSA_CLIENT;}
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 1137 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 1141 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 1154 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 1168 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 1174 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_lvar_attr(var_lvar_assign_boolean((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].bval)))) == NULL)
		YYERROR;
}
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 1179 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_lvar_attr(var_lvar_assign_integer((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].ival)))) == NULL)
		YYERROR;
}
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 1184 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_lvar_attr(var_lvar_assign_string((yyvsp[(1) - (5)].sval), (yyvsp[(4) - (5)].sval)))) == NULL)
		YYERROR;
}
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 1189 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_lvar_attr(var_lvar_assign_string((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval)))) == NULL)
		YYERROR;
}
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 1194 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_lvar_attr(var_lvar_assign_var((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval)))) == NULL)
		YYERROR;
}
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 1199 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_lvar_attr(var_lvar_alloc_local((yyvsp[(1) - (1)].sval)))) == NULL)
		YYERROR;
}
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 1205 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_composite_flowop_define;
	(yyval.cmd)->cmd_list = (yyvsp[(5) - (6)].cmd);
	(yyval.cmd)->cmd_attr_list = (yyvsp[(3) - (6)].attr);
}
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 1213 "parser_gram.y"
    {
	(yyvsp[(1) - (2)].cmd)->cmd_attr_list = (yyvsp[(2) - (2)].attr);
}
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 1219 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 1223 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 1237 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 1243 "parser_gram.y"
    { (yyval.ival) = FSA_NAME;}
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 1244 "parser_gram.y"
    { (yyval.ival) = FSA_ITERS;}
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 1247 "parser_gram.y"
    {
	(yyval.attr) = alloc_attr();
	if (!(yyval.attr))
		YYERROR;
	(yyval.attr)->attr_avd = avd_str_alloc((yyvsp[(1) - (1)].sval));
}
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 1252 "parser_gram.y"
    {
	(yyval.attr) = alloc_attr();
	if (!(yyval.attr))
		YYERROR;
	(yyval.attr)->attr_avd = avd_str_alloc((yyvsp[(2) - (3)].sval));
}
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 1257 "parser_gram.y"
    {
	(yyval.attr) = alloc_attr();
	if (!(yyval.attr))
		YYERROR;
	(yyval.attr)->attr_avd = avd_int_alloc((yyvsp[(1) - (1)].ival));
}
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 1262 "parser_gram.y"
    {
	(yyval.attr) = alloc_attr();
	if (!(yyval.attr))
		YYERROR;
	(yyval.attr)->attr_avd = avd_bool_alloc((yyvsp[(1) - (1)].bval));
}
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 1267 "parser_gram.y"
    {
	(yyval.attr) = alloc_attr();
	if (!(yyval.attr))
		YYERROR;
	(yyval.attr)->attr_avd = avd_var_alloc((yyvsp[(1) - (1)].sval));
}
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 1275 "parser_gram.y"
    {
	(yyval.avd) = avd_int_alloc((yyvsp[(1) - (1)].ival));
}
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 1278 "parser_gram.y"
    {
	(yyval.avd) = avd_var_alloc((yyvsp[(1) - (1)].sval));
}
    break;


/* Line 1792 of yacc.c  */
#line 3776 "parser_gram.c"
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
#line 1282 "parser_gram.y"


/*
 * The following C routines implement the various commands defined in the above
 * yacc parser code. The yacc portion checks the syntax of the commands found
 * in a workload file and parses the commands' parameters into lists. The lists
 * are then passed in a cmd_t struct for each command to its related routine in
 * the following section for actual execution.  This section also includes a
 * few utility routines and the main entry point for the program.
 */

#define	USAGE \
"Usage: " \
"filebench {-f <wmlscript> | -h | -c [cvartype]}\n\n" \
"  Filebench version " FILEBENCH_VERSION "\n\n" \
"  Filebench is a file system and storage benchmark that interprets a script\n" \
"  written in its Workload Model Language (WML), and procees to generate the\n" \
"  specified workload. Refer to the README for more details.\n\n" \
"  Visit github.com/filebench/filebench for WML definition and tutorials.\n\n" \
"Options:\n" \
"   -f <wmlscript> generate workload from the specified file\n" \
"   -h             display this help message\n" \
"   -c             display supported cvar types\n" \
"   -c [cvartype]  display options of the specific cvar type\n\n"

static void
usage_exit(int ret, const char *msg)
{
	if (ret) {
		(void)fprintf(stderr, "Usage error: %s\n\n", msg);
		(void)fprintf(stderr, USAGE);
	} else
		printf(USAGE);
	exit(ret);
}

struct fbparams {
	char *execname;
	char *fscriptname;
	char *procname;
	char *shmaddr;
	char *shmpath;
	int instance;
	char *cvartype;
};

static void
init_fbparams(struct fbparams *fbparams)
{
	memset(fbparams, 0, sizeof(*fbparams));
	fbparams->instance = -1;
}

#define FB_MODE_NONE		0
#define FB_MODE_HELP		1
#define FB_MODE_MASTER		2
#define FB_MODE_WORKER		3
#define FB_MODE_CVARS		4

static int
parse_options(int argc, char *argv[], struct fbparams *fbparams)
{
	const char cmd_options[] = "m:s:a:i:hf:c:";
	int mode = FB_MODE_NONE;
	int opt;

	init_fbparams(fbparams);
	fbparams->execname = argv[0];

 	/*
	 * We don't want getopt() to print error messages because
	 * sometimes what it percieves as an error is actually not
	 * an error.  For example, "-c" option might have or might
	 * not have an argument.  If opterr is non-zero, getopt()
	 * prints an error message when "-c"'s argument is missing.
	 */
	opterr = 0;

	/* Either
		(-f <wmlscript>) or
		(-a and -s and -m and -i) or
		(-c [cvartype]) or
		(-h)
	   must be specified */
	while ((opt = getopt(argc, argv, cmd_options)) > 0) {
		switch (opt) {
		/* public parameters */
		case 'h':
			if (mode != FB_MODE_NONE)
				usage_exit(1, "Too many options specified");
			mode = FB_MODE_HELP;
			break;
		case 'c':
			if (mode != FB_MODE_NONE)
				usage_exit(1, "Too many options specified");
			mode = FB_MODE_CVARS;
			fbparams->cvartype = optarg;
			break;
		case 'f':
			if (mode != FB_MODE_NONE)
				usage_exit(1, "Too many options specified");
			mode = FB_MODE_MASTER;
			fbparams->fscriptname = optarg;
			break;
		/* private parameters: when filebench calls itself */
		case 'a':
			if (mode != FB_MODE_NONE &&
				(mode != FB_MODE_WORKER || fbparams->procname))
					usage_exit(1, "Too many options");
			mode = FB_MODE_WORKER;
			fbparams->procname = optarg;
			break;
		case 's':
			if (mode != FB_MODE_NONE &&
				(mode != FB_MODE_WORKER || fbparams->shmaddr))
					usage_exit(1, "Too many options");
			mode = FB_MODE_WORKER;
			sscanf(optarg, "%p", &fbparams->shmaddr);
			break;
		case 'm':
			if (mode != FB_MODE_NONE &&
				(mode != FB_MODE_WORKER || fbparams->shmpath))
					usage_exit(1, "Too many options");
			mode = FB_MODE_WORKER;
			fbparams->shmpath = optarg;
			break;
		case 'i':
			if (mode != FB_MODE_NONE &&
				(mode != FB_MODE_WORKER || fbparams->instance != -1))
					usage_exit(1, "Too many options");
			mode = FB_MODE_WORKER;
			sscanf(optarg, "%d", &fbparams->instance);
			break;
		case '?':
			if (optopt == 'c') {
				if (mode != FB_MODE_NONE)
					usage_exit(1, "Too many options");
				mode = FB_MODE_CVARS;
				break;
			}
		default:
			usage_exit(1, "Unrecognized option");
			break;
		}
	}

	if (mode == FB_MODE_NONE)
		usage_exit(1, "No runtime options specified");

	if (mode == FB_MODE_WORKER) {
		if (!fbparams->procname ||
			!fbparams->shmaddr ||
			!fbparams->shmpath ||
			fbparams->instance == -1)
			usage_exit(1, "Invalid worker settings");
	}

	return mode;
}

static void
worker_mode(struct fbparams *fbparams)
{
	int ret;

	ret = ipc_attach(fbparams->shmaddr, fbparams->shmpath);
	if (ret < 0) {
		filebench_log(LOG_FATAL, "Cannot attach shm for %s",
		    fbparams->procname);
		exit(1);
	}

	/* get correct function pointer for each working process */
	flowop_init(0);

	/* load custom variable libraries and revalidate handles */
	ret = init_cvar_libraries();
	if (ret)
		exit(1);

	ret = revalidate_cvar_handles();
	if (ret)
		exit(1);

	/* execute corresponding procflow */
	ret = procflow_exec(fbparams->procname, fbparams->instance);
	if (ret < 0) {
		filebench_log(LOG_FATAL, "Cannot startup process %s",
		    fbparams->procname);
		exit(1);
	}

	exit(0);
}

void parser_list_cvar_types(void)
{
	cvar_library_info_t *t;

	if (!filebench_shm->shm_cvar_lib_info_list) {
		printf("No custom variables supported.\n");
		return;
	}

	printf("Custom variable types supported:\n");
	for (t = filebench_shm->shm_cvar_lib_info_list; t; t = t->next)
		printf("  %s\n", t->type);

	return;
}

void parser_list_cvar_type_parameters(char *type)
{
	const char *version = NULL;
	const char *usage = NULL;

	cvar_library_info_t *t;

	for (t = filebench_shm->shm_cvar_lib_info_list; t != NULL; t = t->next) {
		if (!strcmp(type, t->type))
			break;
	}

	if (!t) {
		printf("Unknown custom variable type %s.\n", type);
		return;
	}

	printf("Custom variable type: %s\n", t->type);
	printf("Supporting library: %s\n", t->filename);

	if (cvar_libraries[t->index]->cvar_op.cvar_version)
		version = cvar_libraries[t->index]->cvar_op.cvar_version();

	if (cvar_libraries[t->index]->cvar_op.cvar_usage)
		usage = cvar_libraries[t->index]->cvar_op.cvar_usage();


	if (version)
		printf("Version: %s\n", version);
	else
		printf("Oops. No version information provided.\n");

	if (usage)
		printf("Usage:\n%s\n", usage);
	else
		printf("Oops. No usage information provided.\n");

	return;
}

static void
cvars_mode(struct fbparams *fbparams)
{
	int ret;

	ipc_init();

	ret = init_cvar_library_info(FBDATADIR "/cvars");
	if (ret)
		filebench_shutdown(1);

	ret = init_cvar_libraries();
	if (ret)
		filebench_shutdown(1);

	if (fbparams->cvartype)
		parser_list_cvar_type_parameters(fbparams->cvartype);
	else
		parser_list_cvar_types();

	ipc_fini();

	exit(0);
}

/*
 * Shutdown filebench.
 */
static void
parser_abort(int arg)
{
	(void) sigignore(SIGINT);
	filebench_log(LOG_INFO, "Aborting...");
	filebench_shutdown(1);
}

static void
master_mode(struct fbparams *fbparams) {
	int ret;

	printf("Filebench Version %s\n", FILEBENCH_VERSION);

	yyin = fopen(fbparams->fscriptname, "r");
	if (!yyin) {
		filebench_log(LOG_FATAL,
			"Cannot open file %s!", fbparams->fscriptname);
		exit(1);
	}

	execname = fbparams->execname;
	fb_set_shmmax();

	ipc_init();

	/* Below we initialize things that depend on IPC */
	(void)strcpy(filebench_shm->shm_fscriptname,
				fbparams->fscriptname);

	flowop_init(1);
	eventgen_init();

	/* Initialize custom variables. */
	ret = init_cvar_library_info(FBDATADIR "/cvars");
	if (ret)
		filebench_shutdown(1);

	ret = init_cvar_libraries();
	if (ret)
		filebench_shutdown(1);

	signal(SIGINT, parser_abort);

	/* yyparse() after it parsed complete grammar */
	yyparse();

	/* We only get here if there was no
	   run (or similar) command in the
	   end of the WML script. */
	printf("Warning: no run command in the WML script!\n");
	parser_filebench_shutdown((cmd_t *)0);
}

static void
init_common()
{
	disable_aslr();
	my_pid = getpid();
	fb_set_rlimit();
}

/*
 * Entry point for Filebench. Processes command line arguments. The -f option
 * will read in a workload file (the full name and extension must must be
 * given). The -a, -s, -m and -i options are used by the worker process to
 * receive the name, the base address of shared memory, its path, and the
 * process' instance number, respectively. This information is supplied by the
 * master process when it execs worker processes. If the worker process
 * arguments are passed then main will call the procflow_exec() routine which
 * creates worker threadflows and flowops and executes the procflow's portion of
 * the workload model until completion. If worker process arguments are not
 * passed to the process, then it becomes the master process for a filebench
 * run. It initializes the various filebench components and either executes the
 * supplied workload file, or enters interactive mode.
 */
int
main(int argc, char *argv[])
{
	struct fbparams fbparams;
	int mode;

	/* parse_options() exits if detects wrong usage */
	mode = parse_options(argc, argv, &fbparams);

	if (mode == FB_MODE_HELP)
		usage_exit(0, NULL);

	if (mode == FB_MODE_CVARS)
		cvars_mode(&fbparams);

	init_common();

	if (mode == FB_MODE_MASTER)
		master_mode(&fbparams);

	if (mode == FB_MODE_WORKER)
		worker_mode(&fbparams);

	/* We should never reach this point */
	return 0;
}

/*
 * Converts a list of var_strings or ordinary strings to a single ordinary
 * string. It returns a pointer to the string (in malloc'd memory) if found,
 * or NULL otherwise.
 */
char *
parser_list2string(list_t *list)
{
	list_t *l;
	char *string;
	char *tmp;

	string = malloc(MAXPATHLEN);
	if (!string) {
		filebench_log(LOG_ERROR, "Failed to allocate memory");
		return NULL;
	}

	*string = 0;

	/* Format args */
	for (l = list; l != NULL; l = l->list_next) {

		char *lstr = avd_get_str(l->list_string);

		filebench_log(LOG_DEBUG_SCRIPT, "converting string '%s'", lstr);

		/* see if it is a random variable */
		if (l->list_integer) {
			fbint_t param_name;

			tmp = NULL;
			param_name = avd_get_int(l->list_integer);

			switch (param_name) {
			case FSS_TYPE:
				tmp = var_randvar_to_string(lstr,
				    RAND_PARAM_TYPE);
				break;

			case FSS_SRC:
				tmp = var_randvar_to_string(lstr,
				    RAND_PARAM_SRC);
				break;

			case FSS_SEED:
				tmp = var_randvar_to_string(lstr,
				    RAND_PARAM_SEED);
				break;

			case FSS_MIN:
				tmp = var_randvar_to_string(lstr,
				    RAND_PARAM_MIN);
				break;

			case FSS_MEAN:
				tmp = var_randvar_to_string(lstr,
				    RAND_PARAM_MEAN);
				break;

			case FSS_GAMMA:
				tmp = var_randvar_to_string(lstr,
				    RAND_PARAM_GAMMA);
				break;

			case FSS_ROUND:
				tmp = var_randvar_to_string(lstr,
				    RAND_PARAM_ROUND);
				break;
			}

			if (tmp) {
				(void) strcat(string, tmp);
				free(tmp);
			} else {
				(void) strcat(string, lstr);
			}
		} else {
			/* perhaps a normal variable? */
			if ((tmp = var_to_string(lstr)) != NULL) {
				(void) strcat(string, tmp);
				free(tmp);
			} else {
				(void) strcat(string, lstr);
			}
		}
	}

	return string;
}

/*
 * If the list just contains a single string starting with '$', then find
 * or create the named var and return the var's var_string component.
 * Otherwise, convert the list to a string, and allocate a var_string
 * containing a copy of that string. On failure either returns NULL
 * or shuts down the run.
 */
avd_t
parser_list2varstring(list_t *list)
{
	char *lstr = avd_get_str(list->list_string);

	/* Special case - variable name */
	if ((list->list_next == NULL) && (*lstr == '$'))
		return avd_var_alloc(lstr);

	return (avd_str_alloc(parser_list2string(list)));
}

/*
 * Looks for the var named in list_string of the first element of the
 * supplied list. If found, returns the var_val portion of the var in
 * an attribute value descriptor. If the var is not found, cannot be
 * allocated, the supplied list is NULL, or the list_string filed is
 * empty, returns NULL.
 */
avd_t
parser_list2avd(list_t *list)
{
	avd_t avd;
	char *lstr;

	if (list && ((lstr = avd_get_str(list->list_string)) != NULL)) {
		avd = avd_var_alloc(lstr);
		return (avd);
	}

	return (NULL);
}

/*
 * Sets the event generator rate from the attribute supplied with the
 * command. If the attribute doesn't exist the routine does nothing.
 */
static void
parser_eventgen(cmd_t *cmd)
{
	attr_t *attr;

	/* Get the rate from attribute */
	if ((attr = get_attr(cmd, FSA_RATE))) {
		if (attr->attr_avd) {
			eventgen_setrate(attr->attr_avd);
		}
	}
}

/*
 * Lists the fileset name, path name and average size for all defined
 * filesets.
 */
static void
parser_fileset_list(cmd_t *cmd)
{
	(void) fileset_iter(fileset_print);
}

/*
 * Lists the flowop name and instance number for all flowops.
 */
static void
parser_flowop_list(cmd_t *cmd)
{
	flowop_printall();
}

/*
 * Calls procflow_define() to allocate "instances" number of  procflow(s)
 * (processes) with the supplied name. The default number of instances is
 * one. An optional priority level attribute can be supplied and is stored in
 * pf_nice. Finally the routine loops through the list of inner commands, if
 * any, which are defines for threadflows, and passes them one at a time to
 * parser_thread_define() to allocate threadflow entities for the process(es).
 */
static void
parser_proc_define(cmd_t *cmd)
{
	procflow_t *procflow;
	char *name = NULL;
	attr_t *attr;
	avd_t var_instances;
	fbint_t instances;
	cmd_t *inner_cmd;

	attr = get_attr(cmd, FSA_NAME);
	if (attr)
		name = avd_get_str(attr->attr_avd);
	else {
		filebench_log(LOG_ERROR, "process specifies no name");
		filebench_shutdown(1);
	}

	attr = get_attr(cmd, FSA_INSTANCES);
	if (attr) {
		var_instances = attr->attr_avd;
		instances = avd_get_int(var_instances);
		filebench_log(LOG_DEBUG_IMPL,
		    "Setting instances = %llu", (u_longlong_t)instances);
	} else {
		filebench_log(LOG_DEBUG_IMPL,
		    "Defaulting to instances = 1");
		var_instances = avd_int_alloc(1);
		instances = 1;
	}

	procflow = procflow_define(name, var_instances);
	if (!procflow) {
		filebench_log(LOG_ERROR,
		    "Failed to instantiate %d %s process(es)\n",
		    instances, name);
		filebench_shutdown(1);
	}

	attr = get_attr(cmd, FSA_NICE);
	if (attr) {
		filebench_log(LOG_DEBUG_IMPL, "Setting pri = %llu",
			    (u_longlong_t)avd_get_int(attr->attr_avd));
		procflow->pf_nice = attr->attr_avd;
	} else
		procflow->pf_nice = avd_int_alloc(0);

	/* Create the list of threads for this process  */
	for (inner_cmd = cmd->cmd_list; inner_cmd;
	    	inner_cmd = inner_cmd->cmd_next)
		parser_thread_define(inner_cmd, procflow);
}

/*
 * Calls threadflow_define() to allocate "instances" number of  threadflow(s)
 * (threads) with the supplied name. The default number of instances is
 * one. Two other optional attributes may be supplied, one to set the memory
 * size, stored in tf_memsize, and to select the use of Interprocess Shared
 * Memory, which sets the THREADFLOW_USEISM flag in tf_attrs. Finally
 * the routine loops through the list of inner commands, if any, which are
 * defines for flowops, and passes them one at a time to
 * parser_flowop_define() to allocate flowop entities for the threadflows.
 */
static void
parser_thread_define(cmd_t *cmd, procflow_t *procflow)
{
	threadflow_t *threadflow, template;
	attr_t *attr;
	avd_t instances;
	cmd_t *inner_cmd;
	char *name = NULL;

	memset(&template, 0, sizeof (threadflow_t));

	attr = get_attr(cmd, FSA_NAME);
	if (attr)
		name = avd_get_str(attr->attr_avd);
	else {
		filebench_log(LOG_ERROR,
		    "thread in process %s specifies no name",
		    procflow->pf_name);
		filebench_shutdown(1);
	}

	attr = get_attr(cmd, FSA_INSTANCES);
	if (attr)
		instances = attr->attr_avd;
	else
		instances = avd_int_alloc(1);

	attr = get_attr(cmd, FSA_MEMSIZE);
	if (attr)
		template.tf_memsize = attr->attr_avd;
	else /* XXX: really, memsize zero is default?.. */
		template.tf_memsize = avd_int_alloc(0);
	
	attr = get_attr(cmd, FSA_IOPRIO);
	if (attr)
		template.tf_ioprio = attr->attr_avd;
	else /* XXX: really, ioprio is 8 by default?.. */
		template.tf_ioprio = avd_int_alloc(8);


	threadflow = threadflow_define(procflow, name, &template, instances);
	if (!threadflow) {
		filebench_log(LOG_ERROR,
		    "failed to instantiate thread\n");
		filebench_shutdown(1);
	}

	attr = get_attr(cmd, FSA_USEISM);
	if (attr)
		threadflow->tf_attrs |= THREADFLOW_USEISM;

	/* create the list of flowops */
	for (inner_cmd = cmd->cmd_list; inner_cmd;
	    inner_cmd = inner_cmd->cmd_next)
		parser_flowop_define(inner_cmd, threadflow,
		    &threadflow->tf_thrd_fops, FLOW_MASTER);
}

/*
 * Fills in the attributes for a newly allocated flowop
 */
static void
parser_flowop_get_attrs(cmd_t *cmd, flowop_t *flowop)
{
	attr_t *attr;

	/* Get the filename from attribute */
	if ((attr = get_attr(cmd, FSA_FILENAME))) {
		flowop->fo_filename = attr->attr_avd;
		if (flowop->fo_filename == NULL) {
			filebench_log(LOG_ERROR,
			    "define flowop: no filename specfied");
			filebench_shutdown(1);
		}
	} else {
		/* no filename attribute specified */
		flowop->fo_filename = NULL;
	}

	/* Get the iosize of the op */
	if ((attr = get_attr(cmd, FSA_IOSIZE)))
		flowop->fo_iosize = attr->attr_avd;
	else
		flowop->fo_iosize = avd_int_alloc(0);

	/* Get the working set size of the op */
	if ((attr = get_attr(cmd, FSA_WSS)))
		flowop->fo_wss = attr->attr_avd;
	else
		flowop->fo_wss = avd_int_alloc(0);

	/* Random I/O? */
	if ((attr = get_attr(cmd, FSA_RANDOM)))
		flowop->fo_random = attr->attr_avd;
	else
		flowop->fo_random = avd_bool_alloc(FALSE);

	/* Sync I/O? */
	if ((attr = get_attr(cmd, FSA_DSYNC)))
		flowop->fo_dsync = attr->attr_avd;
	else
		flowop->fo_dsync = avd_bool_alloc(FALSE);

	/* Target, for wakeup etc */
	if ((attr = get_attr(cmd, FSA_TARGET)))
		(void) strcpy(flowop->fo_targetname,
		    avd_get_str(attr->attr_avd));

	/* Value */
	if ((attr = get_attr(cmd, FSA_VALUE)))
		flowop->fo_value = attr->attr_avd;
	else
		flowop->fo_value = avd_int_alloc(0);

	/* FD */
	if ((attr = get_attr(cmd, FSA_FD))) {
		flowop->fo_fdnumber = avd_get_int(attr->attr_avd);
		if (flowop->fo_filename != NULL)
			filebench_log(LOG_DEBUG_SCRIPT, "It is not "
			    "advisable to supply both an fd number "
			    "and a fileset name in most cases");
	}

	/* Rotatefd? */
	if ((attr = get_attr(cmd, FSA_ROTATEFD)))
		flowop->fo_rotatefd = attr->attr_avd;
	else
		flowop->fo_rotatefd = avd_bool_alloc(FALSE);

	/* SRC FD, for copies etc... */
	if ((attr = get_attr(cmd, FSA_SRCFD)))
		flowop->fo_srcfdnumber = avd_get_int(attr->attr_avd);

	/* Blocking operation? */
	if ((attr = get_attr(cmd, FSA_BLOCKING)))
		flowop->fo_blocking = attr->attr_avd;
	else
		flowop->fo_blocking = avd_bool_alloc(FALSE);

	/* Direct I/O Operation */
	if ((attr = get_attr(cmd, FSA_DIRECTIO)))
		flowop->fo_directio = attr->attr_avd;
	else
		flowop->fo_directio = avd_bool_alloc(FALSE);

	/* Highwater mark */
	if ((attr = get_attr(cmd, FSA_HIGHWATER))) {
		flowop->fo_highwater = attr->attr_avd;
		if (AVD_IS_RANDOM(attr->attr_avd)) {
			filebench_log(LOG_ERROR,
			    "define flowop: Highwater attr cannot be random");
			filebench_shutdown(1);
		}
	} else {
		flowop->fo_highwater = avd_int_alloc(1);
	}

	/* find file or leaf directory by index number */
	if ((attr = get_attr(cmd, FSA_INDEXED)))
		flowop->fo_fileindex = attr->attr_avd;
	else
		flowop->fo_fileindex = NULL;

	/* Read Ahead Diable */
	if ((attr = get_attr(cmd, FSA_NOREADAHEAD)))
		flowop->fo_noreadahead = attr->attr_avd;
	else
		flowop->fo_noreadahead = avd_bool_alloc(FALSE);


}

/*
 * defines the FLOW_MASTER flowops within a FLOW_MASTER instance of
 * a composit flowop. Default attributes from the FLOW_INNER_DEF instances
 * of the composit flowop's inner flowops are used if set. Otherwise
 * default attributes from the FLOW_MASTER instance of the composit flowop
 * are used, which may include defaults from the original FLOW_DEFINITION
 * of the composit flowop.
 */
static void
parser_inner_flowop_define(threadflow_t *thread, flowop_t *comp0_flow,
			   flowop_t *comp_mstr_flow)
{
	flowop_t *inner_flowtype, *inner_flowop;

	/* follow flowop list, creating composit names */
	inner_flowtype = comp0_flow->fo_comp_fops;
	comp_mstr_flow->fo_comp_fops = NULL;

	while (inner_flowtype) {
		char fullname[MAXPATHLEN];

		/* create composite_name.name for new flowop */
		snprintf(fullname, MAXPATHLEN, "%s.%s",
		    comp_mstr_flow->fo_name, inner_flowtype->fo_name);

		if ((inner_flowop = flowop_define(thread, fullname,
		    inner_flowtype, &comp_mstr_flow->fo_comp_fops,
		    FLOW_MASTER, 0)) == NULL) {
			filebench_log(LOG_ERROR,
			    "define flowop: Failed to instantiate flowop %s\n",
			    fullname);
			filebench_shutdown(1);
		}

		/* if applicable, update filename attribute */
		if (inner_flowop->fo_filename) {
			char *name;

			/* fix up avd_t */
			avd_update(&inner_flowop->fo_filename,
			    comp_mstr_flow->fo_lvar_list);

			/* see if ready to get the file or fileset */
			name = avd_get_str(inner_flowop->fo_filename);
			if (name) {

				inner_flowop->fo_fileset = fileset_find(name);

				if (inner_flowop->fo_fileset == NULL) {
					filebench_log(LOG_ERROR,
					    "inr flowop %s: file %s not found",
					    inner_flowop->fo_name, name);
					filebench_shutdown(1);
				}
			}
		}

		/* update attributes from local variables */
		avd_update(&inner_flowop->fo_iters,
		    comp_mstr_flow->fo_lvar_list);

		/* if the inner flowop is a composit flowop, recurse */
		if (inner_flowtype->fo_type == FLOW_TYPE_COMPOSITE) {
			var_t *newlvar, *proto_lvars, *lvar_ptr;

			proto_lvars = inner_flowop->fo_lvar_list;
			inner_flowop->fo_lvar_list = 0;

			for (lvar_ptr = inner_flowtype->fo_lvar_list; lvar_ptr;
			    lvar_ptr = lvar_ptr->var_next) {

				if ((newlvar = var_lvar_alloc_local(
				    lvar_ptr->var_name)) != NULL) {

					add_lvar_to_list(newlvar,
					    &inner_flowop->fo_lvar_list);

					var_update_comp_lvars(newlvar,
					    proto_lvars,
					    comp_mstr_flow->fo_lvar_list);
				}
			}

			parser_inner_flowop_define(thread,
			    inner_flowtype,
			    inner_flowop);

			inner_flowtype = inner_flowtype->fo_exec_next;
			continue;
		}

		avd_update(&inner_flowop->fo_iosize,
		    comp_mstr_flow->fo_lvar_list);
		avd_update(&inner_flowop->fo_wss,
		    comp_mstr_flow->fo_lvar_list);
		avd_update(&inner_flowop->fo_iters,
		    comp_mstr_flow->fo_lvar_list);
		avd_update(&inner_flowop->fo_value,
		    comp_mstr_flow->fo_lvar_list);
		avd_update(&inner_flowop->fo_random,
		    comp_mstr_flow->fo_lvar_list);
		avd_update(&inner_flowop->fo_dsync,
		    comp_mstr_flow->fo_lvar_list);
		avd_update(&inner_flowop->fo_rotatefd,
		    comp_mstr_flow->fo_lvar_list);
		avd_update(&inner_flowop->fo_blocking,
		    comp_mstr_flow->fo_lvar_list);
		avd_update(&inner_flowop->fo_directio,
		    comp_mstr_flow->fo_lvar_list);
		avd_update(&inner_flowop->fo_highwater,
		    comp_mstr_flow->fo_lvar_list);

		inner_flowtype = inner_flowtype->fo_exec_next;
	}
}

/*
 * Calls flowop_define() to allocate a flowop with the supplied name.
 * The allocated flowop inherits attributes from a base flowop of the
 * same type.  If the new flowop has a file or fileset attribute specified,
 * it must specify a defined fileobj or fileset or an error will be logged.
 * The new flowop may  also have the following attributes set by
 * the program:
 *  - file size (fo_iosize)
 *  - working set size (fo_wss)
 *  - do random io (fo_random)
 *  - do synchronous io (fo_dsync)
 *  - perform each operation multiple times before advancing (fo_iter)
 *  - target name (fo_targetname)
 *  - An integer value (fo_value)
 *  - a file descriptor (fo_fd)
 *  - specify to rotate file descriptors (fo_rotatefd)
 *  - a source fd (fo_srcfdnumber)
 *  - specify a blocking operation (fo_blocking)
 *  - specify a highwater mark (fo_highwater)
 *
 * After all the supplied attributes are stored in their respective locations
 * in the flowop object, the flowop's init function is called. No errors are
 * returned, but the filebench run will be terminated if the flowtype is not
 * specified, a name for the new flowop is not supplied, the flowop_define
 * call fails, or a file or fileset name is supplied but the corresponding
 * fileobj or fileset cannot be located.
 */
static void
parser_flowop_define(cmd_t *cmd, threadflow_t *thread,
    flowop_t **flowoplist_hdp, int category)
{
	flowop_t *flowop, *flowop_type;
	char *type = (char *)cmd->cmd_name;
	char *name = NULL;
	attr_t *attr;

	/* Get the inherited flowop */
	flowop_type = flowop_find(type);
	if (flowop_type == NULL) {
		filebench_log(LOG_ERROR,
		    "define flowop: flowop type %s not found",
		    type);
		filebench_shutdown(1);
	}

	/* Get the name of the flowop */
	if ((attr = get_attr(cmd, FSA_NAME))) {
		name = avd_get_str(attr->attr_avd);
	} else {
		filebench_log(LOG_ERROR,
		    "define flowop: flowop %s specifies no name",
		    flowop_type->fo_name);
		filebench_shutdown(1);
	}

	if ((flowop = flowop_define(thread, name,
	    flowop_type, flowoplist_hdp, category, 0)) == NULL) {
		filebench_log(LOG_ERROR,
		    "define flowop: Failed to instantiate flowop %s\n",
		    cmd->cmd_name);
		filebench_shutdown(1);
	}

	/* Iterations */
	if ((attr = get_attr(cmd, FSA_ITERS)))
		flowop->fo_iters = attr->attr_avd;
	else
		flowop->fo_iters = avd_int_alloc(1);


	/* if this is a use of a composit flowop, create inner FLOW MASTERS */
	if (flowop_type->fo_type == FLOW_TYPE_COMPOSITE) {
		get_attr_lvars(cmd, flowop);
		if (category == FLOW_MASTER)
			parser_inner_flowop_define(thread,
			    flowop_type, flowop);
	}
	else {
		parser_flowop_get_attrs(cmd, flowop);
	}
}

static void
parser_composite_flowop_define(cmd_t *cmd)
{
	flowop_t *flowop;
	cmd_t *inner_cmd;
	char *name = NULL;
	attr_t *attr;

	/* Get the name of the flowop */
	if ((attr = get_attr(cmd, FSA_NAME))) {
		name = avd_get_str(attr->attr_avd);
	} else {
		filebench_log(LOG_ERROR,
		    "define flowop: Composit flowop specifies no name");

		filebench_shutdown(1);
	}

	if ((flowop = flowop_new_composite_define(name)) == NULL) {
		filebench_log(LOG_ERROR,
		    "define flowop: Failed to instantiate flowop %s\n",
		    cmd->cmd_name);
		filebench_shutdown(1);
	}

	/* place any local var_t variables on the flowop's local list */
	get_attr_lvars(cmd, flowop);

	/* Iterations */
	if ((attr = get_attr(cmd, FSA_ITERS)))
		flowop->fo_iters = attr->attr_avd;
	else
		flowop->fo_iters = avd_int_alloc(1);

	/* define inner flowops */
	for (inner_cmd = cmd->cmd_list; inner_cmd != NULL;
	    inner_cmd = inner_cmd->cmd_next) {
		parser_flowop_define(inner_cmd, NULL,
		    &flowop->fo_comp_fops, FLOW_INNER_DEF);
	}
}


/*
 * First, we verify that mandatory attributes - name and path - are specified.
 * Then allocate a fileset structure and setup its fields. Notice, at this
 * point we should not verify if AVD type makes sense, because AVD type can
 * change as variables are set to other values after fileset definition.
*/
static fileset_t *
parser_fileset_define_common(cmd_t *cmd)
{
	fileset_t *fileset;
	attr_t *attr;
	avd_t name;
	avd_t path;

	attr = get_attr(cmd, FSA_NAME);
	if (attr)
		name = attr->attr_avd;
	else {
		filebench_log(LOG_ERROR, "file[set] specifies no name");
		return NULL;
	}

	attr = get_attr(cmd, FSA_PATH);
	if (attr)
		path = attr->attr_avd;
	else {
		filebench_log(LOG_ERROR, "file[set] specifies no path");
		return NULL;
	}

	fileset = fileset_define(name, path);
	if (!fileset) {
		filebench_log(LOG_ERROR, "failed to instantiate file[set] %s\n",
		    		avd_get_str(name));
		return NULL;
	}

	attr = get_attr(cmd, FSA_PREALLOC);
	if (attr)
		fileset->fs_preallocpercent = attr->attr_avd;
	else
		fileset->fs_preallocpercent = avd_int_alloc(0);

	attr = get_attr(cmd, FSA_PARALLOC);
	if (attr)
		fileset->fs_paralloc = attr->attr_avd;
	else
		fileset->fs_paralloc = avd_bool_alloc(FALSE);

	attr = get_attr(cmd, FSA_READONLY);
	if (attr)
		fileset->fs_readonly = attr->attr_avd;
	else
		fileset->fs_readonly = avd_bool_alloc(FALSE);

	attr = get_attr(cmd, FSA_WRITEONLY);
	if (attr)
		fileset->fs_writeonly = attr->attr_avd;
	else
		fileset->fs_writeonly = avd_bool_alloc(FALSE);

	attr = get_attr(cmd, FSA_REUSE);
	if (attr)
		fileset->fs_reuse = attr->attr_avd;
	else
		fileset->fs_reuse = avd_bool_alloc(FALSE);

	/* Should we check for files actual existance? */
	attr = get_attr(cmd, FSA_TRUSTTREE);
	if (attr )
		fileset->fs_trust_tree = attr->attr_avd;
	else
		fileset->fs_trust_tree = avd_bool_alloc(FALSE);

	attr = get_attr(cmd, FSA_SIZE);
	if (attr)
		fileset->fs_size = attr->attr_avd;
	else
		fileset->fs_size = avd_int_alloc(1024);

	return fileset;
}

static void
parser_file_define(cmd_t *cmd)
{
	fileset_t *fileset;

	fileset = parser_fileset_define_common(cmd);
	if (!fileset) {
		filebench_log(LOG_ERROR, "failed to instantiate file");
		filebench_shutdown(1);
		return;
	}

	/* fileset is emulating a single file */
	fileset->fs_attrs = FILESET_IS_FILE;
	fileset->fs_entries = avd_int_alloc(1);
	/* Set the mean dir width to more than 1 */
	fileset->fs_dirwidth = avd_int_alloc(10);
	fileset->fs_dirgamma = avd_int_alloc(0);
	fileset->fs_leafdirs = avd_int_alloc(0);
}

static void
parser_fileset_define(cmd_t *cmd)
{
	fileset_t *fileset;
	attr_t *attr;

	fileset = parser_fileset_define_common(cmd);
	if (!fileset) {
		filebench_log(LOG_ERROR, "failed to instantiate fileset");
		filebench_shutdown(1);
		return;
	}

	attr = get_attr(cmd, FSA_ENTRIES);
	if (attr)
		fileset->fs_entries = attr->attr_avd;
	else
		fileset->fs_entries = avd_int_alloc(0);

	attr = get_attr(cmd, FSA_LEAFDIRS);
	if (attr)
		fileset->fs_leafdirs = attr->attr_avd;
	else
		fileset->fs_leafdirs = avd_int_alloc(0);

	attr = get_attr(cmd, FSA_DIRWIDTH);
	if (attr)
		fileset->fs_dirwidth = attr->attr_avd;
	else {
		filebench_log(LOG_ERROR, "Fileset has no directory width");
		fileset->fs_dirwidth = avd_int_alloc(0);
	}

	attr = get_attr(cmd, FSA_DIRDEPTHRV);
	if (attr)
		fileset->fs_dirdepthrv = attr->attr_avd;
	else
		fileset->fs_dirdepthrv = NULL;

	attr = get_attr(cmd, FSA_DIRGAMMA);
	if (attr)
		fileset->fs_dirgamma = attr->attr_avd;
	else
		fileset->fs_dirgamma = avd_int_alloc(1500);
}

/*
 * Calls fileset_createsets() to populate all filesets and create all
 * associated, initially existant,  files and subdirectories.
 * If errors are encountered, calls filebench_shutdown() to exit Filebench.
 */
static void
parser_fileset_create(cmd_t *cmd)
{
	int ret;

	ret = fileset_createsets(); 
	if (ret) {
		filebench_log(LOG_ERROR, "Failed to create filesets");
		filebench_shutdown(1);
	}
}

/*
 * Ends filebench run after first destoring any interprocess
 * shared memory. The call to filebench_shutdown()
 * also causes filebench to exit.
 */
static void
parser_filebench_shutdown(cmd_t *cmd)
{
	int f_abort = filebench_shm->shm_f_abort;

	ipc_fini();

	if (f_abort == FILEBENCH_ABORT_ERROR)
		filebench_shutdown(1);
	else
		filebench_shutdown(0);
}

/*
 * This is used for timing runs. Pauses the master thread in one second
 * intervals until the supplied ptime runs out or the f_abort flag
 * is raised. If given a time of zero, it will pause until f_abort is raised.
 */
static int
parser_pause(int ptime)
{
	int timeslept = 0;

	if (ptime) {
		while (timeslept < ptime) {
			(void) sleep(1);
			timeslept++;
			if (filebench_shm->shm_f_abort)
				break;
		}
	} else {
		/* initial runtime of 0 means run till abort */
		/* CONSTCOND */
		while (1) {
			(void) sleep(1);
			timeslept++;
			if (filebench_shm->shm_f_abort)
				break;
		}
	}

	return (timeslept);
}

#define TIMED_RUNTIME_DEFAULT 60 /* In seconds */
#define PERIOD_DEFAULT 10 /* In seconds */

/*
 * Do a file bench run. Calls routines to create file sets, files, and
 * processes. It resets the statistics counters, then sleeps for the runtime
 * passed as an argument to it on the command line in 1 second increments.
 * When it is finished sleeping, it collects a snapshot of the statistics
 * and ends the run.
 */
static void
parser_run(cmd_t *cmd)
{
	int runtime;
	int timeslept;

	runtime = cmd->cmd_qty;

	parser_fileset_create(cmd);
	proc_create();

	/* check for startup errors */
	if (filebench_shm->shm_f_abort)
		return;

	filebench_log(LOG_INFO, "Running...");
	stats_clear();

	/* If it is a timed mode and timeout is not specified use default */
	if (filebench_shm->shm_rmode == FILEBENCH_MODE_TIMEOUT && !runtime)
		runtime = TIMED_RUNTIME_DEFAULT;

	timeslept = parser_pause(runtime);

	filebench_log(LOG_INFO, "Run took %d seconds...", timeslept);
	stats_snap();
	proc_shutdown();
	parser_filebench_shutdown((cmd_t *)0);
}

static void
parser_psrun(cmd_t *cmd)
{
	int runtime;
	int period;
	int timeslept = 0;
	int reset_stats = 0;

	runtime = cmd->cmd_qty;

	/*
	 * If period is negative then
	 * we want to reset statistics
	 * at the end of the every period
	 */
	if (cmd->cmd_qty1 < 0) {
		period = -cmd->cmd_qty1;
		reset_stats = 1;
	} else if (cmd->cmd_qty1 > 0) {
		period = cmd->cmd_qty1;
		reset_stats = 0;
	} else { /* (cmd->cmd_qty1) == 0 */
		period = PERIOD_DEFAULT;
		reset_stats = 0;
	}

	parser_fileset_create(cmd);
	proc_create();

	/* check for startup errors */
	if (filebench_shm->shm_f_abort)
		return;

	filebench_log(LOG_INFO, "Running...");
	stats_clear();

	/* If it is a timed mode and timeout is not specified use default */
	if (filebench_shm->shm_rmode == FILEBENCH_MODE_TIMEOUT && !runtime)
		runtime = TIMED_RUNTIME_DEFAULT;

	while (1) {
		/* sleep the remaining time if a period is smaller */
		if (filebench_shm->shm_rmode == FILEBENCH_MODE_TIMEOUT)
			period = period > (runtime - timeslept) ?
						(runtime - timeslept) : period;

		timeslept += parser_pause(period);

		if (filebench_shm->shm_f_abort)
			break;

		if (filebench_shm->shm_rmode == FILEBENCH_MODE_TIMEOUT &&
							timeslept >= runtime)
			break;

		stats_snap();

		if (reset_stats)
			stats_clear();
	}

	filebench_log(LOG_INFO, "Run took %d seconds...", timeslept);
	stats_snap();
	proc_shutdown();
	parser_filebench_shutdown((cmd_t *)0);
}

/*
 * Similar to parser_run, but gets the sleep time from a variable
 * whose name is supplied as an argument to the command.
 */
static void
parser_run_variable(cmd_t *cmd)
{
	avd_t integer = avd_var_alloc(cmd->cmd_tgt1);
	int runtime;
	int timeslept;

	if (integer == NULL) {
		filebench_log(LOG_ERROR, "Unknown variable %s",
		cmd->cmd_tgt1);
		return;
	}

	runtime = avd_get_int(integer);

	parser_fileset_create(cmd);
	proc_create();

	/* check for startup errors */
	if (filebench_shm->shm_f_abort)
		return;

	filebench_log(LOG_INFO, "Running...");
	stats_clear();

	/* If it is a timed mode and timeout is not specified use default */
	if (filebench_shm->shm_rmode == FILEBENCH_MODE_TIMEOUT && !runtime)
		runtime = TIMED_RUNTIME_DEFAULT;

	timeslept = parser_pause(runtime);

	filebench_log(LOG_INFO, "Run took %d seconds...", timeslept);
	stats_snap();
	proc_shutdown();
	parser_filebench_shutdown((cmd_t *)0);
}

/*
 * Establishes multi-client synchronization socket with synch server.
 */
static void
parser_enable_mc(cmd_t *cmd)
{
	attr_t *attr;
	char *master;
	char *client;

	if ((attr = get_attr(cmd, FSA_MASTER))) {
		master = avd_get_str(attr->attr_avd);
	} else {
		filebench_log(LOG_ERROR,
		    "enable multi: no master specified");
		return;
	}

	if ((attr = get_attr(cmd, FSA_CLIENT))) {
		client = avd_get_str(attr->attr_avd);
	} else {
		filebench_log(LOG_ERROR,
		    "enable multi: no client specified");
		return;
	}

	mc_sync_open_sock(master, 8001, client);
}

/*
 * Exchanges multi-client synchronization message with synch server.
 */
static void
parser_domultisync(cmd_t *cmd)
{
	attr_t *attr;
	fbint_t value;

	if ((attr = get_attr(cmd, FSA_VALUE)))
		value = avd_get_int(attr->attr_avd);
	else
		value = 1;

	mc_sync_synchronize((int)value);
}

/*
 * Sleeps for cmd->cmd_qty seconds, one second at a time.
 */
static void
parser_sleep(cmd_t *cmd)
{
	int sleeptime;
	int timeslept;

	/* check for startup errors */
	if (filebench_shm->shm_f_abort)
		return;

	sleeptime = cmd->cmd_qty;
	filebench_log(LOG_INFO, "Sleeping...");

	timeslept = parser_pause(sleeptime);

	filebench_log(LOG_INFO, "Slept for %d seconds...", timeslept);
}

/*
 * Same as parser_sleep, except the sleep time is obtained from a variable
 * whose name is passed to it as an argument on the command line.
 */
static void
parser_sleep_variable(cmd_t *cmd)
{
	avd_t integer = avd_var_alloc(cmd->cmd_tgt1);
	int sleeptime;
	int timeslept;

	if (integer == NULL) {
		filebench_log(LOG_ERROR, "Unknown variable %s",
		cmd->cmd_tgt1);
		return;
	}

	sleeptime = avd_get_int(integer);

	/* check for startup errors */
	if (filebench_shm->shm_f_abort)
		return;

	filebench_log(LOG_INFO, "Running...");

	timeslept = parser_pause(sleeptime);

	filebench_log(LOG_INFO, "Run took %d seconds...", timeslept);
}

/*
 * Launches a shell to run the unix command supplied in the argument.
 * The command should be enclosed in quotes, as in:
 * 	system "rm xyz"
 * which would run the "rm" utility to delete the file "xyz".
 */
static void
parser_system(cmd_t *cmd)
{
	char *string;

	if (!cmd->cmd_param_list)
		return;

	string = parser_list2string(cmd->cmd_param_list);

	if (!string)
		return;

	filebench_log(LOG_VERBOSE, "Running '%s'", string);

	if (system(string) < 0) {
		filebench_log(LOG_ERROR,
		    "system exec failed: %s",
		    strerror(errno));
		free(string);
		filebench_shutdown(1);
	}

	free(string);
}

/*
 * Echos string supplied with command to the log.
 */
static void
parser_echo(cmd_t *cmd)
{
	char *string;

	if (cmd->cmd_param_list == NULL)
		return;

	string = parser_list2string(cmd->cmd_param_list);

	if (string == NULL)
		return;

	filebench_log(LOG_INFO, "%s", string);
}

/*
 * Prints out the version of Filebench.
 */
static void
parser_version(cmd_t *cmd)
{
	filebench_log(LOG_INFO, "Filebench Version: %s", FILEBENCH_VERSION);
}

static void
parser_enable_lathist(cmd_t *cmd)
{
	filebench_shm->lathist_enabled = 1;
	filebench_log(LOG_INFO, "Latency histogram enabled");
}

/*
 * define a random variable and initialize the distribution parameters
 */
static void
parser_var_assign_random(char *name, cmd_t *cmd)
{
	randdist_t	*rndp;
	attr_t		*attr;

	rndp = randdist_alloc();
	if (!rndp) {
		filebench_log(LOG_ERROR,
			"failed to alloc random distribution object\n");
		return;
	}

	rndp->rnd_type = 0;

	/* Get the source of the random numbers */
	if ((attr = get_attr(cmd, FSA_RANDSRC))) {
		int randsrc = (int)avd_get_int(attr->attr_avd);

		switch (randsrc) {
		case FSV_URAND:
			rndp->rnd_type |= RAND_SRC_URANDOM;
			break;
		case FSV_RAND48:
			rndp->rnd_type |= RAND_SRC_GENERATOR;
			break;
		}
	} else {
		/* default to rand48 random number generator */
		rndp->rnd_type |= RAND_SRC_GENERATOR;
	}

	/* Get the min value of the random distribution */
	if ((attr = get_attr(cmd, FSA_MIN)))
		rndp->rnd_min = attr->attr_avd;
	else
		rndp->rnd_min = avd_int_alloc(0);

	/* Get the roundoff value for the random distribution */
	if ((attr = get_attr(cmd, FSA_ROUND)))
		rndp->rnd_round = attr->attr_avd;
	else
		rndp->rnd_round = avd_int_alloc(0);

	/* Get a tablular probablility distribution if there is one */
	if ((attr = get_attr(cmd, FSA_RANDTABLE))) {
		rndp->rnd_probtabs = (probtabent_t *)(attr->attr_obj);
		rndp->rnd_type |= RAND_TYPE_TABLE;

		/* no need for the rest of the attributes */
		goto randdist_init;
	} else {
		rndp->rnd_probtabs = NULL;
	}

	/* Get the type for the random variable */
	if ((attr = get_attr(cmd, FSA_TYPE))) {
		int disttype = (int)avd_get_int(attr->attr_avd);

		switch (disttype) {
		case FSV_RANDUNI:
			rndp->rnd_type |= RAND_TYPE_UNIFORM;
			break;
		case FSA_RANDGAMMA:
			rndp->rnd_type |= RAND_TYPE_GAMMA;
			break;
		case FSV_RANDTAB:
			filebench_log(LOG_ERROR,
			    "Table distribution type without prob table");
			break;
		}
	} else {
		/* default to gamma distribution type */
		rndp->rnd_type |= RAND_TYPE_GAMMA;
	}

	/* Get the seed for the random variable */
	if ((attr = get_attr(cmd, FSA_RANDSEED)))
		rndp->rnd_seed = attr->attr_avd;
	else
		rndp->rnd_seed = avd_int_alloc(0);

	/* Get the gamma value of the random distribution */
	if ((attr = get_attr(cmd, FSA_RANDGAMMA)))
		rndp->rnd_gamma = attr->attr_avd;
	else
		rndp->rnd_gamma = avd_int_alloc(1500);

	/* Get the mean value of the random distribution */
	if ((attr = get_attr(cmd, FSA_RANDMEAN))) {
		rndp->rnd_mean = attr->attr_avd;
	} else if ((rndp->rnd_type & RAND_TYPE_MASK) == RAND_TYPE_GAMMA) {
		rndp->rnd_mean = NULL;
	} else {
		rndp->rnd_mean = avd_int_alloc(0);
	}

	var_assign_random(name, rndp);

randdist_init:
	randdist_init(rndp);
}

/*
 * alloc_cmd() allocates the required resources for a cmd_t. On failure, a
 * filebench_log is issued and NULL is returned.
 */
static cmd_t *
alloc_cmd(void)
{
	cmd_t *cmd;

	cmd = malloc(sizeof(*cmd));
	if (!cmd) {
		filebench_log(LOG_ERROR, "Alloc cmd failed");
		return NULL;
	}

	memset(cmd, 0, sizeof (cmd_t));

	return cmd;
}

/*
 * Allocates an attr_t structure and zeros it. Returns NULL on failure, or
 * a pointer to the attr_t.
 */
static attr_t *
alloc_attr(void)
{
	attr_t *attr;

	attr = malloc(sizeof(*attr));
	if (!attr)
		return (NULL);

	(void) memset(attr, 0, sizeof(*attr));

	return (attr);
}

/*
 * Allocates a probtabent_t structure and zeros it. Returns NULL on failure, or
 * a pointer to the probtabent_t.
 */
static probtabent_t *
alloc_probtabent(void)
{
	probtabent_t *rte;

	if ((rte = malloc(sizeof (probtabent_t))) == NULL) {
		return (NULL);
	}

	(void) memset(rte, 0, sizeof (probtabent_t));
	return (rte);
}

/*
 * Allocates an attr_t structure and puts the supplied var_t into
 * its attr_avd location, and sets its name to FSA_LVAR_ASSIGN
 */
static attr_t *
alloc_lvar_attr(var_t *var)
{
	attr_t *attr;

	if ((attr = alloc_attr()) == NULL)
		return (NULL);

	attr->attr_name = FSA_LVAR_ASSIGN;
	attr->attr_avd = (avd_t)var;

	return (attr);
}

/*
 * Searches the attribute list for the command for the named attribute type.
 * The attribute list is created by the parser from the list of attributes
 * supplied with certain commands, such as the define and flowop commands.
 * Returns a pointer to the attribute structure if the named attribute is
 * found, otherwise returns NULL. If the attribute includes a parameter list,
 * the list is converted to a string and stored in the attr_avd field of
 * the returned attr_t struct.
 */
static attr_t *
get_attr(cmd_t *cmd, int64_t name)
{
	attr_t *attr;
	attr_t *rtn = NULL;

	for (attr = cmd->cmd_attr_list; attr != NULL;
	    attr = attr->attr_next) {

		filebench_log(LOG_DEBUG_IMPL,
		    "attr %d = %d %llx?",
		    attr->attr_name,
		    name,
		    attr->attr_avd);

		if (attr->attr_name == name)
			rtn = attr;
	}

	return rtn;
}

/*
 * removes the newly allocated local var from the shared local var
 * list, then puts it at the head of the private local var list
 * supplied as the second argument.
 */
static void
add_lvar_to_list(var_t *newlvar, var_t **lvar_list)
{
	var_t *prev;

	/* remove from shared local list, if there */
	if (newlvar == filebench_shm->shm_var_loc_list) {
		/* on top of list, just grap */
		filebench_shm->shm_var_loc_list = newlvar->var_next;
	} else {
		/* find newvar on list and remove */
		for (prev = filebench_shm->shm_var_loc_list; prev;
		    prev = prev->var_next) {
			if (prev->var_next == newlvar)
				prev->var_next = newlvar->var_next;
		}
	}
	newlvar->var_next = NULL;

	/* add to flowop private local list at head */
	newlvar->var_next = *lvar_list;
	*lvar_list = newlvar;
}

/*
 * Searches the attribute list for the command for any allocated local
 * variables. The attribute list is created by the parser from the list of
 * attributes supplied with certain commands, such as the define and flowop
 * commands. Places all found local vars onto the flowop's local variable
 * list.
 */
static void
get_attr_lvars(cmd_t *cmd, flowop_t *flowop)
{
	attr_t *attr;
	var_t *orig_lvar_list;

	/* save the local var list */
	orig_lvar_list = flowop->fo_lvar_list;

	for (attr = cmd->cmd_attr_list; attr != NULL;
	    attr = attr->attr_next) {

		if (attr->attr_name == FSA_LVAR_ASSIGN) {
			var_t *newvar;

			if ((newvar = (var_t *)attr->attr_avd) == NULL)
				continue;

			add_lvar_to_list(newvar, &flowop->fo_lvar_list);
			var_update_comp_lvars(newvar, orig_lvar_list, NULL);
		}
	}
}

/*
 * Allocates memory for a list_t structure, initializes it to zero, and
 * returns a pointer to it. On failure, returns NULL.
 */
static list_t *
alloc_list()
{
	list_t *list;

	if ((list = malloc(sizeof (list_t))) == NULL) {
		return (NULL);
	}

	(void) memset(list, 0, sizeof (list_t));
	return (list);
}

/*
 * Define a custom variable and validate its parameters.
 * TODO: Clean up state when things go wrong.
 */
static void
parser_var_assign_custom(char *name, cmd_t *cmd)
{
	cvar_t	*cvar;
	attr_t	*attr;
	char	*type;
	char	*parameters;
	int 	ret;

	attr = get_attr(cmd, FSA_TYPE);
	if (attr)
		type = avd_get_str(attr->attr_avd);
	else {
		filebench_log(LOG_ERROR, "define cvar: no type specified");
		filebench_shutdown(1);
		return;
	}

	cvar = cvar_alloc();
	if (!cvar) {
		filebench_log(LOG_ERROR, "Failed to allocate custom variable");
		filebench_shutdown(1);
		return;
	}

	/* Initialize the custom variable mutex. */
	(void) pthread_mutex_init(&cvar->cvar_lock,
			ipc_mutexattr(IPC_MUTEX_NORMAL));

	/* Get the min, max and round values for the custom variable. */
	if ((attr = get_attr(cmd, FSA_MIN)))
		cvar->min = avd_get_dbl(attr->attr_avd);
	else
		cvar->min = DBL_MIN;

	if ((attr = get_attr(cmd, FSA_MAX)))
		cvar->max = avd_get_dbl(attr->attr_avd);
	else
		cvar->max = DBL_MAX;

	if ((attr = get_attr(cmd, FSA_ROUND)))
		cvar->round = avd_get_dbl(attr->attr_avd);
	else
		cvar->round = 0;

	attr = get_attr(cmd, FSA_PARAMETERS);
	if (attr)
		parameters = avd_get_str(attr->attr_avd);
	else
		parameters = NULL;

	ret = init_cvar_handle(cvar, type, parameters);
	if (ret) {
		filebench_log(LOG_FATAL, "define cvar: failed for custom variable %s",
		    name);
		filebench_shutdown(1);
		return;
	}

	var_assign_custom(name, cvar);
}
