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
 ** \file /home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.hpp
 ** Define the sdcparse::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_SDCPARSE_HOME_NOURAN_OPENFPGA_BUILD_VTR_VERILOG_TO_ROUTING_LIBS_EXTERNAL_LIBSDCPARSE_SDC_PARSER_GEN_HPP_INCLUDED
# define YY_SDCPARSE_HOME_NOURAN_OPENFPGA_BUILD_VTR_VERILOG_TO_ROUTING_LIBS_EXTERNAL_LIBSDCPARSE_SDC_PARSER_GEN_HPP_INCLUDED
// "%code requires" blocks.
#line 68 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"

    #include <memory>
    #include "sdcparse.hpp"
    #include "sdc_lexer_fwd.hpp"

#line 55 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.hpp"

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
#ifndef SDCPARSE__ASSERT
# include <cassert>
# define SDCPARSE__ASSERT assert
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
#ifndef SDCPARSE_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define SDCPARSE_DEBUG 1
#  else
#   define SDCPARSE_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define SDCPARSE_DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined SDCPARSE_DEBUG */

#line 34 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
namespace sdcparse {
#line 204 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.hpp"




  /// A Bison parser.
  class Parser
  {
  public:
#ifdef SDCPARSE_STYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define SDCPARSE_STYPE in C++, use %define api.value.type"
# endif
    typedef SDCPARSE_STYPE value_type;
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
      SDCPARSE__ASSERT (sizeof (T) <= size);
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
      SDCPARSE__ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      SDCPARSE__ASSERT (!yytypeid_);
      SDCPARSE__ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      SDCPARSE__ASSERT (!yytypeid_);
      SDCPARSE__ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      SDCPARSE__ASSERT (!yytypeid_);
      SDCPARSE__ASSERT (sizeof (T) <= size);
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
      SDCPARSE__ASSERT (yytypeid_);
      SDCPARSE__ASSERT (*yytypeid_ == typeid (T));
      SDCPARSE__ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      SDCPARSE__ASSERT (yytypeid_);
      SDCPARSE__ASSERT (*yytypeid_ == typeid (T));
      SDCPARSE__ASSERT (sizeof (T) <= size);
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
      SDCPARSE__ASSERT (yytypeid_);
      SDCPARSE__ASSERT (*yytypeid_ == *that.yytypeid_);
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
      // cmd_create_clock
      char dummy1[sizeof (CreateClock)];

      // cmd_set_clock_groups
      char dummy2[sizeof (SetClockGroups)];

      // cmd_set_clock_latency
      char dummy3[sizeof (SetClockLatency)];

      // cmd_set_clock_uncertainty
      char dummy4[sizeof (SetClockUncertainty)];

      // cmd_set_disable_timing
      char dummy5[sizeof (SetDisableTiming)];

      // cmd_set_false_path
      char dummy6[sizeof (SetFalsePath)];

      // cmd_set_input_delay
      // cmd_set_output_delay
      char dummy7[sizeof (SetIoDelay)];

      // cmd_set_max_delay
      // cmd_set_min_delay
      char dummy8[sizeof (SetMinMaxDelay)];

      // cmd_set_multicycle_path
      char dummy9[sizeof (SetMulticyclePath)];

      // cmd_set_timing_derate
      char dummy10[sizeof (SetTimingDerate)];

      // cmd_get_ports
      // cmd_get_clocks
      // cmd_get_cells
      // cmd_get_pins
      // stringGroup
      char dummy11[sizeof (StringGroup)];

      // FLOAT_NUMBER
      // number
      // float_number
      char dummy12[sizeof (float)];

      // INT_NUMBER
      // int_number
      char dummy13[sizeof (int)];

