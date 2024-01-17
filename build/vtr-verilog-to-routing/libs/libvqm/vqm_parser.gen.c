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
#line 18 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"


#define CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <stdint.h>
//#include <crtdbg.h>
#ifndef __APPLE__
#include <malloc.h>
#endif
#include <string.h>
#include <assert.h>
#include "vqm_dll.h"
#include "vqm_common.h"

extern int yylex(void);

#line 88 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"

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

#include "vqm_parser.gen.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_MODULE = 3,               /* TOKEN_MODULE  */
  YYSYMBOL_TOKEN_ENDMODULE = 4,            /* TOKEN_ENDMODULE  */
  YYSYMBOL_TOKEN_DEFPARAM = 5,             /* TOKEN_DEFPARAM  */
  YYSYMBOL_TOKEN_ASSIGN = 6,               /* TOKEN_ASSIGN  */
  YYSYMBOL_TOKEN_INPUT = 7,                /* TOKEN_INPUT  */
  YYSYMBOL_TOKEN_OUTPUT = 8,               /* TOKEN_OUTPUT  */
  YYSYMBOL_TOKEN_INOUT = 9,                /* TOKEN_INOUT  */
  YYSYMBOL_TOKEN_CONST_0 = 10,             /* TOKEN_CONST_0  */
  YYSYMBOL_TOKEN_CONST_1 = 11,             /* TOKEN_CONST_1  */
  YYSYMBOL_TOKEN_CONST_Z = 12,             /* TOKEN_CONST_Z  */
  YYSYMBOL_TOKEN_WIRE = 13,                /* TOKEN_WIRE  */
  YYSYMBOL_TOKEN_STRING = 14,              /* TOKEN_STRING  */
  YYSYMBOL_TOKEN_BITSTRING = 15,           /* TOKEN_BITSTRING  */
  YYSYMBOL_TOKEN_REGULARID = 16,           /* TOKEN_REGULARID  */
  YYSYMBOL_TOKEN_ESCAPEDID = 17,           /* TOKEN_ESCAPEDID  */
  YYSYMBOL_TOKEN_INTCONSTANT = 18,         /* TOKEN_INTCONSTANT  */
  YYSYMBOL_TOKEN_WYSIWYGID = 19,           /* TOKEN_WYSIWYGID  */
  YYSYMBOL_20_ = 20,                       /* '('  */
  YYSYMBOL_21_ = 21,                       /* ')'  */
  YYSYMBOL_22_ = 22,                       /* ';'  */
  YYSYMBOL_23_ = 23,                       /* '['  */
  YYSYMBOL_24_ = 24,                       /* ':'  */
  YYSYMBOL_25_ = 25,                       /* ']'  */
  YYSYMBOL_26_ = 26,                       /* '='  */
  YYSYMBOL_27_ = 27,                       /* '~'  */
  YYSYMBOL_28_ = 28,                       /* '{'  */
  YYSYMBOL_29_ = 29,                       /* '}'  */
  YYSYMBOL_30_ = 30,                       /* '?'  */
  YYSYMBOL_31_ = 31,                       /* '.'  */
  YYSYMBOL_32_ = 32,                       /* ','  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_design = 34,                    /* design  */
  YYSYMBOL_modules = 35,                   /* modules  */
  YYSYMBOL_module = 36,                    /* module  */
  YYSYMBOL_header = 37,                    /* header  */
  YYSYMBOL_body = 38,                      /* body  */
  YYSYMBOL_declaration_statement = 39,     /* declaration_statement  */
  YYSYMBOL_declaration = 40,               /* declaration  */
  YYSYMBOL_footer = 41,                    /* footer  */
  YYSYMBOL_statement = 42,                 /* statement  */
  YYSYMBOL_AssignStatement = 43,           /* AssignStatement  */
  YYSYMBOL_RValue = 44,                    /* RValue  */
  YYSYMBOL_bitConstant = 45,               /* bitConstant  */
  YYSYMBOL_Concat = 46,                    /* Concat  */
  YYSYMBOL_TriStatement = 47,              /* TriStatement  */
  YYSYMBOL_WysiwygStatement = 48,          /* WysiwygStatement  */
  YYSYMBOL_ComponentStatement = 49,        /* ComponentStatement  */
  YYSYMBOL_DefParamStatement = 50,         /* DefParamStatement  */
  YYSYMBOL_ConnectionList = 51,            /* ConnectionList  */
  YYSYMBOL_Connection = 52,                /* Connection  */
  YYSYMBOL_IdentifierList = 53,            /* IdentifierList  */
  YYSYMBOL_Identifier = 54,                /* Identifier  */
  YYSYMBOL_stringConstant = 55,            /* stringConstant  */
  YYSYMBOL_PinType = 56                    /* PinType  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   93

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  107

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   274


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
      20,    21,     2,     2,    32,     2,    31,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    24,    22,
       2,    26,     2,    30,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,    25,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,    27,     2,     2,     2,
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
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    81,    81,    85,    86,    89,   100,   131,   132,   136,
     138,   142,   153,   166,   171,   172,   173,   174,   175,   178,
     275,   289,   303,   316,   332,   333,   336,   340,   390,   421,
     454,   467,   482,   492,   518,   557,   596,   618,   643,   665,
     682,   691,   700,   709,   729,   730,   733,   734,   735,   736
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
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_MODULE",
  "TOKEN_ENDMODULE", "TOKEN_DEFPARAM", "TOKEN_ASSIGN", "TOKEN_INPUT",
  "TOKEN_OUTPUT", "TOKEN_INOUT", "TOKEN_CONST_0", "TOKEN_CONST_1",
  "TOKEN_CONST_Z", "TOKEN_WIRE", "TOKEN_STRING", "TOKEN_BITSTRING",
  "TOKEN_REGULARID", "TOKEN_ESCAPEDID", "TOKEN_INTCONSTANT",
  "TOKEN_WYSIWYGID", "'('", "')'", "';'", "'['", "':'", "']'", "'='",
  "'~'", "'{'", "'}'", "'?'", "'.'", "','", "$accept", "design", "modules",
  "module", "header", "body", "declaration_statement", "declaration",
  "footer", "statement", "AssignStatement", "RValue", "bitConstant",
  "Concat", "TriStatement", "WysiwygStatement", "ComponentStatement",
  "DefParamStatement", "ConnectionList", "Connection", "IdentifierList",
  "Identifier", "stringConstant", "PinType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-35)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -35,    12,    27,   -35,    18,   -35,   -35,    34,    10,    25,
     -35,    25,    25,   -35,   -35,   -35,   -35,    25,    25,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,    23,    32,
      35,   -19,   -35,    26,    30,    39,    40,    43,     5,    45,
      46,    47,    25,    49,    -6,    36,    36,    44,   -35,    48,
      52,   -35,   -35,    53,   -35,   -35,    25,    25,    50,   -35,
     -35,    41,    33,     3,   -35,     4,    56,   -35,   -35,    29,
     -35,    19,   -35,    25,    58,    60,    59,    36,    61,    57,
     -35,   -35,    62,    63,   -35,    64,    -8,    -8,   -35,   -35,
     -35,    25,   -35,   -35,    74,    66,    68,    69,    70,     6,
      71,   -35,   -35,   -35,   -35,   -35,   -35
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,     0,     4,     7,     0,     0,     0,
      13,     0,     0,    46,    47,    48,    49,     0,     0,     8,
       9,     5,    10,    14,    15,    16,    17,    18,     0,    43,
      41,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     6,    39,     0,    24,    25,     0,     0,     0,    22,
      23,    20,     0,     0,    32,     0,     0,    42,    40,     0,
      21,     0,    19,     0,     0,     0,     0,     0,     0,     0,
      44,    45,     0,     0,    26,     0,     0,     0,    29,    33,
      28,     0,    31,    30,     0,     0,     0,     0,     0,     0,
       0,    36,    34,    37,    35,    12,    27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -34,   -35,   -35,   -35,   -35,    24,    15,
     -25,   -11,   -35,   -35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     5,     6,     8,    19,    20,    21,    22,
      23,    58,    59,    60,    24,    25,    26,    27,    63,    64,
      31,    32,    83,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      33,    34,    41,    38,    54,    55,    35,    36,    29,    30,
      29,    30,     3,    42,    10,    11,    12,    13,    14,    15,
      57,    56,    57,    16,    76,    78,    17,    48,   105,    18,
       4,    52,    71,    61,     7,    77,    77,    42,    42,    29,
      30,    29,    30,    80,    81,    70,    37,    82,    84,    74,
      75,    42,    95,    97,     9,    39,    44,    43,    40,    45,
      46,    47,    85,    49,    50,    53,    99,    62,    66,    51,
      65,    73,    72,    67,    79,    96,    98,    68,    86,    69,
      87,    88,    91,    90,    92,    93,   100,   101,    94,   102,
     103,   104,    89,   106
};

static const yytype_int8 yycheck[] =
{
      11,    12,    21,    28,    10,    11,    17,    18,    16,    17,
      16,    17,     0,    32,     4,     5,     6,     7,     8,     9,
      28,    27,    28,    13,    21,    21,    16,    22,    22,    19,
       3,    42,    57,    44,    16,    32,    32,    32,    32,    16,
      17,    16,    17,    14,    15,    56,    23,    18,    29,    16,
      17,    32,    86,    87,    20,    23,    26,    31,    23,    20,
      20,    18,    73,    18,    18,    16,    91,    31,    24,    22,
      46,    30,    22,    25,    18,    86,    87,    25,    20,    26,
      20,    22,    25,    22,    22,    22,    12,    21,    24,    21,
      21,    21,    77,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    34,    35,     0,     3,    36,    37,    16,    38,    20,
       4,     5,     6,     7,     8,     9,    13,    16,    19,    39,
      40,    41,    42,    43,    47,    48,    49,    50,    56,    16,
      17,    53,    54,    54,    54,    54,    54,    23,    53,    23,
      23,    21,    32,    31,    26,    20,    20,    18,    22,    18,
      18,    22,    54,    16,    10,    11,    27,    28,    44,    45,
      46,    54,    31,    51,    52,    51,    24,    25,    25,    26,
      54,    53,    22,    30,    16,    17,    21,    32,    21,    18,
      14,    15,    18,    55,    29,    54,    20,    20,    22,    52,
      22,    25,    22,    22,    24,    46,    54,    46,    54,    53,
      12,    21,    21,    21,    21,    22,    22
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    37,    38,    38,    39,
      39,    40,    40,    41,    42,    42,    42,    42,    42,    43,
      44,    44,    44,    44,    45,    45,    46,    47,    48,    49,
      50,    50,    51,    51,    52,    52,    52,    52,    53,    53,
      54,    54,    54,    54,    55,    55,    56,    56,    56,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     6,     0,     2,     1,
       1,     3,     8,     1,     1,     1,     1,     1,     1,     5,
       1,     2,     1,     1,     1,     1,     3,     9,     6,     6,
       7,     7,     1,     3,     5,     5,     5,     5,     1,     3,
       4,     1,     4,     1,     1,     1,     1,     1,     1,     1
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
        yyerror (parse_info, YY_("syntax error: cannot back up")); \
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
                  Kind, Value, parse_info); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, t_parse_info* parse_info)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (parse_info);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, t_parse_info* parse_info)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, parse_info);
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
                 int yyrule, t_parse_info* parse_info)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], parse_info);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parse_info); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, t_parse_info* parse_info)
{
  YY_USE (yyvaluep);
  YY_USE (parse_info);
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
yyparse (t_parse_info* parse_info)
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
  case 2: /* design: modules  */
