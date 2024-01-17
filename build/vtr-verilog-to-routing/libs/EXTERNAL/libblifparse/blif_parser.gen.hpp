// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libblifparse/blif_parser.gen.hpp
 ** Define the blifparse::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_BLIFPARSE_HOME_NOURAN_OPENFPGA_BUILD_VTR_VERILOG_TO_ROUTING_LIBS_EXTERNAL_LIBBLIFPARSE_BLIF_PARSER_GEN_HPP_INCLUDED
# define YY_BLIFPARSE_HOME_NOURAN_OPENFPGA_BUILD_VTR_VERILOG_TO_ROUTING_LIBS_EXTERNAL_LIBBLIFPARSE_BLIF_PARSER_GEN_HPP_INCLUDED
// "%code requires" blocks.
#line 68 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libblifparse/src/blif_parser.y"

    #include <memory>
    #include "blifparse.hpp"
    #include "blif_lexer_fwd.hpp"

#line 55 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libblifparse/blif_parser.gen.hpp"

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif

#include <typeinfo>
#ifndef BLIFPARSE__ASSERT
# include <cassert>
# define BLIFPARSE__ASSERT assert
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
#ifndef BLIFPARSE_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define BLIFPARSE_DEBUG 1
#  else
#   define BLIFPARSE_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define BLIFPARSE_DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined BLIFPARSE_DEBUG */

#line 34 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libblifparse/src/blif_parser.y"
namespace blifparse {
#line 204 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libblifparse/blif_parser.gen.hpp"