      // STRING
      // ESCAPED_STRING
      // CHAR
      // string
      char dummy14[sizeof (std::string)];
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
        TOKEN_SDCPARSE_EMPTY = -2,
    TOKEN_EOF = 0,                 // "end-of-file"
    TOKEN_SDCPARSE_error = 256,    // error
    TOKEN_SDCPARSE_UNDEF = 257,    // "invalid token"
    TOKEN_CMD_CREATE_CLOCK = 258,  // "create_clock"
    TOKEN_CMD_SET_CLOCK_GROUPS = 259, // "set_clock_groups"
    TOKEN_CMD_SET_FALSE_PATH = 260, // "set_false_path"
    TOKEN_CMD_SET_MAX_DELAY = 261, // "set_max_delay"
    TOKEN_CMD_SET_MIN_DELAY = 262, // "set_min_delay"
    TOKEN_CMD_SET_MULTICYCLE_PATH = 263, // "set_multicycle_path"
    TOKEN_CMD_SET_INPUT_DELAY = 264, // "set_input_delay"
    TOKEN_CMD_SET_OUTPUT_DELAY = 265, // "set_output_delay"
    TOKEN_CMD_SET_CLOCK_UNCERTAINTY = 266, // "set_clock_uncertainty"
    TOKEN_CMD_SET_CLOCK_LATENCY = 267, // "set_clock_latency"
    TOKEN_CMD_SET_DISABLE_TIMING = 268, // "set_disable_timing"
    TOKEN_CMD_SET_TIMING_DERATE = 269, // "set_timing_derate"
    TOKEN_CMD_GET_PORTS = 270,     // "get_ports"
    TOKEN_CMD_GET_CLOCKS = 271,    // "get_clocks"
    TOKEN_CMD_GET_CELLS = 272,     // "get_cells"
    TOKEN_CMD_GET_PINS = 273,      // "get_pins"
    TOKEN_ARG_PERIOD = 274,        // "-period"
    TOKEN_ARG_WAVEFORM = 275,      // "-waveform"
    TOKEN_ARG_NAME = 276,          // "-name"
    TOKEN_ARG_EXCLUSIVE = 277,     // "-exclusive"
    TOKEN_ARG_GROUP = 278,         // "-group"
    TOKEN_ARG_FROM = 279,          // "-from"
    TOKEN_ARG_TO = 280,            // "-to"
    TOKEN_ARG_SETUP = 281,         // "-setup"
    TOKEN_ARG_HOLD = 282,          // "-hold"
    TOKEN_ARG_CLOCK = 283,         // "-clock"
    TOKEN_ARG_MAX = 284,           // "-max"
    TOKEN_ARG_MIN = 285,           // "-min"
    TOKEN_ARG_EARLY = 286,         // "-early"
    TOKEN_ARG_LATE = 287,          // "-late"
    TOKEN_ARG_CELL_DELAY = 288,    // "-cell_delay"
    TOKEN_ARG_NET_DELAY = 289,     // "-net_delay"
    TOKEN_ARG_SOURCE = 290,        // "-source"
    TOKEN_LSPAR = 291,             // "["
    TOKEN_RSPAR = 292,             // "]"
    TOKEN_LCPAR = 293,             // "{"
    TOKEN_RCPAR = 294,             // "}"
    TOKEN_EOL = 295,               // "end-of-line"
    TOKEN_STRING = 296,            // STRING
    TOKEN_ESCAPED_STRING = 297,    // ESCAPED_STRING
    TOKEN_CHAR = 298,              // CHAR
    TOKEN_FLOAT_NUMBER = 299,      // FLOAT_NUMBER
    TOKEN_INT_NUMBER = 300         // INT_NUMBER
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
        YYNTOKENS = 46, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end-of-file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_CMD_CREATE_CLOCK = 3,                  // "create_clock"
        S_CMD_SET_CLOCK_GROUPS = 4,              // "set_clock_groups"
        S_CMD_SET_FALSE_PATH = 5,                // "set_false_path"
        S_CMD_SET_MAX_DELAY = 6,                 // "set_max_delay"
        S_CMD_SET_MIN_DELAY = 7,                 // "set_min_delay"
        S_CMD_SET_MULTICYCLE_PATH = 8,           // "set_multicycle_path"
        S_CMD_SET_INPUT_DELAY = 9,               // "set_input_delay"
        S_CMD_SET_OUTPUT_DELAY = 10,             // "set_output_delay"
        S_CMD_SET_CLOCK_UNCERTAINTY = 11,        // "set_clock_uncertainty"
        S_CMD_SET_CLOCK_LATENCY = 12,            // "set_clock_latency"
        S_CMD_SET_DISABLE_TIMING = 13,           // "set_disable_timing"
        S_CMD_SET_TIMING_DERATE = 14,            // "set_timing_derate"
        S_CMD_GET_PORTS = 15,                    // "get_ports"
        S_CMD_GET_CLOCKS = 16,                   // "get_clocks"
        S_CMD_GET_CELLS = 17,                    // "get_cells"
        S_CMD_GET_PINS = 18,                     // "get_pins"
        S_ARG_PERIOD = 19,                       // "-period"
        S_ARG_WAVEFORM = 20,                     // "-waveform"
        S_ARG_NAME = 21,                         // "-name"
        S_ARG_EXCLUSIVE = 22,                    // "-exclusive"
        S_ARG_GROUP = 23,                        // "-group"
        S_ARG_FROM = 24,                         // "-from"
        S_ARG_TO = 25,                           // "-to"
        S_ARG_SETUP = 26,                        // "-setup"
        S_ARG_HOLD = 27,                         // "-hold"
        S_ARG_CLOCK = 28,                        // "-clock"
        S_ARG_MAX = 29,                          // "-max"
        S_ARG_MIN = 30,                          // "-min"
        S_ARG_EARLY = 31,                        // "-early"
        S_ARG_LATE = 32,                         // "-late"
        S_ARG_CELL_DELAY = 33,                   // "-cell_delay"
        S_ARG_NET_DELAY = 34,                    // "-net_delay"
        S_ARG_SOURCE = 35,                       // "-source"
        S_LSPAR = 36,                            // "["
        S_RSPAR = 37,                            // "]"
        S_LCPAR = 38,                            // "{"
        S_RCPAR = 39,                            // "}"
        S_EOL = 40,                              // "end-of-line"
        S_STRING = 41,                           // STRING
        S_ESCAPED_STRING = 42,                   // ESCAPED_STRING
        S_CHAR = 43,                             // CHAR
        S_FLOAT_NUMBER = 44,                     // FLOAT_NUMBER
        S_INT_NUMBER = 45,                       // INT_NUMBER
        S_YYACCEPT = 46,                         // $accept
        S_sdc_commands = 47,                     // sdc_commands
        S_cmd_create_clock = 48,                 // cmd_create_clock
        S_cmd_set_input_delay = 49,              // cmd_set_input_delay
        S_cmd_set_output_delay = 50,             // cmd_set_output_delay
        S_cmd_set_clock_groups = 51,             // cmd_set_clock_groups
        S_cmd_set_false_path = 52,               // cmd_set_false_path
        S_cmd_set_max_delay = 53,                // cmd_set_max_delay
        S_cmd_set_min_delay = 54,                // cmd_set_min_delay
        S_cmd_set_multicycle_path = 55,          // cmd_set_multicycle_path
        S_cmd_set_clock_uncertainty = 56,        // cmd_set_clock_uncertainty
        S_cmd_set_clock_latency = 57,            // cmd_set_clock_latency
        S_cmd_set_disable_timing = 58,           // cmd_set_disable_timing
        S_cmd_set_timing_derate = 59,            // cmd_set_timing_derate
        S_cmd_get_ports = 60,                    // cmd_get_ports
        S_cmd_get_clocks = 61,                   // cmd_get_clocks
        S_cmd_get_cells = 62,                    // cmd_get_cells
        S_cmd_get_pins = 63,                     // cmd_get_pins
        S_stringGroup = 64,                      // stringGroup
        S_string = 65,                           // string
        S_number = 66,                           // number
        S_float_number = 67,                     // float_number
        S_int_number = 68                        // int_number
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
      case symbol_kind::S_cmd_create_clock: // cmd_create_clock
        value.move< CreateClock > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_groups: // cmd_set_clock_groups
        value.move< SetClockGroups > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_latency: // cmd_set_clock_latency
        value.move< SetClockLatency > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_uncertainty: // cmd_set_clock_uncertainty
        value.move< SetClockUncertainty > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_set_disable_timing: // cmd_set_disable_timing
        value.move< SetDisableTiming > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_set_false_path: // cmd_set_false_path
        value.move< SetFalsePath > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_set_input_delay: // cmd_set_input_delay
      case symbol_kind::S_cmd_set_output_delay: // cmd_set_output_delay
        value.move< SetIoDelay > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_set_max_delay: // cmd_set_max_delay
      case symbol_kind::S_cmd_set_min_delay: // cmd_set_min_delay
        value.move< SetMinMaxDelay > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_set_multicycle_path: // cmd_set_multicycle_path
        value.move< SetMulticyclePath > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_set_timing_derate: // cmd_set_timing_derate
        value.move< SetTimingDerate > (std::move (that.value));
        break;