#line 81 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                        {
                    }
#line 1466 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 3: /* modules: %empty  */
#line 85 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                            {}
#line 1472 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 4: /* modules: modules module  */
#line 86 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                               {}
#line 1478 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 5: /* module: header body footer  */
#line 90 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                        {
                if(parse_info->pass_type == COUNT_PASS) {
                    parse_info->number_of_modules++;
                } else {
                    /* Now create a module structure and store all data you just read into it. */
                    add_module((yyvsp[-2].string), &pin_list, &assignment_list, &node_list, parse_info);
                }
			}
#line 1491 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 6: /* header: TOKEN_MODULE TOKEN_REGULARID '(' IdentifierList ')' ';'  */
#line 101 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                        {
                if(parse_info->pass_type == COUNT_PASS) {
                    //pass
                } else {

                    t_array_ref *identifiers = (t_array_ref *) (yyvsp[-2].value);
                    size_t index;

                    /* Free the list of ports as they are defined later on more explicitly. */
                    if (identifiers != NULL)
                    {
                        for(index = 0; index < identifiers->array_size; index++)
                        {
                            t_identifier_pass *ident = (t_identifier_pass *) identifiers->pointer[index];

                            if (ident != NULL)
                            {
                                free(ident->name);
                                free(ident);
                            }
                        }
                        free(identifiers->pointer);
                        free(identifiers);
                    }
                    /* Pass back the name of the module */
                    (yyval.string) = (yyvsp[-4].string);
                }
			}