  /// A Bison parser.
  class Parser
  {
  public:
#ifdef BLIFPARSE_STYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define BLIFPARSE_STYPE in C++, use %define api.value.type"
# endif
    typedef BLIFPARSE_STYPE value_type;
#else
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      BLIFPARSE__ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {
      BLIFPARSE__ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      BLIFPARSE__ASSERT (!yytypeid_);
      BLIFPARSE__ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      BLIFPARSE__ASSERT (!yytypeid_);
      BLIFPARSE__ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      BLIFPARSE__ASSERT (!yytypeid_);
      BLIFPARSE__ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      BLIFPARSE__ASSERT (yytypeid_);
      BLIFPARSE__ASSERT (*yytypeid_ == typeid (T));
      BLIFPARSE__ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      BLIFPARSE__ASSERT (yytypeid_);
      BLIFPARSE__ASSERT (*yytypeid_ == typeid (T));
      BLIFPARSE__ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      BLIFPARSE__ASSERT (yytypeid_);
      BLIFPARSE__ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // attr
      char dummy1[sizeof (Attr)];

      // cname
      char dummy2[sizeof (Cname)];

      // conn
      char dummy3[sizeof (Conn)];

      // latch_type
      char dummy4[sizeof (LatchType)];

      // latch_init
      // logic_value
      char dummy5[sizeof (LogicValue)];

      // names
      char dummy6[sizeof (Names)];

      // param
      char dummy7[sizeof (Param)];

      // subckt
      char dummy8[sizeof (SubCkt)];

      // STRING
      // latch_control
      char dummy9[sizeof (std::string)];

      // so_cover_row
      char dummy10[sizeof (std::vector<LogicValue>)];

      // string_list
      char dummy11[sizeof (std::vector<std::string>)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;


    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const std::string& m)
        : std::runtime_error (m)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        TOKEN_BLIFPARSE_EMPTY = -2,
    TOKEN_EOF = 0,                 // "end-of-file"
    TOKEN_BLIFPARSE_error = 256,   // error
    TOKEN_BLIFPARSE_UNDEF = 257,   // "invalid token"
    TOKEN_DOT_NAMES = 258,         // ".names"
    TOKEN_DOT_LATCH = 259,         // ".latch"
    TOKEN_DOT_MODEL = 260,         // ".model"
    TOKEN_DOT_SUBCKT = 261,        // ".subckt"
    TOKEN_DOT_INPUTS = 262,        // ".inputs"
    TOKEN_DOT_OUTPUTS = 263,       // ".outputs"
    TOKEN_DOT_CLOCK = 264,         // ".clock"
    TOKEN_DOT_END = 265,           // ".end"
    TOKEN_DOT_BLACKBOX = 266,      // ".blackbox"
    TOKEN_LATCH_FE = 267,          // "fe"
    TOKEN_LATCH_RE = 268,          // "re"
    TOKEN_LATCH_AH = 269,          // "ah"
    TOKEN_LATCH_AL = 270,          // "al"
    TOKEN_LATCH_AS = 271,          // "as"
    TOKEN_NIL = 272,               // "NIL"
    TOKEN_LATCH_INIT_2 = 273,      // "2"
    TOKEN_LATCH_INIT_3 = 274,      // "3"
    TOKEN_LOGIC_FALSE = 275,       // "0"
    TOKEN_LOGIC_TRUE = 276,        // "1"
    TOKEN_LOGIC_DONT_CARE = 277,   // "-"
    TOKEN_EQ = 278,                // "="
    TOKEN_EOL = 279,               // "end-of-line"
    TOKEN_DOT_CONN = 280,          // ".conn"
    TOKEN_DOT_ATTR = 281,          // ".attr"
    TOKEN_DOT_PARAM = 282,         // ".param"
    TOKEN_DOT_CNAME = 283,         // ".cname"
    TOKEN_STRING = 284             // STRING
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 30, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end-of-file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_DOT_NAMES = 3,                         // ".names"
        S_DOT_LATCH = 4,                         // ".latch"
        S_DOT_MODEL = 5,                         // ".model"
        S_DOT_SUBCKT = 6,                        // ".subckt"
        S_DOT_INPUTS = 7,                        // ".inputs"
        S_DOT_OUTPUTS = 8,                       // ".outputs"
        S_DOT_CLOCK = 9,                         // ".clock"
        S_DOT_END = 10,                          // ".end"
        S_DOT_BLACKBOX = 11,                     // ".blackbox"
        S_LATCH_FE = 12,                         // "fe"
        S_LATCH_RE = 13,                         // "re"
        S_LATCH_AH = 14,                         // "ah"
        S_LATCH_AL = 15,                         // "al"
        S_LATCH_AS = 16,                         // "as"
        S_NIL = 17,                              // "NIL"
        S_LATCH_INIT_2 = 18,                     // "2"
        S_LATCH_INIT_3 = 19,                     // "3"
        S_LOGIC_FALSE = 20,                      // "0"
        S_LOGIC_TRUE = 21,                       // "1"
        S_LOGIC_DONT_CARE = 22,                  // "-"
        S_EQ = 23,                               // "="
        S_EOL = 24,                              // "end-of-line"
        S_DOT_CONN = 25,                         // ".conn"
        S_DOT_ATTR = 26,                         // ".attr"
        S_DOT_PARAM = 27,                        // ".param"
        S_DOT_CNAME = 28,                        // ".cname"
        S_STRING = 29,                           // STRING
        S_YYACCEPT = 30,                         // $accept
        S_blif_data = 31,                        // blif_data
        S_names = 32,                            // names
        S_subckt = 33,                           // subckt
        S_latch = 34,                            // latch
        S_latch_init = 35,                       // latch_init
        S_latch_control = 36,                    // latch_control
        S_latch_type = 37,                       // latch_type
        S_so_cover_row = 38,                     // so_cover_row
        S_logic_value = 39,                      // logic_value
        S_string_list = 40,                      // string_list
        S_conn = 41,                             // conn
        S_cname = 42,                            // cname
        S_attr = 43,                             // attr
        S_param = 44                             // param
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
      {
        switch (this->kind ())
    {
      case symbol_kind::S_attr: // attr
        value.move< Attr > (std::move (that.value));
        break;

      case symbol_kind::S_cname: // cname
        value.move< Cname > (std::move (that.value));
        break;

      case symbol_kind::S_conn: // conn
        value.move< Conn > (std::move (that.value));
        break;

      case symbol_kind::S_latch_type: // latch_type
        value.move< LatchType > (std::move (that.value));
        break;

      case symbol_kind::S_latch_init: // latch_init
      case symbol_kind::S_logic_value: // logic_value
        value.move< LogicValue > (std::move (that.value));
        break;

      case symbol_kind::S_names: // names
        value.move< Names > (std::move (that.value));
        break;

      case symbol_kind::S_param: // param
        value.move< Param > (std::move (that.value));
        break;

      case symbol_kind::S_subckt: // subckt
        value.move< SubCkt > (std::move (that.value));
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_latch_control: // latch_control
        value.move< std::string > (std::move (that.value));
        break;

      case symbol_kind::S_so_cover_row: // so_cover_row
        value.move< std::vector<LogicValue> > (std::move (that.value));
        break;

      case symbol_kind::S_string_list: // string_list
        value.move< std::vector<std::string> > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#else
      basic_symbol (typename Base::kind_type t)
        : Base (t)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Attr&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Attr& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Cname&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Cname& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Conn&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Conn& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, LatchType&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const LatchType& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, LogicValue&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const LogicValue& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Names&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Names& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, Param&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const Param& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SubCkt&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SubCkt& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<LogicValue>&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<LogicValue>& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::vector<std::string>&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::vector<std::string>& v)
        : Base (t)
        , value (v)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_attr: // attr
        value.template destroy< Attr > ();
        break;

      case symbol_kind::S_cname: // cname
        value.template destroy< Cname > ();
        break;

      case symbol_kind::S_conn: // conn
        value.template destroy< Conn > ();
        break;

      case symbol_kind::S_latch_type: // latch_type
        value.template destroy< LatchType > ();
        break;

      case symbol_kind::S_latch_init: // latch_init
      case symbol_kind::S_logic_value: // logic_value
        value.template destroy< LogicValue > ();
        break;

      case symbol_kind::S_names: // names
        value.template destroy< Names > ();
        break;

      case symbol_kind::S_param: // param
        value.template destroy< Param > ();
        break;

      case symbol_kind::S_subckt: // subckt
        value.template destroy< SubCkt > ();
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_latch_control: // latch_control
        value.template destroy< std::string > ();
        break;

      case symbol_kind::S_so_cover_row: // so_cover_row
        value.template destroy< std::vector<LogicValue> > ();
        break;

      case symbol_kind::S_string_list: // string_list
        value.template destroy< std::vector<std::string> > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return Parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#else
      symbol_type (int tok)
        : super_type (token_kind_type (tok))
#endif
      {
#if !defined _MSC_VER || defined __clang__
        BLIFPARSE__ASSERT (tok == token::TOKEN_EOF
                   || (token::TOKEN_BLIFPARSE_error <= tok && tok <= token::TOKEN_DOT_CNAME));
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v)
        : super_type (token_kind_type (tok), std::move (v))
#else
      symbol_type (int tok, const std::string& v)
        : super_type (token_kind_type (tok), v)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        BLIFPARSE__ASSERT (tok == token::TOKEN_STRING);
#endif
      }
    };