      case symbol_kind::S_cmd_get_ports: // cmd_get_ports
      case symbol_kind::S_cmd_get_clocks: // cmd_get_clocks
      case symbol_kind::S_cmd_get_cells: // cmd_get_cells
      case symbol_kind::S_cmd_get_pins: // cmd_get_pins
      case symbol_kind::S_stringGroup: // stringGroup
        value.move< StringGroup > (std::move (that.value));
        break;

      case symbol_kind::S_FLOAT_NUMBER: // FLOAT_NUMBER
      case symbol_kind::S_number: // number
      case symbol_kind::S_float_number: // float_number
        value.move< float > (std::move (that.value));
        break;

      case symbol_kind::S_INT_NUMBER: // INT_NUMBER
      case symbol_kind::S_int_number: // int_number
        value.move< int > (std::move (that.value));
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ESCAPED_STRING: // ESCAPED_STRING
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_string: // string
        value.move< std::string > (std::move (that.value));
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
      basic_symbol (typename Base::kind_type t, CreateClock&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const CreateClock& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SetClockGroups&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SetClockGroups& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SetClockLatency&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SetClockLatency& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SetClockUncertainty&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SetClockUncertainty& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SetDisableTiming&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SetDisableTiming& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SetFalsePath&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SetFalsePath& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SetIoDelay&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SetIoDelay& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SetMinMaxDelay&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SetMinMaxDelay& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SetMulticyclePath&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SetMulticyclePath& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, SetTimingDerate&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const SetTimingDerate& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, StringGroup&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const StringGroup& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, float&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const float& v)
        : Base (t)
        , value (v)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, int&& v)
        : Base (t)
        , value (std::move (v))
      {}
#else
      basic_symbol (typename Base::kind_type t, const int& v)
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
      case symbol_kind::S_cmd_create_clock: // cmd_create_clock
        value.template destroy< CreateClock > ();
        break;