#line 1524 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 7: /* body: %empty  */
#line 131 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                            {}
#line 1530 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 8: /* body: body declaration_statement  */
#line 132 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                                           {}
#line 1536 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 11: /* declaration: PinType IdentifierList ';'  */
#line 143 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                {
                    if(parse_info->pass_type == COUNT_PASS) {
                        //pass
                    } else {
                        /* Define action for creating a single wire */
                        t_array_ref *list = (t_array_ref *) (yyvsp[-1].value);

                        create_pins_from_list(&list, 0, 0, (t_pin_def_type)(yyvsp[-2].value), T_FALSE, parse_info);
                    }
				}
#line 1551 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 12: /* declaration: PinType '[' TOKEN_INTCONSTANT ':' TOKEN_INTCONSTANT ']' IdentifierList ';'  */
#line 154 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                {
                    if(parse_info->pass_type == COUNT_PASS) {
                        //pass
                    } else {
                        /* Define action for creating a bus */
                        t_array_ref *list = (t_array_ref *) (yyvsp[-1].value);

                        create_pins_from_list(&list, (yyvsp[-5].value), (yyvsp[-3].value), (t_pin_def_type)(yyvsp[-7].value), T_TRUE, parse_info);
                    }
				}
#line 1566 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 13: /* footer: TOKEN_ENDMODULE  */
#line 166 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                {}
#line 1572 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 14: /* statement: AssignStatement  */
#line 171 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {}
#line 1578 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 15: /* statement: TriStatement  */
#line 172 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                             {}
#line 1584 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 16: /* statement: WysiwygStatement  */
#line 173 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                                 {}
#line 1590 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 17: /* statement: ComponentStatement  */
#line 174 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                                   {}
#line 1596 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 18: /* statement: DefParamStatement  */
#line 175 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                                  {}
#line 1602 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 19: /* AssignStatement: TOKEN_ASSIGN Identifier '=' RValue ';'  */
#line 179 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //Count number of assignments in the first pass
                            parse_info->number_of_assignments++;
                        } else {
                            /* Get target data reference */
                            t_identifier_pass *target_id = (t_identifier_pass *) (yyvsp[-3].value);
                            t_pin_def *target_pin = locate_net_by_name(target_id->name);
                            t_rvalue *rval = (t_rvalue *) (yyvsp[-1].value);

                            /* Initialize wire index for the target wire */
                            int target_wire_index = target_pin->left;
                            t_boolean invert_signal = T_FALSE;

                            /* Get pointer to source data if used */
                            t_identifier_pass *source_id = (t_identifier_pass *) (rval->data.data_structure);
                            t_array_ref *ref_array = (t_array_ref *) (rval->data.data_structure);
                            t_pin_def *pin;

                            int wire_index;

                            switch(rval->type)
                            {
                                case RVALUE_IDENTIFIER_BAR:
                                    invert_signal = T_TRUE;
                                case RVALUE_IDENTIFIER:
                                    /* Get source wire info */
                                    pin = locate_net_by_name(source_id->name);

                                    if (target_id->indexed == T_TRUE)
                                    {
                                        target_wire_index = target_id->index;
                                    }
                                    /* Iterate through all wires. The trick here is count the wire indicies
                                     * from left to right (either in increasing or decreasing order as may be the case). */
                                    for(	wire_index = pin->left;
                                            ((pin->left > pin->right) ? (wire_index >= pin->right) : (wire_index <= pin->right));
                                            ((pin->left > pin->right) ? wire_index-- : wire_index++))
                                    {
                                        if (source_id->indexed == T_TRUE)
                                        {
                                            wire_index = source_id->index;
                                        }
                                        add_assignment(pin, wire_index, target_pin, target_wire_index,
                                                        T_FALSE, NULL, 0, -1, invert_signal, parse_info);

                                        if ((target_id->indexed == T_TRUE)||(target_pin->indexed == T_FALSE))
                                        {
                                            break;
                                        }
                                        if (target_pin->left > target_pin->right)
                                        {
                                            target_wire_index--;
                                        }
                                        else
                                        {
                                            target_wire_index++;
                                        }
                                    }

                                    free(source_id->name);
                                    free(source_id);
                                    break;
                                case RVALUE_BIT_VALUE:
                                    for(	target_wire_index = target_pin->left;
                                            ((target_pin->left > target_pin->right) ? (target_wire_index >= target_pin->right) : (target_wire_index <= target_pin->right));
                                            ((target_pin->left > target_pin->right) ? target_wire_index-- : target_wire_index++))
                                    {
                                        if (target_id->indexed == T_TRUE)
                                        {
                                            add_assignment(NULL, 0, target_pin, target_id->index,
                                                                T_FALSE, NULL, 0, rval->data.bit_value, T_FALSE, parse_info);
                                            break;
                                        }
                                        else
                                        {
                                            add_assignment(NULL, 0, target_pin, target_wire_index,
                                                                T_FALSE, NULL, 0, rval->data.bit_value, T_FALSE, parse_info);
                                        }
                                    }
                                    break;
                                case RVALUE_CONCAT:
                                    add_concatenation_assignments(ref_array, target_pin, T_FALSE, parse_info);
                                    break;
                                default:
                                    printf("Should not happen!\n");
                                    assert(0);
                                    break;
                            }
                            free(target_id->name);
                            free(target_id);
                            free(rval);
                        }
					}