    /// Build a parser object.
    Parser (Lexer& lexer_yyarg, Callback& callback_yyarg);
    virtual ~Parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    Parser (const Parser&) = delete;
    /// Non copyable.
    Parser& operator= (const Parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if BLIFPARSE_DEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param msg    a description of the syntax error.
    virtual void error (const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EOF ()
      {
        return symbol_type (token::TOKEN_EOF);
      }
#else
      static
      symbol_type
      make_EOF ()
      {
        return symbol_type (token::TOKEN_EOF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BLIFPARSE_error ()
      {
        return symbol_type (token::TOKEN_BLIFPARSE_error);
      }
#else
      static
      symbol_type
      make_BLIFPARSE_error ()
      {
        return symbol_type (token::TOKEN_BLIFPARSE_error);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BLIFPARSE_UNDEF ()
      {
        return symbol_type (token::TOKEN_BLIFPARSE_UNDEF);
      }
#else
      static
      symbol_type
      make_BLIFPARSE_UNDEF ()
      {
        return symbol_type (token::TOKEN_BLIFPARSE_UNDEF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_NAMES ()
      {
        return symbol_type (token::TOKEN_DOT_NAMES);
      }
#else
      static
      symbol_type
      make_DOT_NAMES ()
      {
        return symbol_type (token::TOKEN_DOT_NAMES);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_LATCH ()
      {
        return symbol_type (token::TOKEN_DOT_LATCH);
      }
#else
      static
      symbol_type
      make_DOT_LATCH ()
      {
        return symbol_type (token::TOKEN_DOT_LATCH);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_MODEL ()
      {
        return symbol_type (token::TOKEN_DOT_MODEL);
      }
#else
      static
      symbol_type
      make_DOT_MODEL ()
      {
        return symbol_type (token::TOKEN_DOT_MODEL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_SUBCKT ()
      {
        return symbol_type (token::TOKEN_DOT_SUBCKT);
      }
#else
      static
      symbol_type
      make_DOT_SUBCKT ()
      {
        return symbol_type (token::TOKEN_DOT_SUBCKT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_INPUTS ()
      {
        return symbol_type (token::TOKEN_DOT_INPUTS);
      }
#else
      static
      symbol_type
      make_DOT_INPUTS ()
      {
        return symbol_type (token::TOKEN_DOT_INPUTS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_OUTPUTS ()
      {
        return symbol_type (token::TOKEN_DOT_OUTPUTS);
      }
#else
      static
      symbol_type
      make_DOT_OUTPUTS ()
      {
        return symbol_type (token::TOKEN_DOT_OUTPUTS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_CLOCK ()
      {
        return symbol_type (token::TOKEN_DOT_CLOCK);
      }
#else
      static
      symbol_type
      make_DOT_CLOCK ()
      {
        return symbol_type (token::TOKEN_DOT_CLOCK);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_END ()
      {
        return symbol_type (token::TOKEN_DOT_END);
      }
#else
      static
      symbol_type
      make_DOT_END ()
      {
        return symbol_type (token::TOKEN_DOT_END);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_BLACKBOX ()
      {
        return symbol_type (token::TOKEN_DOT_BLACKBOX);
      }
#else
      static
      symbol_type
      make_DOT_BLACKBOX ()
      {
        return symbol_type (token::TOKEN_DOT_BLACKBOX);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LATCH_FE ()
      {
        return symbol_type (token::TOKEN_LATCH_FE);
      }
#else
      static
      symbol_type
      make_LATCH_FE ()
      {
        return symbol_type (token::TOKEN_LATCH_FE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LATCH_RE ()
      {
        return symbol_type (token::TOKEN_LATCH_RE);
      }
#else
      static
      symbol_type
      make_LATCH_RE ()
      {
        return symbol_type (token::TOKEN_LATCH_RE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LATCH_AH ()
      {
        return symbol_type (token::TOKEN_LATCH_AH);
      }
#else
      static
      symbol_type
      make_LATCH_AH ()
      {
        return symbol_type (token::TOKEN_LATCH_AH);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LATCH_AL ()
      {
        return symbol_type (token::TOKEN_LATCH_AL);
      }
#else
      static
      symbol_type
      make_LATCH_AL ()
      {
        return symbol_type (token::TOKEN_LATCH_AL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LATCH_AS ()
      {
        return symbol_type (token::TOKEN_LATCH_AS);
      }
#else
      static
      symbol_type
      make_LATCH_AS ()
      {
        return symbol_type (token::TOKEN_LATCH_AS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NIL ()
      {
        return symbol_type (token::TOKEN_NIL);
      }
#else
      static
      symbol_type
      make_NIL ()
      {
        return symbol_type (token::TOKEN_NIL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LATCH_INIT_2 ()
      {
        return symbol_type (token::TOKEN_LATCH_INIT_2);
      }
#else
      static
      symbol_type
      make_LATCH_INIT_2 ()
      {
        return symbol_type (token::TOKEN_LATCH_INIT_2);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LATCH_INIT_3 ()
      {
        return symbol_type (token::TOKEN_LATCH_INIT_3);
      }
#else
      static
      symbol_type
      make_LATCH_INIT_3 ()
      {
        return symbol_type (token::TOKEN_LATCH_INIT_3);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOGIC_FALSE ()
      {
        return symbol_type (token::TOKEN_LOGIC_FALSE);
      }
#else
      static
      symbol_type
      make_LOGIC_FALSE ()
      {
        return symbol_type (token::TOKEN_LOGIC_FALSE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOGIC_TRUE ()
      {
        return symbol_type (token::TOKEN_LOGIC_TRUE);
      }
#else
      static
      symbol_type
      make_LOGIC_TRUE ()
      {
        return symbol_type (token::TOKEN_LOGIC_TRUE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOGIC_DONT_CARE ()
      {
        return symbol_type (token::TOKEN_LOGIC_DONT_CARE);
      }
#else
      static
      symbol_type
      make_LOGIC_DONT_CARE ()
      {
        return symbol_type (token::TOKEN_LOGIC_DONT_CARE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQ ()
      {
        return symbol_type (token::TOKEN_EQ);
      }
#else
      static
      symbol_type
      make_EQ ()
      {
        return symbol_type (token::TOKEN_EQ);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EOL ()
      {
        return symbol_type (token::TOKEN_EOL);
      }
#else
      static
      symbol_type
      make_EOL ()
      {
        return symbol_type (token::TOKEN_EOL);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_CONN ()
      {
        return symbol_type (token::TOKEN_DOT_CONN);
      }
#else
      static
      symbol_type
      make_DOT_CONN ()
      {
        return symbol_type (token::TOKEN_DOT_CONN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_ATTR ()
      {
        return symbol_type (token::TOKEN_DOT_ATTR);
      }
#else
      static
      symbol_type
      make_DOT_ATTR ()
      {
        return symbol_type (token::TOKEN_DOT_ATTR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_PARAM ()
      {
        return symbol_type (token::TOKEN_DOT_PARAM);
      }
#else
      static
      symbol_type
      make_DOT_PARAM ()
      {
        return symbol_type (token::TOKEN_DOT_PARAM);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT_CNAME ()
      {
        return symbol_type (token::TOKEN_DOT_CNAME);
      }
#else
      static
      symbol_type
      make_DOT_CNAME ()
      {
        return symbol_type (token::TOKEN_DOT_CNAME);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING (std::string v)
      {
        return symbol_type (token::TOKEN_STRING, std::move (v));
      }
#else
      static
      symbol_type
      make_STRING (const std::string& v)
      {
        return symbol_type (token::TOKEN_STRING, v);
      }
#endif


    class context
    {
    public:
      context (const Parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const Parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    Parser (const Parser&);
    /// Non copyable.
    Parser& operator= (const Parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef signed char state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const signed char yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const signed char yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const signed char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const signed char yytable_[];

    static const signed char yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const signed char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if BLIFPARSE_DEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const unsigned char yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 70,     ///< Last index in yytable_.
      yynnts_ = 15,  ///< Number of nonterminal symbols.
      yyfinal_ = 2 ///< Termination state number.
    };


    // User arguments.
    Lexer& lexer;
    Callback& callback;

  };

  inline
  Parser::symbol_kind_type
  Parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
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
      25,    26,    27,    28,    29
    };
    // Last valid token kind.
    const int code_max = 284;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

  // basic_symbol.
  template <typename Base>
  Parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
  {
    switch (this->kind ())
    {
      case symbol_kind::S_attr: // attr
        value.copy< Attr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cname: // cname
        value.copy< Cname > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_conn: // conn
        value.copy< Conn > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_latch_type: // latch_type
        value.copy< LatchType > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_latch_init: // latch_init
      case symbol_kind::S_logic_value: // logic_value
        value.copy< LogicValue > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_names: // names
        value.copy< Names > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_param: // param
        value.copy< Param > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_subckt: // subckt
        value.copy< SubCkt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_latch_control: // latch_control
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_so_cover_row: // so_cover_row
        value.copy< std::vector<LogicValue> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_string_list: // string_list
        value.copy< std::vector<std::string> > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
  Parser::symbol_kind_type
  Parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  Parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  Parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_attr: // attr
        value.move< Attr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cname: // cname
        value.move< Cname > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_conn: // conn
        value.move< Conn > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_latch_type: // latch_type
        value.move< LatchType > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_latch_init: // latch_init
      case symbol_kind::S_logic_value: // logic_value
        value.move< LogicValue > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_names: // names
        value.move< Names > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_param: // param
        value.move< Param > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_subckt: // subckt
        value.move< SubCkt > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_latch_control: // latch_control
        value.move< std::string > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_so_cover_row: // so_cover_row
        value.move< std::vector<LogicValue> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_string_list: // string_list
        value.move< std::vector<std::string> > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

  }

  // by_kind.
  inline
  Parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  Parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
  Parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  inline
  Parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  inline
  void
  Parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
  Parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
  Parser::symbol_kind_type
  Parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  inline
  Parser::symbol_kind_type
  Parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


#line 34 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libblifparse/src/blif_parser.y"
} // blifparse
#line 2091 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libblifparse/blif_parser.gen.hpp"




#endif // !YY_BLIFPARSE_HOME_NOURAN_OPENFPGA_BUILD_VTR_VERILOG_TO_ROUTING_LIBS_EXTERNAL_LIBBLIFPARSE_BLIF_PARSER_GEN_HPP_INCLUDED