      case symbol_kind::S_cmd_set_clock_groups: // cmd_set_clock_groups
        value.template destroy< SetClockGroups > ();
        break;

      case symbol_kind::S_cmd_set_clock_latency: // cmd_set_clock_latency
        value.template destroy< SetClockLatency > ();
        break;

      case symbol_kind::S_cmd_set_clock_uncertainty: // cmd_set_clock_uncertainty
        value.template destroy< SetClockUncertainty > ();
        break;

      case symbol_kind::S_cmd_set_disable_timing: // cmd_set_disable_timing
        value.template destroy< SetDisableTiming > ();
        break;

      case symbol_kind::S_cmd_set_false_path: // cmd_set_false_path
        value.template destroy< SetFalsePath > ();
        break;

      case symbol_kind::S_cmd_set_input_delay: // cmd_set_input_delay
      case symbol_kind::S_cmd_set_output_delay: // cmd_set_output_delay
        value.template destroy< SetIoDelay > ();
        break;

      case symbol_kind::S_cmd_set_max_delay: // cmd_set_max_delay
      case symbol_kind::S_cmd_set_min_delay: // cmd_set_min_delay
        value.template destroy< SetMinMaxDelay > ();
        break;

      case symbol_kind::S_cmd_set_multicycle_path: // cmd_set_multicycle_path
        value.template destroy< SetMulticyclePath > ();
        break;

      case symbol_kind::S_cmd_set_timing_derate: // cmd_set_timing_derate
        value.template destroy< SetTimingDerate > ();
        break;

      case symbol_kind::S_cmd_get_ports: // cmd_get_ports
      case symbol_kind::S_cmd_get_clocks: // cmd_get_clocks
      case symbol_kind::S_cmd_get_cells: // cmd_get_cells
      case symbol_kind::S_cmd_get_pins: // cmd_get_pins
      case symbol_kind::S_stringGroup: // stringGroup
        value.template destroy< StringGroup > ();
        break;