#line 1701 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 20: /* RValue: Identifier  */
#line 276 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                        {
                if(parse_info->pass_type == COUNT_PASS) {
                    //pass
                } else {
                    t_rvalue *rval = (t_rvalue *) malloc(sizeof(t_rvalue));
                    assert(rval != NULL);
                    rval->type = RVALUE_IDENTIFIER;

                    /* Pointer to t_identifier_pass structure */
                    rval->data.data_structure = (void *) (yyvsp[0].value);
                    (yyval.value) = (uintptr_t) rval;
                }
			}
#line 1719 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 21: /* RValue: '~' Identifier  */
#line 290 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                        {
                if(parse_info->pass_type == COUNT_PASS) {
                    //pass
                } else {
                    t_rvalue *rval = (t_rvalue *) malloc(sizeof(t_rvalue));
                    assert(rval != NULL);
                    rval->type = RVALUE_IDENTIFIER_BAR;

                    /* Pointer to t_identifier_pass structure */
                    rval->data.data_structure = (void *) (yyvsp[0].value);
                    (yyval.value) = (uintptr_t) rval;
                }
			}
#line 1737 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 22: /* RValue: bitConstant  */
#line 304 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                        {
                if(parse_info->pass_type == COUNT_PASS) {
                    //pass
                } else {
                    t_rvalue *rval = (t_rvalue *) malloc(sizeof(t_rvalue));
                    assert(rval != NULL);

                    rval->type = RVALUE_BIT_VALUE;
                    rval->data.bit_value = (yyvsp[0].value);
                    (yyval.value) = (uintptr_t) rval;
                }
			}