      case symbol_kind::S_FLOAT_NUMBER: // FLOAT_NUMBER
      case symbol_kind::S_number: // number
      case symbol_kind::S_float_number: // float_number
        value.template destroy< float > ();
        break;

      case symbol_kind::S_INT_NUMBER: // INT_NUMBER
      case symbol_kind::S_int_number: // int_number
        value.template destroy< int > ();
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ESCAPED_STRING: // ESCAPED_STRING
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_string: // string
        value.template destroy< std::string > ();
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
        SDCPARSE__ASSERT (tok == token::TOKEN_EOF
                   || (token::TOKEN_SDCPARSE_error <= tok && tok <= token::TOKEN_EOL));
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, float v)
        : super_type (token_kind_type (tok), std::move (v))
#else
      symbol_type (int tok, const float& v)
        : super_type (token_kind_type (tok), v)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        SDCPARSE__ASSERT (tok == token::TOKEN_FLOAT_NUMBER);
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, int v)
        : super_type (token_kind_type (tok), std::move (v))
#else
      symbol_type (int tok, const int& v)
        : super_type (token_kind_type (tok), v)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        SDCPARSE__ASSERT (tok == token::TOKEN_INT_NUMBER);
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
        SDCPARSE__ASSERT ((token::TOKEN_STRING <= tok && tok <= token::TOKEN_CHAR));
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

#if SDCPARSE_DEBUG
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
      make_SDCPARSE_error ()
      {
        return symbol_type (token::TOKEN_SDCPARSE_error);
      }
#else
      static
      symbol_type
      make_SDCPARSE_error ()
      {
        return symbol_type (token::TOKEN_SDCPARSE_error);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SDCPARSE_UNDEF ()
      {
        return symbol_type (token::TOKEN_SDCPARSE_UNDEF);
      }
#else
      static
      symbol_type
      make_SDCPARSE_UNDEF ()
      {
        return symbol_type (token::TOKEN_SDCPARSE_UNDEF);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_CREATE_CLOCK ()
      {
        return symbol_type (token::TOKEN_CMD_CREATE_CLOCK);
      }
#else
      static
      symbol_type
      make_CMD_CREATE_CLOCK ()
      {
        return symbol_type (token::TOKEN_CMD_CREATE_CLOCK);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_CLOCK_GROUPS ()
      {
        return symbol_type (token::TOKEN_CMD_SET_CLOCK_GROUPS);
      }
#else
      static
      symbol_type
      make_CMD_SET_CLOCK_GROUPS ()
      {
        return symbol_type (token::TOKEN_CMD_SET_CLOCK_GROUPS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_FALSE_PATH ()
      {
        return symbol_type (token::TOKEN_CMD_SET_FALSE_PATH);
      }
#else
      static
      symbol_type
      make_CMD_SET_FALSE_PATH ()
      {
        return symbol_type (token::TOKEN_CMD_SET_FALSE_PATH);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_MAX_DELAY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_MAX_DELAY);
      }
#else
      static
      symbol_type
      make_CMD_SET_MAX_DELAY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_MAX_DELAY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_MIN_DELAY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_MIN_DELAY);
      }
#else
      static
      symbol_type
      make_CMD_SET_MIN_DELAY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_MIN_DELAY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_MULTICYCLE_PATH ()
      {
        return symbol_type (token::TOKEN_CMD_SET_MULTICYCLE_PATH);
      }
#else
      static
      symbol_type
      make_CMD_SET_MULTICYCLE_PATH ()
      {
        return symbol_type (token::TOKEN_CMD_SET_MULTICYCLE_PATH);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_INPUT_DELAY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_INPUT_DELAY);
      }
#else
      static
      symbol_type
      make_CMD_SET_INPUT_DELAY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_INPUT_DELAY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_OUTPUT_DELAY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_OUTPUT_DELAY);
      }
#else
      static
      symbol_type
      make_CMD_SET_OUTPUT_DELAY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_OUTPUT_DELAY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_CLOCK_UNCERTAINTY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_CLOCK_UNCERTAINTY);
      }
#else
      static
      symbol_type
      make_CMD_SET_CLOCK_UNCERTAINTY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_CLOCK_UNCERTAINTY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_CLOCK_LATENCY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_CLOCK_LATENCY);
      }