#line 1754 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 23: /* RValue: Concat  */
#line 317 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                        {
                if(parse_info->pass_type == COUNT_PASS) {
                    //pass
                } else {
                    t_rvalue *rval = (t_rvalue *) malloc(sizeof(t_rvalue));
                    assert(rval != NULL);

                    rval->type = RVALUE_CONCAT;
                    /* Pointer to t_array_ref structure that lists all identifiers to be concatenated */
                    rval->data.data_structure = (void *) (yyvsp[0].value);
                    (yyval.value) = (uintptr_t) rval;
                }
			}
#line 1772 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 24: /* bitConstant: TOKEN_CONST_0  */
#line 332 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                { (yyval.value) = (yyvsp[0].value); }
#line 1778 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 25: /* bitConstant: TOKEN_CONST_1  */
#line 333 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                                { (yyval.value) = (yyvsp[0].value); }
#line 1784 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 26: /* Concat: '{' IdentifierList '}'  */
#line 336 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                       { (yyval.value) = (yyvsp[-1].value); }
#line 1790 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 27: /* TriStatement: TOKEN_ASSIGN Identifier '=' Identifier '?' Identifier ':' TOKEN_CONST_Z ';'  */
#line 341 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                {
                    if(parse_info->pass_type == COUNT_PASS) {
                        //pass
                    } else {
                        t_identifier_pass *target		= (t_identifier_pass *) (yyvsp[-7].value);
                        t_identifier_pass *tri_control	= (t_identifier_pass *) (yyvsp[-5].value);
                        t_identifier_pass *source		= (t_identifier_pass *) (yyvsp[-3].value);
                        t_pin_def						*src_pin, *tar_pin, *tri_pin;
                        int								src_index, tar_index, tri_index;

                        src_pin = locate_net_by_name(source->name);
                        tar_pin = locate_net_by_name(target->name);
                        tri_pin = locate_net_by_name(tri_control->name);

                        assert((src_pin != NULL) && (tar_pin != NULL) && (tri_pin != NULL));

                        /* check pin assignments */
                        src_index = source->index;
                        if (source->indexed == T_FALSE)
                        {
                            src_index = my_min(src_pin->left, src_pin->right) - 1;
                        }
                        tar_index = target->index;
                        if (target->indexed == T_FALSE)
                        {
                            tar_index = my_min(tar_pin->left, tar_pin->right) - 1;
                        }
                        tri_index = tri_control->index;
                        if (tri_control->indexed == T_FALSE)
                        {
                            tri_index = my_min(tri_pin->left, tri_pin->right) - 1;
                        }

                        /* Find pins */
                        add_assignment(src_pin, src_index, tar_pin, tar_index,
                                        T_TRUE, tri_pin, tri_index, -1, T_FALSE, parse_info);

                        /* Free memory */
                        free(tri_control->name);
                        free(tri_control);
                        free(source->name);
                        free(source);
                        free(target->name);
                        free(target);

                    }
                }
#line 1842 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 28: /* WysiwygStatement: TOKEN_WYSIWYGID Identifier '(' ConnectionList ')' ';'  */
#line 391 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
						/*
						t_identifier_pass *ident = (t_identifier_pass *) $2;
						t_array_ref *all_connections = (t_array_ref *) $4;
						char *name;
						char index[20];

						if (ident->indexed == T_TRUE)
						{
							sprintf(index,"[%i]",ident->index);
						}
						else
						{
							index[0] = 0;
						}
						name = (char *) malloc(strlen(ident->name)+strlen(index)+1);
						assert(name != NULL);
						sprintf(name,"%s%s", ident->name, index);

						* Add node to the global node list *
						add_node((t_stratix_cells)$1, name, &all_connections);

						* Now free the identifier memory *
						free(ident->name);
						free(ident);
						*/
						assert(0);
					}
#line 1875 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 29: /* ComponentStatement: TOKEN_REGULARID Identifier '(' ConnectionList ')' ';'  */
#line 422 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //Count number of nodes in first pass
                            parse_info->number_of_nodes++;
                        } else {
                            t_identifier_pass *ident = (t_identifier_pass *) (yyvsp[-4].value);
                            t_array_ref *all_connections = (t_array_ref *) (yyvsp[-2].value);
                            char *name;
                            char index[20];

                            if (ident->indexed == T_TRUE)
                            {
                                sprintf(index,"[%i]",ident->index);
                            }
                            else
                            {
                                index[0] = 0;
                            }
                            name = (char *) malloc(strlen(ident->name)+strlen(index)+1);
                            assert(name != NULL);
                            sprintf(name,"%s%s", ident->name, index);

                            /* Add node to the global node list */
                            add_node((yyvsp[-5].string), name, &all_connections, parse_info);

                            /* Now free the identifier memory */
                            free(ident->name);
                            free(ident);
                        }
					}
#line 1910 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 30: /* DefParamStatement: TOKEN_DEFPARAM Identifier '.' TOKEN_REGULARID '=' stringConstant ';'  */
#line 455 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //pass
                        } else {
                            /* To create a proper identifier name, append [<wire_index>] if
                             * and only if the identifier is indexed. Ignore it otherwise. */
                            t_identifier_pass *identifier = (t_identifier_pass *) (yyvsp[-5].value);
                            define_instance_parameter(identifier, (yyvsp[-3].string), (yyvsp[-1].string), 0);
                            free(identifier->name);
                            free(identifier);
                        }
					}
#line 1927 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 31: /* DefParamStatement: TOKEN_DEFPARAM Identifier '.' TOKEN_REGULARID '=' TOKEN_INTCONSTANT ';'  */
#line 468 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //pass
                        } else {
                                /* To create a proper identifier name, append [<wire_index>] if
                                 * and only if the identifier is indexed. Ignore it otherwise. */
                                t_identifier_pass *identifier = (t_identifier_pass *) (yyvsp[-5].value);
                                define_instance_parameter(identifier, (yyvsp[-3].string), NULL, (yyvsp[-1].value));
                                free(identifier->name);
                                free(identifier);
                        }
					}
#line 1944 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 32: /* ConnectionList: Connection  */
#line 483 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //pass
                        } else {
                            /* Create the first array entry for connections. Since a single connection is already an array,
                             * then just pass the array */
                            (yyval.value) = (yyvsp[0].value);
                        }
					}
#line 1958 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 33: /* ConnectionList: ConnectionList ',' Connection  */
#line 493 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //pass
                        } else {
                            size_t index;

                            /* Get a pointer to the list of connections */
                            t_array_ref *all_connections = (t_array_ref *) (yyvsp[-2].value);
                            t_array_ref *new_connections = (t_array_ref *) (yyvsp[0].value);
                            assert(all_connections != NULL);

                            /* Add connection to the list */
                            for (index = 0; index < new_connections->array_size; index++)
                            {
                                append_array_element((intptr_t) new_connections->pointer[index], all_connections);
                            }
                            /* Free the temporary array */
                            free(new_connections->pointer);
                            free(new_connections);
                            /* Return list connection reference */
                            (yyval.value) = (uintptr_t) all_connections;
                        }
					}