#else
      static
      symbol_type
      make_CMD_SET_CLOCK_LATENCY ()
      {
        return symbol_type (token::TOKEN_CMD_SET_CLOCK_LATENCY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_DISABLE_TIMING ()
      {
        return symbol_type (token::TOKEN_CMD_SET_DISABLE_TIMING);
      }
#else
      static
      symbol_type
      make_CMD_SET_DISABLE_TIMING ()
      {
        return symbol_type (token::TOKEN_CMD_SET_DISABLE_TIMING);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_SET_TIMING_DERATE ()
      {
        return symbol_type (token::TOKEN_CMD_SET_TIMING_DERATE);
      }
#else
      static
      symbol_type
      make_CMD_SET_TIMING_DERATE ()
      {
        return symbol_type (token::TOKEN_CMD_SET_TIMING_DERATE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_GET_PORTS ()
      {
        return symbol_type (token::TOKEN_CMD_GET_PORTS);
      }
#else
      static
      symbol_type
      make_CMD_GET_PORTS ()
      {
        return symbol_type (token::TOKEN_CMD_GET_PORTS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_GET_CLOCKS ()
      {
        return symbol_type (token::TOKEN_CMD_GET_CLOCKS);
      }
#else
      static
      symbol_type
      make_CMD_GET_CLOCKS ()
      {
        return symbol_type (token::TOKEN_CMD_GET_CLOCKS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_GET_CELLS ()
      {
        return symbol_type (token::TOKEN_CMD_GET_CELLS);
      }
#else
      static
      symbol_type
      make_CMD_GET_CELLS ()
      {
        return symbol_type (token::TOKEN_CMD_GET_CELLS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CMD_GET_PINS ()
      {
        return symbol_type (token::TOKEN_CMD_GET_PINS);
      }
#else
      static
      symbol_type
      make_CMD_GET_PINS ()
      {
        return symbol_type (token::TOKEN_CMD_GET_PINS);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_PERIOD ()
      {
        return symbol_type (token::TOKEN_ARG_PERIOD);
      }
#else
      static
      symbol_type
      make_ARG_PERIOD ()
      {
        return symbol_type (token::TOKEN_ARG_PERIOD);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_WAVEFORM ()
      {
        return symbol_type (token::TOKEN_ARG_WAVEFORM);
      }
#else
      static
      symbol_type
      make_ARG_WAVEFORM ()
      {
        return symbol_type (token::TOKEN_ARG_WAVEFORM);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_NAME ()
      {
        return symbol_type (token::TOKEN_ARG_NAME);
      }
#else
      static
      symbol_type
      make_ARG_NAME ()
      {
        return symbol_type (token::TOKEN_ARG_NAME);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_EXCLUSIVE ()
      {
        return symbol_type (token::TOKEN_ARG_EXCLUSIVE);
      }
#else
      static
      symbol_type
      make_ARG_EXCLUSIVE ()
      {
        return symbol_type (token::TOKEN_ARG_EXCLUSIVE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_GROUP ()
      {
        return symbol_type (token::TOKEN_ARG_GROUP);
      }
#else
      static
      symbol_type
      make_ARG_GROUP ()
      {
        return symbol_type (token::TOKEN_ARG_GROUP);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_FROM ()
      {
        return symbol_type (token::TOKEN_ARG_FROM);
      }
#else
      static
      symbol_type
      make_ARG_FROM ()
      {
        return symbol_type (token::TOKEN_ARG_FROM);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_TO ()
      {
        return symbol_type (token::TOKEN_ARG_TO);
      }
#else
      static
      symbol_type
      make_ARG_TO ()
      {
        return symbol_type (token::TOKEN_ARG_TO);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_SETUP ()
      {
        return symbol_type (token::TOKEN_ARG_SETUP);
      }
#else
      static
      symbol_type
      make_ARG_SETUP ()
      {
        return symbol_type (token::TOKEN_ARG_SETUP);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_HOLD ()
      {
        return symbol_type (token::TOKEN_ARG_HOLD);
      }
#else
      static
      symbol_type
      make_ARG_HOLD ()
      {
        return symbol_type (token::TOKEN_ARG_HOLD);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_CLOCK ()
      {
        return symbol_type (token::TOKEN_ARG_CLOCK);
      }
#else
      static
      symbol_type
      make_ARG_CLOCK ()
      {
        return symbol_type (token::TOKEN_ARG_CLOCK);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_MAX ()
      {
        return symbol_type (token::TOKEN_ARG_MAX);
      }
#else
      static
      symbol_type
      make_ARG_MAX ()
      {
        return symbol_type (token::TOKEN_ARG_MAX);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_MIN ()
      {
        return symbol_type (token::TOKEN_ARG_MIN);
      }
#else
      static
      symbol_type
      make_ARG_MIN ()
      {
        return symbol_type (token::TOKEN_ARG_MIN);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_EARLY ()
      {
        return symbol_type (token::TOKEN_ARG_EARLY);
      }
#else
      static
      symbol_type
      make_ARG_EARLY ()
      {
        return symbol_type (token::TOKEN_ARG_EARLY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_LATE ()
      {
        return symbol_type (token::TOKEN_ARG_LATE);
      }
#else
      static
      symbol_type
      make_ARG_LATE ()
      {
        return symbol_type (token::TOKEN_ARG_LATE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_CELL_DELAY ()
      {
        return symbol_type (token::TOKEN_ARG_CELL_DELAY);
      }
#else
      static
      symbol_type
      make_ARG_CELL_DELAY ()
      {
        return symbol_type (token::TOKEN_ARG_CELL_DELAY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_NET_DELAY ()
      {
        return symbol_type (token::TOKEN_ARG_NET_DELAY);
      }
#else
      static
      symbol_type
      make_ARG_NET_DELAY ()
      {
        return symbol_type (token::TOKEN_ARG_NET_DELAY);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ARG_SOURCE ()
      {
        return symbol_type (token::TOKEN_ARG_SOURCE);
      }
#else
      static
      symbol_type
      make_ARG_SOURCE ()
      {
        return symbol_type (token::TOKEN_ARG_SOURCE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LSPAR ()
      {
        return symbol_type (token::TOKEN_LSPAR);
      }
#else
      static
      symbol_type
      make_LSPAR ()
      {
        return symbol_type (token::TOKEN_LSPAR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RSPAR ()
      {
        return symbol_type (token::TOKEN_RSPAR);
      }
#else
      static
      symbol_type
      make_RSPAR ()
      {
        return symbol_type (token::TOKEN_RSPAR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LCPAR ()
      {
        return symbol_type (token::TOKEN_LCPAR);
      }
#else
      static
      symbol_type
      make_LCPAR ()
      {
        return symbol_type (token::TOKEN_LCPAR);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RCPAR ()
      {
        return symbol_type (token::TOKEN_RCPAR);
      }
#else
      static
      symbol_type
      make_RCPAR ()
      {
        return symbol_type (token::TOKEN_RCPAR);
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
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ESCAPED_STRING (std::string v)
      {
        return symbol_type (token::TOKEN_ESCAPED_STRING, std::move (v));
      }
#else
      static
      symbol_type
      make_ESCAPED_STRING (const std::string& v)
      {
        return symbol_type (token::TOKEN_ESCAPED_STRING, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR (std::string v)
      {
        return symbol_type (token::TOKEN_CHAR, std::move (v));
      }
#else
      static
      symbol_type
      make_CHAR (const std::string& v)
      {
        return symbol_type (token::TOKEN_CHAR, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOAT_NUMBER (float v)
      {
        return symbol_type (token::TOKEN_FLOAT_NUMBER, std::move (v));
      }
#else
      static
      symbol_type
      make_FLOAT_NUMBER (const float& v)
      {
        return symbol_type (token::TOKEN_FLOAT_NUMBER, v);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT_NUMBER (int v)
      {
        return symbol_type (token::TOKEN_INT_NUMBER, std::move (v));
      }
#else
      static
      symbol_type
      make_INT_NUMBER (const int& v)
      {
        return symbol_type (token::TOKEN_INT_NUMBER, v);
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
    typedef unsigned char state_type;

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
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const signed char yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const unsigned char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const unsigned char yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const signed char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if SDCPARSE_DEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
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
      yylast_ = 391,     ///< Last index in yytable_.
      yynnts_ = 23,  ///< Number of nonterminal symbols.
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
    };
    // Last valid token kind.
    const int code_max = 300;

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
      case symbol_kind::S_cmd_create_clock: // cmd_create_clock
        value.copy< CreateClock > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_groups: // cmd_set_clock_groups
        value.copy< SetClockGroups > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_latency: // cmd_set_clock_latency
        value.copy< SetClockLatency > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_uncertainty: // cmd_set_clock_uncertainty
        value.copy< SetClockUncertainty > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_disable_timing: // cmd_set_disable_timing
        value.copy< SetDisableTiming > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_false_path: // cmd_set_false_path
        value.copy< SetFalsePath > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_input_delay: // cmd_set_input_delay
      case symbol_kind::S_cmd_set_output_delay: // cmd_set_output_delay
        value.copy< SetIoDelay > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_max_delay: // cmd_set_max_delay
      case symbol_kind::S_cmd_set_min_delay: // cmd_set_min_delay
        value.copy< SetMinMaxDelay > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_multicycle_path: // cmd_set_multicycle_path
        value.copy< SetMulticyclePath > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_timing_derate: // cmd_set_timing_derate
        value.copy< SetTimingDerate > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_get_ports: // cmd_get_ports
      case symbol_kind::S_cmd_get_clocks: // cmd_get_clocks
      case symbol_kind::S_cmd_get_cells: // cmd_get_cells
      case symbol_kind::S_cmd_get_pins: // cmd_get_pins
      case symbol_kind::S_stringGroup: // stringGroup
        value.copy< StringGroup > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FLOAT_NUMBER: // FLOAT_NUMBER
      case symbol_kind::S_number: // number
      case symbol_kind::S_float_number: // float_number
        value.copy< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT_NUMBER: // INT_NUMBER
      case symbol_kind::S_int_number: // int_number
        value.copy< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ESCAPED_STRING: // ESCAPED_STRING
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_string: // string
        value.copy< std::string > (YY_MOVE (that.value));
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
      case symbol_kind::S_cmd_create_clock: // cmd_create_clock
        value.move< CreateClock > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_set_clock_groups: // cmd_set_clock_groups
        value.move< SetClockGroups > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_set_clock_latency: // cmd_set_clock_latency
        value.move< SetClockLatency > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_set_clock_uncertainty: // cmd_set_clock_uncertainty
        value.move< SetClockUncertainty > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_set_disable_timing: // cmd_set_disable_timing
        value.move< SetDisableTiming > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_set_false_path: // cmd_set_false_path
        value.move< SetFalsePath > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_set_input_delay: // cmd_set_input_delay
      case symbol_kind::S_cmd_set_output_delay: // cmd_set_output_delay
        value.move< SetIoDelay > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_set_max_delay: // cmd_set_max_delay
      case symbol_kind::S_cmd_set_min_delay: // cmd_set_min_delay
        value.move< SetMinMaxDelay > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_set_multicycle_path: // cmd_set_multicycle_path
        value.move< SetMulticyclePath > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_set_timing_derate: // cmd_set_timing_derate
        value.move< SetTimingDerate > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_cmd_get_ports: // cmd_get_ports
      case symbol_kind::S_cmd_get_clocks: // cmd_get_clocks
      case symbol_kind::S_cmd_get_cells: // cmd_get_cells
      case symbol_kind::S_cmd_get_pins: // cmd_get_pins
      case symbol_kind::S_stringGroup: // stringGroup
        value.move< StringGroup > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_FLOAT_NUMBER: // FLOAT_NUMBER
      case symbol_kind::S_number: // number
      case symbol_kind::S_float_number: // float_number
        value.move< float > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_INT_NUMBER: // INT_NUMBER
      case symbol_kind::S_int_number: // int_number
        value.move< int > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ESCAPED_STRING: // ESCAPED_STRING
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_string: // string
        value.move< std::string > (YY_MOVE (s.value));
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


#line 34 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
} // sdcparse
#line 2540 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.hpp"




#endif // !YY_SDCPARSE_HOME_NOURAN_OPENFPGA_BUILD_VTR_VERILOG_TO_ROUTING_LIBS_EXTERNAL_LIBSDCPARSE_SDC_PARSER_GEN_HPP_INCLUDED