#line 1986 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 34: /* Connection: '.' TOKEN_REGULARID '(' Identifier ')'  */
#line 519 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //pass
                        } else {
                            /* Create a link between a pin and a port name on a sub component (node). The identifier is
                             * only used to locate the net the port is to be associated with so free the identifier when done.
                             */
                            t_identifier_pass *ident = (t_identifier_pass *) (yyvsp[-1].value);
                            t_array_ref *array_of_connections;
                            t_array_ref *port_associations;
                            size_t index;

                            array_of_connections = (t_array_ref *) malloc(sizeof(t_array_ref));
                            assert(array_of_connections != NULL);

                            array_of_connections->pointer = NULL;
                            array_of_connections->array_size = 0;
                            array_of_connections->allocated_size = 0;

                            port_associations = associate_identifier_with_port_name(ident, (yyvsp[-3].string), -1);
                            if (port_associations != NULL)
                            {
                                for(index = 0; index < port_associations->array_size; index++)
                                {
                                    append_array_element((intptr_t) port_associations->pointer[index], array_of_connections);
                                }
                                free(port_associations->pointer);
                                free(port_associations);
                            }
                            else
                            {
                                free((yyvsp[-3].string));
                            }
                            (yyval.value) = (uintptr_t) array_of_connections;
                            free(ident->name);
                            free(ident);
                        }
					}
#line 2029 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 35: /* Connection: '.' TOKEN_ESCAPEDID '(' Identifier ')'  */
#line 558 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //pass
                        } else {
                            /* Create a link between a pin and a port name on a sub component (node). The identifier is
                             * only used to locate the net the port is to be associated with so free the identifier when done.
                             */
                            t_identifier_pass *ident = (t_identifier_pass *) (yyvsp[-1].value);
                            t_array_ref *array_of_connections;
                            t_array_ref *port_associations;
                            size_t index;

                            array_of_connections = (t_array_ref *) malloc(sizeof(t_array_ref));
                            assert(array_of_connections != NULL);

                            array_of_connections->pointer = NULL;
                            array_of_connections->array_size = 0;
                            array_of_connections->allocated_size = 0;

                            port_associations = associate_identifier_with_port_name(ident, (yyvsp[-3].string), -1);
                            if (port_associations != NULL)
                            {
                                for(index = 0; index < port_associations->array_size; index++)
                                {
                                    append_array_element((intptr_t) port_associations->pointer[index], array_of_connections);
                                }
                                free(port_associations->pointer);
                                free(port_associations);
                            }
                            else
                            {
                                free((yyvsp[-3].string));
                            }
                            (yyval.value) = (uintptr_t) array_of_connections;
                            free(ident->name);
                            free(ident);
                        }
					}
#line 2072 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 36: /* Connection: '.' TOKEN_REGULARID '(' Concat ')'  */
#line 597 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //pass
                        } else {
                            /* Handle the case where an identifier is actually a concatenation of wires. This is not
                             * consistent with the language definition for the VQM files but seems to happen anyways.
                             *
                             * To handle this case create a temporary wire of appropriate size. Add it to the list of nets.
                             * Once the net is created add wire assignment to associate the concatenated wires with the new net.
                             * Then, use the newly created net as the connection reference to the specified port.
                             */
                            t_array_ref *ref_array = (t_array_ref *)((yyvsp[-1].value));
                            t_array_ref *connections;

                            connections = create_wire_port_connections(ref_array, (yyvsp[-3].string));
                            /* The ref_array is now useless so free it up. */
                            free(ref_array->pointer);
                            free(ref_array);
                            (yyval.value) = (uintptr_t) connections;
                        }
					}
#line 2098 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 37: /* Connection: '.' TOKEN_ESCAPEDID '(' Concat ')'  */
#line 619 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            //pass
                        } else {
                            /* Handle the case where an identifier is actually a concatenation of wires. This is not
                             * consistent with the language definition for the VQM files but seems to happen anyways.
                             *
                             * To handle this case create a temporary wire of appropriate size. Add it to the list of nets.
                             * Once the net is created add wire assignment to associate the concatenated wires with the new net.
                             * Then, use the newly created net as the connection reference to the specified port.
                             */
                            t_array_ref *ref_array = (t_array_ref *)((yyvsp[-1].value));
                            t_array_ref *connections;

                            connections = create_wire_port_connections(ref_array, (yyvsp[-3].string));

                            /* The ref_array is now useless so free it up. */
                            free(ref_array->pointer);
                            free(ref_array);
                            (yyval.value) = (uintptr_t) connections;
                        }
					}
#line 2125 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 38: /* IdentifierList: Identifier  */
#line 644 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            parse_info->number_of_pins++;
                        } else {
                            /* Create the first array entry for the identifier. */
                            t_array_ref *id_list = (t_array_ref *) malloc(sizeof(t_array_ref));

                            assert(id_list != NULL);

                            id_list->array_size = 0;
                            id_list->allocated_size = 0;
                            id_list->pointer = NULL;

                            /* Add the new identifier to the list */
                            id_list->array_size = append_array_element((intptr_t) (yyvsp[0].value), id_list);
                            //id_list->array_size = append_array_element((intptr_t) $1, (intptr_t **) &(id_list->pointer), id_list->array_size);

                            /* Return list pointer */
                            (yyval.value) = (uintptr_t) id_list;
                        }
					}
#line 2151 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 39: /* IdentifierList: IdentifierList ',' Identifier  */
#line 666 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        {
                        if(parse_info->pass_type == COUNT_PASS) {
                            parse_info->number_of_pins++;
                        } else {
                            /* Obtain pointer to existing list */
                            t_array_ref *id_list = (t_array_ref *) (yyvsp[-2].value);

                            /* Add new identifier */
                            append_array_element((intptr_t) (yyvsp[0].value), id_list);

                            /* Return list pointer */
                            (yyval.value) = (uintptr_t) id_list;
                        }
					}
#line 2170 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 40: /* Identifier: TOKEN_ESCAPEDID '[' TOKEN_INTCONSTANT ']'  */
#line 683 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                {
                    if(parse_info->pass_type == COUNT_PASS) {
                        //pass
                    } else {
                        /* Allocate space for an identifier. Specify index used */
                        (yyval.value) = (uintptr_t) allocate_identifier((yyvsp[-3].string), T_TRUE, (yyvsp[-1].value));
                    }
				}
#line 2183 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 41: /* Identifier: TOKEN_ESCAPEDID  */
#line 692 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                {
                    if(parse_info->pass_type == COUNT_PASS) {
                        //pass
                    } else {
                        /* Allocate space for an identifier. Set index to -1 since its unindexed */
                        (yyval.value) = (uintptr_t) allocate_identifier((yyvsp[0].string), T_FALSE, -1);
                    }
				}
#line 2196 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 42: /* Identifier: TOKEN_REGULARID '[' TOKEN_INTCONSTANT ']'  */
#line 701 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                {
                    if(parse_info->pass_type == COUNT_PASS) {
                        //pass
                    } else {
                        /* Allocate space for an identifier. Specify index used */
                        (yyval.value) = (uintptr_t) allocate_identifier((yyvsp[-3].string), T_TRUE, (yyvsp[-1].value));
                    }
				}
#line 2209 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 43: /* Identifier: TOKEN_REGULARID  */
#line 710 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                {
                    if(parse_info->pass_type == COUNT_PASS) {
                        //pass
                    } else {
                        /* Allocate space for an identifier. Set index to -1 since its unindexed */
                        if (strncmp((yyvsp[0].string),RESERVED_UNUSED_CLOCK_INPUT,RESERVED_UNUSED_CLOCK_INPUT_STRING_LENGTH) == 0)
                        {
                            /* Eliminate dummy wires that only signify a lack of a wire */
                            free((yyvsp[0].string));
                            (yyval.value) = (uintptr_t) NULL;
                        }
                        else
                        {
                            (yyval.value) = (uintptr_t) allocate_identifier((yyvsp[0].string), T_FALSE, -1);
                        }
                    }
				}
#line 2231 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 44: /* stringConstant: TOKEN_STRING  */
#line 729 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                { (yyval.string) = (yyvsp[0].string); }
#line 2237 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 45: /* stringConstant: TOKEN_BITSTRING  */
#line 730 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                                { (yyval.string) = (yyvsp[0].string); }
#line 2243 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 46: /* PinType: TOKEN_INPUT  */
#line 733 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                { (yyval.value) = (yyvsp[0].value); }
#line 2249 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 47: /* PinType: TOKEN_OUTPUT  */
#line 734 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                     { (yyval.value) = (yyvsp[0].value); }
#line 2255 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 48: /* PinType: TOKEN_INOUT  */
#line 735 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                    { (yyval.value) = (yyvsp[0].value); }
#line 2261 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;

  case 49: /* PinType: TOKEN_WIRE  */
#line 736 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"
                                        { (yyval.value) = (yyvsp[0].value); }
#line 2267 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"
    break;


#line 2271 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/libvqm/vqm_parser.gen.c"

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
        yyerror (parse_info, yymsgp);
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
                      yytoken, &yylval, parse_info);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, parse_info);
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
  yyerror (parse_info, YY_("memory exhausted"));
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
                  yytoken, &yylval, parse_info);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, parse_info);
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

#line 740 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/libvqm/vqm_parser.y"



/********************************************************/
/**** DEFINE ERROR HANDLER FUNCTION *********************/
/********************************************************/


int yyerror(t_parse_info* parse_info, const char *s)
{
	sprintf(most_recent_error, "%s occured at line %i: %s\r\n", s, yylineno, yytext);
	return 0;
}

/*int main(void) {

  yyparse();

  return 0;

}*/
