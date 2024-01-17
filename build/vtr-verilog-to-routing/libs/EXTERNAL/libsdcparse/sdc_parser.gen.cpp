// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

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

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// "%code top" blocks.
#line 74 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"

    #include "sdc_lexer.hpp"
    //Bison calls sdcparse_lex() to get the next token.
    //We use the Lexer class as the interface to the lexer, so we
    //re-defined the function to tell Bison how to get the next token.
    static sdcparse::Parser::symbol_type sdcparse_lex(sdcparse::Lexer& lexer) {
        return lexer.next_token();
    }

#line 49 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"

// Take the name prefix into account.
#define yylex   sdcparse_lex

// First part of user prologue.
#line 84 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"


#include <stdio.h>
#include "assert.h"

#include "sdcparse.hpp"
#include "sdc_common.hpp"
#include "sdc_error.hpp"

using namespace sdcparse;


#line 68 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"


#include "sdc_parser.gen.hpp"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if SDCPARSE_DEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !SDCPARSE_DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !SDCPARSE_DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 34 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
namespace sdcparse {
#line 147 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"

  /// Build a parser object.
  Parser::Parser (Lexer& lexer_yyarg, Callback& callback_yyarg)
#if SDCPARSE_DEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      lexer (lexer_yyarg),
      callback (callback_yyarg)
  {}

  Parser::~Parser ()
  {}

  Parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  Parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  Parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  Parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  Parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  Parser::symbol_kind_type
  Parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  Parser::stack_symbol_type::stack_symbol_type ()
  {}

  Parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_cmd_create_clock: // cmd_create_clock
        value.YY_MOVE_OR_COPY< CreateClock > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_groups: // cmd_set_clock_groups
        value.YY_MOVE_OR_COPY< SetClockGroups > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_latency: // cmd_set_clock_latency
        value.YY_MOVE_OR_COPY< SetClockLatency > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_uncertainty: // cmd_set_clock_uncertainty
        value.YY_MOVE_OR_COPY< SetClockUncertainty > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_disable_timing: // cmd_set_disable_timing
        value.YY_MOVE_OR_COPY< SetDisableTiming > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_false_path: // cmd_set_false_path
        value.YY_MOVE_OR_COPY< SetFalsePath > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_input_delay: // cmd_set_input_delay
      case symbol_kind::S_cmd_set_output_delay: // cmd_set_output_delay
        value.YY_MOVE_OR_COPY< SetIoDelay > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_max_delay: // cmd_set_max_delay
      case symbol_kind::S_cmd_set_min_delay: // cmd_set_min_delay
        value.YY_MOVE_OR_COPY< SetMinMaxDelay > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_multicycle_path: // cmd_set_multicycle_path
        value.YY_MOVE_OR_COPY< SetMulticyclePath > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_timing_derate: // cmd_set_timing_derate
        value.YY_MOVE_OR_COPY< SetTimingDerate > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_get_ports: // cmd_get_ports
      case symbol_kind::S_cmd_get_clocks: // cmd_get_clocks
      case symbol_kind::S_cmd_get_cells: // cmd_get_cells
      case symbol_kind::S_cmd_get_pins: // cmd_get_pins
      case symbol_kind::S_stringGroup: // stringGroup
        value.YY_MOVE_OR_COPY< StringGroup > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FLOAT_NUMBER: // FLOAT_NUMBER
      case symbol_kind::S_number: // number
      case symbol_kind::S_float_number: // float_number
        value.YY_MOVE_OR_COPY< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT_NUMBER: // INT_NUMBER
      case symbol_kind::S_int_number: // int_number
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ESCAPED_STRING: // ESCAPED_STRING
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_string: // string
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  Parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.kind ())
    {
      case symbol_kind::S_cmd_create_clock: // cmd_create_clock
        value.move< CreateClock > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_groups: // cmd_set_clock_groups
        value.move< SetClockGroups > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_latency: // cmd_set_clock_latency
        value.move< SetClockLatency > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_clock_uncertainty: // cmd_set_clock_uncertainty
        value.move< SetClockUncertainty > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_disable_timing: // cmd_set_disable_timing
        value.move< SetDisableTiming > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_false_path: // cmd_set_false_path
        value.move< SetFalsePath > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_input_delay: // cmd_set_input_delay
      case symbol_kind::S_cmd_set_output_delay: // cmd_set_output_delay
        value.move< SetIoDelay > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_max_delay: // cmd_set_max_delay
      case symbol_kind::S_cmd_set_min_delay: // cmd_set_min_delay
        value.move< SetMinMaxDelay > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_multicycle_path: // cmd_set_multicycle_path
        value.move< SetMulticyclePath > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_set_timing_derate: // cmd_set_timing_derate
        value.move< SetTimingDerate > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_cmd_get_ports: // cmd_get_ports
      case symbol_kind::S_cmd_get_clocks: // cmd_get_clocks
      case symbol_kind::S_cmd_get_cells: // cmd_get_cells
      case symbol_kind::S_cmd_get_pins: // cmd_get_pins
      case symbol_kind::S_stringGroup: // stringGroup
        value.move< StringGroup > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FLOAT_NUMBER: // FLOAT_NUMBER
      case symbol_kind::S_number: // number
      case symbol_kind::S_float_number: // float_number
        value.move< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT_NUMBER: // INT_NUMBER
      case symbol_kind::S_int_number: // int_number
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ESCAPED_STRING: // ESCAPED_STRING
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_string: // string
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_cmd_create_clock: // cmd_create_clock
        value.copy< CreateClock > (that.value);
        break;

      case symbol_kind::S_cmd_set_clock_groups: // cmd_set_clock_groups
        value.copy< SetClockGroups > (that.value);
        break;

      case symbol_kind::S_cmd_set_clock_latency: // cmd_set_clock_latency
        value.copy< SetClockLatency > (that.value);
        break;

      case symbol_kind::S_cmd_set_clock_uncertainty: // cmd_set_clock_uncertainty
        value.copy< SetClockUncertainty > (that.value);
        break;

      case symbol_kind::S_cmd_set_disable_timing: // cmd_set_disable_timing
        value.copy< SetDisableTiming > (that.value);
        break;

      case symbol_kind::S_cmd_set_false_path: // cmd_set_false_path
        value.copy< SetFalsePath > (that.value);
        break;

      case symbol_kind::S_cmd_set_input_delay: // cmd_set_input_delay
      case symbol_kind::S_cmd_set_output_delay: // cmd_set_output_delay
        value.copy< SetIoDelay > (that.value);
        break;

      case symbol_kind::S_cmd_set_max_delay: // cmd_set_max_delay
      case symbol_kind::S_cmd_set_min_delay: // cmd_set_min_delay
        value.copy< SetMinMaxDelay > (that.value);
        break;

      case symbol_kind::S_cmd_set_multicycle_path: // cmd_set_multicycle_path
        value.copy< SetMulticyclePath > (that.value);
        break;

      case symbol_kind::S_cmd_set_timing_derate: // cmd_set_timing_derate
        value.copy< SetTimingDerate > (that.value);
        break;

      case symbol_kind::S_cmd_get_ports: // cmd_get_ports
      case symbol_kind::S_cmd_get_clocks: // cmd_get_clocks
      case symbol_kind::S_cmd_get_cells: // cmd_get_cells
      case symbol_kind::S_cmd_get_pins: // cmd_get_pins
      case symbol_kind::S_stringGroup: // stringGroup
        value.copy< StringGroup > (that.value);
        break;

      case symbol_kind::S_FLOAT_NUMBER: // FLOAT_NUMBER
      case symbol_kind::S_number: // number
      case symbol_kind::S_float_number: // float_number
        value.copy< float > (that.value);
        break;

      case symbol_kind::S_INT_NUMBER: // INT_NUMBER
      case symbol_kind::S_int_number: // int_number
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ESCAPED_STRING: // ESCAPED_STRING
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_string: // string
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_cmd_create_clock: // cmd_create_clock
        value.move< CreateClock > (that.value);
        break;

      case symbol_kind::S_cmd_set_clock_groups: // cmd_set_clock_groups
        value.move< SetClockGroups > (that.value);
        break;

      case symbol_kind::S_cmd_set_clock_latency: // cmd_set_clock_latency
        value.move< SetClockLatency > (that.value);
        break;

      case symbol_kind::S_cmd_set_clock_uncertainty: // cmd_set_clock_uncertainty
        value.move< SetClockUncertainty > (that.value);
        break;

      case symbol_kind::S_cmd_set_disable_timing: // cmd_set_disable_timing
        value.move< SetDisableTiming > (that.value);
        break;

      case symbol_kind::S_cmd_set_false_path: // cmd_set_false_path
        value.move< SetFalsePath > (that.value);
        break;

      case symbol_kind::S_cmd_set_input_delay: // cmd_set_input_delay
      case symbol_kind::S_cmd_set_output_delay: // cmd_set_output_delay
        value.move< SetIoDelay > (that.value);
        break;

      case symbol_kind::S_cmd_set_max_delay: // cmd_set_max_delay
      case symbol_kind::S_cmd_set_min_delay: // cmd_set_min_delay
        value.move< SetMinMaxDelay > (that.value);
        break;

      case symbol_kind::S_cmd_set_multicycle_path: // cmd_set_multicycle_path
        value.move< SetMulticyclePath > (that.value);
        break;

      case symbol_kind::S_cmd_set_timing_derate: // cmd_set_timing_derate
        value.move< SetTimingDerate > (that.value);
        break;

      case symbol_kind::S_cmd_get_ports: // cmd_get_ports
      case symbol_kind::S_cmd_get_clocks: // cmd_get_clocks
      case symbol_kind::S_cmd_get_cells: // cmd_get_cells
      case symbol_kind::S_cmd_get_pins: // cmd_get_pins
      case symbol_kind::S_stringGroup: // stringGroup
        value.move< StringGroup > (that.value);
        break;

      case symbol_kind::S_FLOAT_NUMBER: // FLOAT_NUMBER
      case symbol_kind::S_number: // number
      case symbol_kind::S_float_number: // float_number
        value.move< float > (that.value);
        break;

      case symbol_kind::S_INT_NUMBER: // INT_NUMBER
      case symbol_kind::S_int_number: // int_number
        value.move< int > (that.value);
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ESCAPED_STRING: // ESCAPED_STRING
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_string: // string
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if SDCPARSE_DEBUG
  template <typename Base>
  void
  Parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  Parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  Parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  Parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if SDCPARSE_DEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // SDCPARSE_DEBUG

  Parser::state_type
  Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  Parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  Parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::operator() ()
  {
    return parse ();
  }

  int
  Parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (lexer));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_cmd_create_clock: // cmd_create_clock
        yylhs.value.emplace< CreateClock > ();
        break;

      case symbol_kind::S_cmd_set_clock_groups: // cmd_set_clock_groups
        yylhs.value.emplace< SetClockGroups > ();
        break;

      case symbol_kind::S_cmd_set_clock_latency: // cmd_set_clock_latency
        yylhs.value.emplace< SetClockLatency > ();
        break;

      case symbol_kind::S_cmd_set_clock_uncertainty: // cmd_set_clock_uncertainty
        yylhs.value.emplace< SetClockUncertainty > ();
        break;

      case symbol_kind::S_cmd_set_disable_timing: // cmd_set_disable_timing
        yylhs.value.emplace< SetDisableTiming > ();
        break;

      case symbol_kind::S_cmd_set_false_path: // cmd_set_false_path
        yylhs.value.emplace< SetFalsePath > ();
        break;

      case symbol_kind::S_cmd_set_input_delay: // cmd_set_input_delay
      case symbol_kind::S_cmd_set_output_delay: // cmd_set_output_delay
        yylhs.value.emplace< SetIoDelay > ();
        break;

      case symbol_kind::S_cmd_set_max_delay: // cmd_set_max_delay
      case symbol_kind::S_cmd_set_min_delay: // cmd_set_min_delay
        yylhs.value.emplace< SetMinMaxDelay > ();
        break;

      case symbol_kind::S_cmd_set_multicycle_path: // cmd_set_multicycle_path
        yylhs.value.emplace< SetMulticyclePath > ();
        break;

      case symbol_kind::S_cmd_set_timing_derate: // cmd_set_timing_derate
        yylhs.value.emplace< SetTimingDerate > ();
        break;

      case symbol_kind::S_cmd_get_ports: // cmd_get_ports
      case symbol_kind::S_cmd_get_clocks: // cmd_get_clocks
      case symbol_kind::S_cmd_get_cells: // cmd_get_cells
      case symbol_kind::S_cmd_get_pins: // cmd_get_pins
      case symbol_kind::S_stringGroup: // stringGroup
        yylhs.value.emplace< StringGroup > ();
        break;

      case symbol_kind::S_FLOAT_NUMBER: // FLOAT_NUMBER
      case symbol_kind::S_number: // number
      case symbol_kind::S_float_number: // float_number
        yylhs.value.emplace< float > ();
        break;

      case symbol_kind::S_INT_NUMBER: // INT_NUMBER
      case symbol_kind::S_int_number: // int_number
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ESCAPED_STRING: // ESCAPED_STRING
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_string: // string
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // sdc_commands: %empty
#line 173 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { }
#line 870 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 3: // sdc_commands: sdc_commands cmd_create_clock "end-of-line"
#line 174 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_create_clock(callback, lexer, yystack_[1].value.as < CreateClock > ()); }
#line 876 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 4: // sdc_commands: sdc_commands cmd_set_input_delay "end-of-line"
#line 175 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_io_delay(callback, lexer, yystack_[1].value.as < SetIoDelay > ()); }
#line 882 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 5: // sdc_commands: sdc_commands cmd_set_output_delay "end-of-line"
#line 176 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_io_delay(callback, lexer, yystack_[1].value.as < SetIoDelay > ()); }
#line 888 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 6: // sdc_commands: sdc_commands cmd_set_clock_groups "end-of-line"
#line 177 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_clock_groups(callback, lexer, yystack_[1].value.as < SetClockGroups > ()); }
#line 894 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 7: // sdc_commands: sdc_commands cmd_set_false_path "end-of-line"
#line 178 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_false_path(callback, lexer, yystack_[1].value.as < SetFalsePath > ()); }
#line 900 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 8: // sdc_commands: sdc_commands cmd_set_max_delay "end-of-line"
#line 179 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_min_max_delay(callback, lexer, yystack_[1].value.as < SetMinMaxDelay > ()); }
#line 906 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 9: // sdc_commands: sdc_commands cmd_set_min_delay "end-of-line"
#line 180 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_min_max_delay(callback, lexer, yystack_[1].value.as < SetMinMaxDelay > ()); }
#line 912 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 10: // sdc_commands: sdc_commands cmd_set_multicycle_path "end-of-line"
#line 181 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_multicycle_path(callback, lexer, yystack_[1].value.as < SetMulticyclePath > ()); }
#line 918 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 11: // sdc_commands: sdc_commands cmd_set_clock_uncertainty "end-of-line"
#line 182 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_clock_uncertainty(callback, lexer, yystack_[1].value.as < SetClockUncertainty > ()); }
#line 924 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 12: // sdc_commands: sdc_commands cmd_set_clock_latency "end-of-line"
#line 183 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_clock_latency(callback, lexer, yystack_[1].value.as < SetClockLatency > ()); }
#line 930 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 13: // sdc_commands: sdc_commands cmd_set_disable_timing "end-of-line"
#line 184 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_disable_timing(callback, lexer, yystack_[1].value.as < SetDisableTiming > ()); }
#line 936 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 14: // sdc_commands: sdc_commands cmd_set_timing_derate "end-of-line"
#line 185 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { callback.lineno(lexer.lineno()-1); add_sdc_set_timing_derate(callback, lexer, yystack_[1].value.as < SetTimingDerate > ()); }
#line 942 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 15: // sdc_commands: sdc_commands "end-of-line"
#line 186 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { /* Eat stray EOL symbols */ }
#line 948 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 16: // cmd_create_clock: "create_clock"
#line 189 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < CreateClock > () = CreateClock(); }
#line 954 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 17: // cmd_create_clock: cmd_create_clock "-period" number
#line 190 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < CreateClock > () = yystack_[2].value.as < CreateClock > (); sdc_create_clock_set_period(callback, lexer, yylhs.value.as < CreateClock > (), yystack_[0].value.as < float > ()); }
#line 960 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 18: // cmd_create_clock: cmd_create_clock "-name" string
#line 191 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < CreateClock > () = yystack_[2].value.as < CreateClock > (); sdc_create_clock_set_name(callback, lexer, yylhs.value.as < CreateClock > (), yystack_[0].value.as < std::string > ()); }
#line 966 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 19: // cmd_create_clock: cmd_create_clock "-waveform" "{" number number "}"
#line 192 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < CreateClock > () = yystack_[5].value.as < CreateClock > (); sdc_create_clock_set_waveform(callback, lexer, yylhs.value.as < CreateClock > (), yystack_[2].value.as < float > (), yystack_[1].value.as < float > ()); }
#line 972 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 20: // cmd_create_clock: cmd_create_clock "{" stringGroup "}"
#line 193 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < CreateClock > () = yystack_[3].value.as < CreateClock > (); sdc_create_clock_add_targets(callback, lexer, yylhs.value.as < CreateClock > (), yystack_[1].value.as < StringGroup > ()); 
                                                            }
#line 979 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 21: // cmd_create_clock: cmd_create_clock string
#line 195 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < CreateClock > () = yystack_[1].value.as < CreateClock > (); sdc_create_clock_add_targets(callback, lexer, yylhs.value.as < CreateClock > (), 
                                                                        make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ())); 
                                                            }
#line 987 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 22: // cmd_set_input_delay: "set_input_delay"
#line 200 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetIoDelay > () = SetIoDelay(IoDelayType::INPUT); }
#line 993 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 23: // cmd_set_input_delay: cmd_set_input_delay "-clock" string
#line 201 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetIoDelay > () = yystack_[2].value.as < SetIoDelay > (); sdc_set_io_delay_set_clock(callback, lexer, yylhs.value.as < SetIoDelay > (), yystack_[0].value.as < std::string > ()); }
#line 999 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 24: // cmd_set_input_delay: cmd_set_input_delay "-max"
#line 202 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetIoDelay > () = yystack_[1].value.as < SetIoDelay > (); sdc_set_io_delay_set_max(callback, lexer, yylhs.value.as < SetIoDelay > ()); }
#line 1005 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 25: // cmd_set_input_delay: cmd_set_input_delay "-min"
#line 203 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetIoDelay > () = yystack_[1].value.as < SetIoDelay > (); sdc_set_io_delay_set_min(callback, lexer, yylhs.value.as < SetIoDelay > ()); }
#line 1011 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 26: // cmd_set_input_delay: cmd_set_input_delay number
#line 204 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetIoDelay > () = yystack_[1].value.as < SetIoDelay > (); sdc_set_io_delay_set_value(callback, lexer, yylhs.value.as < SetIoDelay > (), yystack_[0].value.as < float > ()); }
#line 1017 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 27: // cmd_set_input_delay: cmd_set_input_delay "[" cmd_get_ports "]"
#line 205 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                    { yylhs.value.as < SetIoDelay > () = yystack_[3].value.as < SetIoDelay > (); sdc_set_io_delay_set_ports(callback, lexer, yylhs.value.as < SetIoDelay > (), yystack_[1].value.as < StringGroup > ()); }
#line 1023 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 28: // cmd_set_output_delay: "set_output_delay"
#line 208 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { yylhs.value.as < SetIoDelay > () = SetIoDelay(IoDelayType::OUTPUT); }
#line 1029 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 29: // cmd_set_output_delay: cmd_set_output_delay "-clock" string
#line 209 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { yylhs.value.as < SetIoDelay > () = yystack_[2].value.as < SetIoDelay > (); sdc_set_io_delay_set_clock(callback, lexer, yylhs.value.as < SetIoDelay > (), yystack_[0].value.as < std::string > ()); }
#line 1035 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 30: // cmd_set_output_delay: cmd_set_output_delay "-max"
#line 210 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { yylhs.value.as < SetIoDelay > () = yystack_[1].value.as < SetIoDelay > (); sdc_set_io_delay_set_max(callback, lexer, yylhs.value.as < SetIoDelay > ()); }
#line 1041 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 31: // cmd_set_output_delay: cmd_set_output_delay "-min"
#line 211 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { yylhs.value.as < SetIoDelay > () = yystack_[1].value.as < SetIoDelay > (); sdc_set_io_delay_set_min(callback, lexer, yylhs.value.as < SetIoDelay > ()); }
#line 1047 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 32: // cmd_set_output_delay: cmd_set_output_delay number
#line 212 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                 { yylhs.value.as < SetIoDelay > () = yystack_[1].value.as < SetIoDelay > (); sdc_set_io_delay_set_value(callback, lexer, yylhs.value.as < SetIoDelay > (), yystack_[0].value.as < float > ()); }
#line 1053 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 33: // cmd_set_output_delay: cmd_set_output_delay "[" cmd_get_ports "]"
#line 213 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                     { yylhs.value.as < SetIoDelay > () = yystack_[3].value.as < SetIoDelay > (); sdc_set_io_delay_set_ports(callback, lexer, yylhs.value.as < SetIoDelay > (), yystack_[1].value.as < StringGroup > ()); }
#line 1059 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 34: // cmd_set_clock_groups: "set_clock_groups"
#line 216 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetClockGroups > () = SetClockGroups(); }
#line 1065 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 35: // cmd_set_clock_groups: cmd_set_clock_groups "-exclusive"
#line 217 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetClockGroups > () = yystack_[1].value.as < SetClockGroups > (); sdc_set_clock_groups_set_type(callback, lexer, yylhs.value.as < SetClockGroups > (), ClockGroupsType::EXCLUSIVE); }
#line 1071 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 36: // cmd_set_clock_groups: cmd_set_clock_groups "-group" "[" cmd_get_clocks "]"
#line 218 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetClockGroups > () = yystack_[4].value.as < SetClockGroups > (); sdc_set_clock_groups_add_group(callback, lexer, yylhs.value.as < SetClockGroups > (), yystack_[1].value.as < StringGroup > ()); }
#line 1077 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 37: // cmd_set_clock_groups: cmd_set_clock_groups "-group" "{" stringGroup "}"
#line 219 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetClockGroups > () = yystack_[4].value.as < SetClockGroups > (); sdc_set_clock_groups_add_group(callback, lexer, yylhs.value.as < SetClockGroups > (), yystack_[1].value.as < StringGroup > ()); }
#line 1083 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 38: // cmd_set_clock_groups: cmd_set_clock_groups "-group" string
#line 220 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetClockGroups > () = yystack_[2].value.as < SetClockGroups > (); sdc_set_clock_groups_add_group(callback, lexer, yylhs.value.as < SetClockGroups > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ())); 
                                                            }
#line 1091 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 39: // cmd_set_false_path: "set_false_path"
#line 225 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetFalsePath > () = SetFalsePath(); }
#line 1097 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 40: // cmd_set_false_path: cmd_set_false_path "-from" "[" cmd_get_clocks "]"
#line 226 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetFalsePath > () = yystack_[4].value.as < SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as < SetFalsePath > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1103 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 41: // cmd_set_false_path: cmd_set_false_path "-to" "[" cmd_get_clocks "]"
#line 227 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetFalsePath > () = yystack_[4].value.as < SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as < SetFalsePath > (), yystack_[1].value.as < StringGroup > (), FromToType::TO  ); }
#line 1109 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 42: // cmd_set_false_path: cmd_set_false_path "-from" "{" stringGroup "}"
#line 228 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetFalsePath > () = yystack_[4].value.as < SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as < SetFalsePath > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1115 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 43: // cmd_set_false_path: cmd_set_false_path "-to" "{" stringGroup "}"
#line 229 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetFalsePath > () = yystack_[4].value.as < SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as < SetFalsePath > (), yystack_[1].value.as < StringGroup > (), FromToType::TO  ); }
#line 1121 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 44: // cmd_set_false_path: cmd_set_false_path "-from" string
#line 230 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetFalsePath > () = yystack_[2].value.as < SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as < SetFalsePath > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()), 
                                                                    FromToType::FROM); 
                                                            }
#line 1130 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 45: // cmd_set_false_path: cmd_set_false_path "-to" string
#line 234 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetFalsePath > () = yystack_[2].value.as < SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as < SetFalsePath > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()), 
                                                                    FromToType::TO  ); 
                                                            }
#line 1139 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 46: // cmd_set_max_delay: "set_max_delay"
#line 240 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = SetMinMaxDelay(MinMaxType::MAX); }
#line 1145 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 47: // cmd_set_max_delay: cmd_set_max_delay number
#line 241 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[1].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_set_value(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[0].value.as < float > ()); }
#line 1151 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 48: // cmd_set_max_delay: cmd_set_max_delay "-from" "[" cmd_get_clocks "]"
#line 242 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[4].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1157 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 49: // cmd_set_max_delay: cmd_set_max_delay "-to" "[" cmd_get_clocks "]"
#line 243 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[4].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[1].value.as < StringGroup > (), FromToType::TO  ); }
#line 1163 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 50: // cmd_set_max_delay: cmd_set_max_delay "-from" "{" stringGroup "}"
#line 244 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[4].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1169 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 51: // cmd_set_max_delay: cmd_set_max_delay "-to" "{" stringGroup "}"
#line 245 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[4].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[1].value.as < StringGroup > (), FromToType::TO  ); }
#line 1175 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 52: // cmd_set_max_delay: cmd_set_max_delay "-from" string
#line 246 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[2].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()), 
                                                                    FromToType::FROM);
                                                            }
#line 1184 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 53: // cmd_set_max_delay: cmd_set_max_delay "-to" string
#line 250 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[2].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()),
                                                                    FromToType::TO);
                                                            }
#line 1193 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 54: // cmd_set_min_delay: "set_min_delay"
#line 256 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = SetMinMaxDelay(MinMaxType::MIN); }
#line 1199 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 55: // cmd_set_min_delay: cmd_set_min_delay number
#line 257 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[1].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_set_value(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[0].value.as < float > ()); }
#line 1205 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 56: // cmd_set_min_delay: cmd_set_min_delay "-from" "[" cmd_get_clocks "]"
#line 258 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[4].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1211 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 57: // cmd_set_min_delay: cmd_set_min_delay "-to" "[" cmd_get_clocks "]"
#line 259 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[4].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[1].value.as < StringGroup > (), FromToType::TO  ); }
#line 1217 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 58: // cmd_set_min_delay: cmd_set_min_delay "-from" "{" stringGroup "}"
#line 260 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[4].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1223 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 59: // cmd_set_min_delay: cmd_set_min_delay "-to" "{" stringGroup "}"
#line 261 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[4].value.as < SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), yystack_[1].value.as < StringGroup > (), FromToType::TO  ); }
#line 1229 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 60: // cmd_set_min_delay: cmd_set_min_delay "-from" string
#line 262 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[2].value.as < SetMinMaxDelay > ();
                                                              sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()), 
                                                                    FromToType::FROM);
                                                            }
#line 1239 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 61: // cmd_set_min_delay: cmd_set_min_delay "-to" string
#line 267 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                            { yylhs.value.as < SetMinMaxDelay > () = yystack_[2].value.as < SetMinMaxDelay > (); 
                                                              sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as < SetMinMaxDelay > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()),
                                                                    FromToType::TO);
                                                            }
#line 1249 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 62: // cmd_set_multicycle_path: "set_multicycle_path"
#line 274 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = SetMulticyclePath(); }
#line 1255 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 63: // cmd_set_multicycle_path: cmd_set_multicycle_path int_number
#line 275 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[1].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_set_mcp_value(callback, lexer, yylhs.value.as < SetMulticyclePath > (), yystack_[0].value.as < int > ()); }
#line 1261 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 64: // cmd_set_multicycle_path: cmd_set_multicycle_path "-setup"
#line 276 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[1].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_set_setup(callback, lexer, yylhs.value.as < SetMulticyclePath > ()); }
#line 1267 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 65: // cmd_set_multicycle_path: cmd_set_multicycle_path "-hold"
#line 277 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[1].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_set_hold(callback, lexer, yylhs.value.as < SetMulticyclePath > ()); }
#line 1273 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 66: // cmd_set_multicycle_path: cmd_set_multicycle_path "-from" "[" cmd_get_clocks "]"
#line 278 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[4].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as < SetMulticyclePath > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1279 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 67: // cmd_set_multicycle_path: cmd_set_multicycle_path "-to" "[" cmd_get_clocks "]"
#line 279 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[4].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as < SetMulticyclePath > (), yystack_[1].value.as < StringGroup > (), FromToType::TO); }
#line 1285 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 68: // cmd_set_multicycle_path: cmd_set_multicycle_path "-from" "{" stringGroup "}"
#line 280 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[4].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as < SetMulticyclePath > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1291 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 69: // cmd_set_multicycle_path: cmd_set_multicycle_path "-to" "{" stringGroup "}"
#line 281 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[4].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as < SetMulticyclePath > (), yystack_[1].value.as < StringGroup > (), FromToType::TO); }
#line 1297 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 70: // cmd_set_multicycle_path: cmd_set_multicycle_path "-from" "[" cmd_get_pins "]"
#line 282 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[4].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as < SetMulticyclePath > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1303 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 71: // cmd_set_multicycle_path: cmd_set_multicycle_path "-to" "[" cmd_get_pins "]"
#line 283 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[4].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as < SetMulticyclePath > (), yystack_[1].value.as < StringGroup > (), FromToType::TO); }
#line 1309 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 72: // cmd_set_multicycle_path: cmd_set_multicycle_path "-from" string
#line 284 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[2].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as < SetMulticyclePath > (), 
                                                                          make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()), 
                                                                          FromToType::FROM);
                                                                  }
#line 1318 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 73: // cmd_set_multicycle_path: cmd_set_multicycle_path "-to" string
#line 288 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                  { yylhs.value.as < SetMulticyclePath > () = yystack_[2].value.as < SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as < SetMulticyclePath > (), 
                                                                          make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()),
                                                                          FromToType::TO);
                                                                  }
#line 1327 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 74: // cmd_set_clock_uncertainty: "set_clock_uncertainty"
#line 294 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = SetClockUncertainty(); }
#line 1333 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 75: // cmd_set_clock_uncertainty: cmd_set_clock_uncertainty "-setup"
#line 295 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = yystack_[1].value.as < SetClockUncertainty > (); sdc_set_clock_uncertainty_set_setup(callback, lexer, yylhs.value.as < SetClockUncertainty > ()); }
#line 1339 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 76: // cmd_set_clock_uncertainty: cmd_set_clock_uncertainty "-hold"
#line 296 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = yystack_[1].value.as < SetClockUncertainty > (); sdc_set_clock_uncertainty_set_hold(callback, lexer, yylhs.value.as < SetClockUncertainty > ()); }
#line 1345 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 77: // cmd_set_clock_uncertainty: cmd_set_clock_uncertainty number
#line 297 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = yystack_[1].value.as < SetClockUncertainty > (); sdc_set_clock_uncertainty_set_value(callback, lexer, yylhs.value.as < SetClockUncertainty > (), yystack_[0].value.as < float > ()); }
#line 1351 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 78: // cmd_set_clock_uncertainty: cmd_set_clock_uncertainty "-from" "[" cmd_get_clocks "]"
#line 298 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = yystack_[4].value.as < SetClockUncertainty > (); sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as < SetClockUncertainty > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1357 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 79: // cmd_set_clock_uncertainty: cmd_set_clock_uncertainty "-to" "[" cmd_get_clocks "]"
#line 299 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = yystack_[4].value.as < SetClockUncertainty > (); sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as < SetClockUncertainty > (), yystack_[1].value.as < StringGroup > (), FromToType::TO); }
#line 1363 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 80: // cmd_set_clock_uncertainty: cmd_set_clock_uncertainty "-from" "{" stringGroup "}"
#line 300 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = yystack_[4].value.as < SetClockUncertainty > (); sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as < SetClockUncertainty > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1369 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 81: // cmd_set_clock_uncertainty: cmd_set_clock_uncertainty "-to" "{" stringGroup "}"
#line 301 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = yystack_[4].value.as < SetClockUncertainty > (); sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as < SetClockUncertainty > (), yystack_[1].value.as < StringGroup > (), FromToType::TO); }
#line 1375 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 82: // cmd_set_clock_uncertainty: cmd_set_clock_uncertainty "-from" string
#line 302 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = yystack_[2].value.as < SetClockUncertainty > ();
                                                                      sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as < SetClockUncertainty > (), 
                                                                          make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()),
                                                                          FromToType::FROM);
                                                                    }
#line 1385 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 83: // cmd_set_clock_uncertainty: cmd_set_clock_uncertainty "-to" string
#line 307 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                    { yylhs.value.as < SetClockUncertainty > () = yystack_[2].value.as < SetClockUncertainty > ();
                                                                      sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as < SetClockUncertainty > (), 
                                                                          make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()),
                                                                          FromToType::TO);
                                                                    }
#line 1395 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 84: // cmd_set_clock_latency: "set_clock_latency"
#line 314 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetClockLatency > () = SetClockLatency(); }
#line 1401 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 85: // cmd_set_clock_latency: cmd_set_clock_latency "-source"
#line 315 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetClockLatency > () = yystack_[1].value.as < SetClockLatency > (); sdc_set_clock_latency_set_type(callback, lexer, yylhs.value.as < SetClockLatency > (), ClockLatencyType::SOURCE); }
#line 1407 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 86: // cmd_set_clock_latency: cmd_set_clock_latency "-early"
#line 316 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetClockLatency > () = yystack_[1].value.as < SetClockLatency > (); sdc_set_clock_latency_early(callback, lexer, yylhs.value.as < SetClockLatency > ()); }
#line 1413 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 87: // cmd_set_clock_latency: cmd_set_clock_latency "-late"
#line 317 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetClockLatency > () = yystack_[1].value.as < SetClockLatency > (); sdc_set_clock_latency_late(callback, lexer, yylhs.value.as < SetClockLatency > ()); }
#line 1419 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 88: // cmd_set_clock_latency: cmd_set_clock_latency number
#line 318 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetClockLatency > () = yystack_[1].value.as < SetClockLatency > (); sdc_set_clock_latency_set_value(callback, lexer, yylhs.value.as < SetClockLatency > (), yystack_[0].value.as < float > ()); }
#line 1425 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 89: // cmd_set_clock_latency: cmd_set_clock_latency "[" cmd_get_clocks "]"
#line 319 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                { yylhs.value.as < SetClockLatency > () = yystack_[3].value.as < SetClockLatency > (); sdc_set_clock_latency_set_clocks(callback, lexer, yylhs.value.as < SetClockLatency > (), yystack_[1].value.as < StringGroup > ()); }
#line 1431 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 90: // cmd_set_disable_timing: "set_disable_timing"
#line 323 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                     { yylhs.value.as < SetDisableTiming > () = SetDisableTiming(); }
#line 1437 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 91: // cmd_set_disable_timing: cmd_set_disable_timing "-from" "[" cmd_get_pins "]"
#line 324 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                               { yylhs.value.as < SetDisableTiming > () = yystack_[4].value.as < SetDisableTiming > (); sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as < SetDisableTiming > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1443 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 92: // cmd_set_disable_timing: cmd_set_disable_timing "-to" "[" cmd_get_pins "]"
#line 325 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                               { yylhs.value.as < SetDisableTiming > () = yystack_[4].value.as < SetDisableTiming > (); sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as < SetDisableTiming > (), yystack_[1].value.as < StringGroup > (), FromToType::TO  ); }
#line 1449 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 93: // cmd_set_disable_timing: cmd_set_disable_timing "-from" "{" stringGroup "}"
#line 326 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                 { yylhs.value.as < SetDisableTiming > () = yystack_[4].value.as < SetDisableTiming > (); sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as < SetDisableTiming > (), yystack_[1].value.as < StringGroup > (), FromToType::FROM); }
#line 1455 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 94: // cmd_set_disable_timing: cmd_set_disable_timing "-to" "{" stringGroup "}"
#line 327 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                 { yylhs.value.as < SetDisableTiming > () = yystack_[4].value.as < SetDisableTiming > (); sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as < SetDisableTiming > (), yystack_[1].value.as < StringGroup > (), FromToType::TO  ); }
#line 1461 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 95: // cmd_set_disable_timing: cmd_set_disable_timing "-from" string
#line 328 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                 { yylhs.value.as < SetDisableTiming > () = yystack_[2].value.as < SetDisableTiming > (); 
                                                                   sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as < SetDisableTiming > (), 
                                                                     make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()), 
                                                                     FromToType::FROM); 
                                                                 }
#line 1471 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 96: // cmd_set_disable_timing: cmd_set_disable_timing "-to" string
#line 333 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                                 { yylhs.value.as < SetDisableTiming > () = yystack_[2].value.as < SetDisableTiming > (); 
                                                                   sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as < SetDisableTiming > (), 
                                                                     make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as < std::string > ()), 
                                                                     FromToType::TO  ); 
                                                                 }
#line 1481 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 97: // cmd_set_timing_derate: "set_timing_derate"
#line 340 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetTimingDerate > () = SetTimingDerate(); }
#line 1487 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 98: // cmd_set_timing_derate: cmd_set_timing_derate "-early"
#line 341 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetTimingDerate > () = yystack_[1].value.as < SetTimingDerate > (); sdc_set_timing_derate_early(callback, lexer, yylhs.value.as < SetTimingDerate > ()); }
#line 1493 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 99: // cmd_set_timing_derate: cmd_set_timing_derate "-late"
#line 342 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetTimingDerate > () = yystack_[1].value.as < SetTimingDerate > (); sdc_set_timing_derate_late(callback, lexer, yylhs.value.as < SetTimingDerate > ()); }
#line 1499 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 100: // cmd_set_timing_derate: cmd_set_timing_derate "-cell_delay"
#line 343 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetTimingDerate > () = yystack_[1].value.as < SetTimingDerate > (); sdc_set_timing_derate_target_type(callback, lexer, yylhs.value.as < SetTimingDerate > (), TimingDerateTargetType::NET); }
#line 1505 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 101: // cmd_set_timing_derate: cmd_set_timing_derate "-net_delay"
#line 344 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetTimingDerate > () = yystack_[1].value.as < SetTimingDerate > (); sdc_set_timing_derate_target_type(callback, lexer, yylhs.value.as < SetTimingDerate > (), TimingDerateTargetType::CELL); }
#line 1511 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 102: // cmd_set_timing_derate: cmd_set_timing_derate number
#line 345 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < SetTimingDerate > () = yystack_[1].value.as < SetTimingDerate > (); sdc_set_timing_derate_value(callback, lexer, yylhs.value.as < SetTimingDerate > (), yystack_[0].value.as < float > ()); }
#line 1517 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 103: // cmd_set_timing_derate: cmd_set_timing_derate "[" cmd_get_cells "]"
#line 346 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                      { yylhs.value.as < SetTimingDerate > () = yystack_[3].value.as < SetTimingDerate > (); sdc_set_timing_derate_targets(callback, lexer, yylhs.value.as < SetTimingDerate > (), yystack_[1].value.as < StringGroup > ()); }
#line 1523 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 104: // cmd_get_ports: "get_ports"
#line 349 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                        { yylhs.value.as < StringGroup > () = StringGroup(StringGroupType::PORT); }
#line 1529 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 105: // cmd_get_ports: cmd_get_ports "{" stringGroup "}"
#line 350 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                            { yylhs.value.as < StringGroup > () = yystack_[3].value.as < StringGroup > (); sdc_string_group_add_strings(yylhs.value.as < StringGroup > (), yystack_[1].value.as < StringGroup > ()); }
#line 1535 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 106: // cmd_get_ports: cmd_get_ports string
#line 351 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                        { yylhs.value.as < StringGroup > () = yystack_[1].value.as < StringGroup > (); sdc_string_group_add_string(yylhs.value.as < StringGroup > (), yystack_[0].value.as < std::string > ()); }
#line 1541 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 107: // cmd_get_clocks: "get_clocks"
#line 354 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                            { yylhs.value.as < StringGroup > () = StringGroup(StringGroupType::CLOCK); }
#line 1547 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 108: // cmd_get_clocks: cmd_get_clocks "{" stringGroup "}"
#line 355 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                                { yylhs.value.as < StringGroup > () = yystack_[3].value.as < StringGroup > (); sdc_string_group_add_strings(yylhs.value.as < StringGroup > (), yystack_[1].value.as < StringGroup > ()); }
#line 1553 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 109: // cmd_get_clocks: cmd_get_clocks string
#line 356 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                            { yylhs.value.as < StringGroup > () = yystack_[1].value.as < StringGroup > (); sdc_string_group_add_string(yylhs.value.as < StringGroup > (), yystack_[0].value.as < std::string > ()); }
#line 1559 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 110: // cmd_get_cells: "get_cells"
#line 359 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                        { yylhs.value.as < StringGroup > () = StringGroup(StringGroupType::CELL); }
#line 1565 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 111: // cmd_get_cells: cmd_get_cells "{" stringGroup "}"
#line 360 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                            { yylhs.value.as < StringGroup > () = yystack_[3].value.as < StringGroup > (); sdc_string_group_add_strings(yylhs.value.as < StringGroup > (), yystack_[1].value.as < StringGroup > ()); }
#line 1571 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 112: // cmd_get_cells: cmd_get_cells string
#line 361 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                        { yylhs.value.as < StringGroup > () = yystack_[1].value.as < StringGroup > (); sdc_string_group_add_string(yylhs.value.as < StringGroup > (), yystack_[0].value.as < std::string > ()); }
#line 1577 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 113: // cmd_get_pins: "get_pins"
#line 364 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                      { yylhs.value.as < StringGroup > () = StringGroup(StringGroupType::PIN); }
#line 1583 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 114: // cmd_get_pins: cmd_get_pins "{" stringGroup "}"
#line 365 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                           { yylhs.value.as < StringGroup > () = yystack_[3].value.as < StringGroup > (); sdc_string_group_add_strings(yylhs.value.as < StringGroup > (), yystack_[1].value.as < StringGroup > ()); }
#line 1589 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 115: // cmd_get_pins: cmd_get_pins string
#line 366 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                                       { yylhs.value.as < StringGroup > () = yystack_[1].value.as < StringGroup > (); sdc_string_group_add_string(yylhs.value.as < StringGroup > (), yystack_[0].value.as < std::string > ()); }
#line 1595 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 116: // stringGroup: %empty
#line 370 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                         { yylhs.value.as < StringGroup > () = StringGroup(StringGroupType::STRING); }
#line 1601 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 117: // stringGroup: stringGroup string
#line 371 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                         { yylhs.value.as < StringGroup > () = yystack_[1].value.as < StringGroup > (); sdc_string_group_add_string(yylhs.value.as < StringGroup > (), yystack_[0].value.as < std::string > ()); }
#line 1607 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 118: // string: STRING
#line 373 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                       { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 1613 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 119: // string: ESCAPED_STRING
#line 374 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                            { yylhs.value.as < std::string > () = yystack_[0].value.as < std::string > (); }
#line 1619 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 120: // number: float_number
#line 377 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                     { yylhs.value.as < float > () = yystack_[0].value.as < float > (); }
#line 1625 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 121: // number: int_number
#line 378 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                 { yylhs.value.as < float > () = yystack_[0].value.as < int > (); }
#line 1631 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 122: // float_number: FLOAT_NUMBER
#line 381 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                           { yylhs.value.as < float > () = yystack_[0].value.as < float > (); }
#line 1637 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;

  case 123: // int_number: INT_NUMBER
#line 384 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
                       { yylhs.value.as < int > () = yystack_[0].value.as < int > (); }
#line 1643 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"
    break;


#line 1647 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (YY_MOVE (msg));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  Parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // Parser::context.
  Parser::context::context (const Parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  Parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  Parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char Parser::yypact_ninf_ = -68;

  const signed char Parser::yytable_ninf_ = -1;

  const short
  Parser::yypact_[] =
  {
     -68,    96,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,    73,   170,   173,   -21,
      -2,     4,   152,    93,    -9,   194,     1,   188,   -40,   -30,
      12,   -68,   -68,   -68,   -68,   -68,    12,   -68,   -68,    -4,
     -68,   -68,   -68,   -68,   -68,   -68,    12,   -68,   -68,    -4,
     -68,   -68,   -68,    47,   -68,   132,   144,   -68,   153,   199,
     -68,   -68,   206,   213,   -68,   -68,   220,   227,   -68,   -68,
     -68,   -68,   234,   241,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     5,   -68,   -68,   248,   255,   -68,   -68,   -68,   -68,
     -68,     7,   -68,   -68,   -68,   -40,   -68,    24,   -68,   -68,
     257,   -68,   263,     5,   -68,   -68,     5,   -68,   -68,     5,
     -68,   -68,     5,   -68,   -68,     5,   -68,   -68,     5,   -68,
     -68,     5,   -68,   -68,    16,   -68,   -68,    16,   -68,   -68,
       5,   -68,   -68,     5,   -68,   -68,   -68,   265,     9,   -68,
     -68,     9,   -68,   -68,   -68,   271,   -40,   -68,   -68,   -68,
     -68,   -68,   -68,   273,    36,   279,    83,   281,   109,   287,
     120,   289,   166,   295,   204,   297,   211,   -68,   303,   305,
     218,   311,   313,   225,   319,   232,   321,   239,   -68,   -68,
     -68,   327,   246,   329,   333,   -68,   -68,   -68,    -6,   337,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   341,   -68,   -68,   -68,
     -68,   345,   -68,   -68,   349,   -68,   -68,   -68
  };

  const signed char
  Parser::yydefact_[] =
  {
       2,     0,     1,    16,    34,    39,    46,    54,    62,    22,
      28,    74,    84,    90,    97,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     3,   118,   119,    21,     0,    24,    25,     0,
       4,   122,   123,    26,   120,   121,     0,    30,    31,     0,
       5,    32,    35,     0,     6,     0,     0,     7,     0,     0,
       8,    47,     0,     0,     9,    55,     0,     0,    64,    65,
      10,    63,     0,     0,    75,    76,    11,    77,    86,    87,
      85,     0,    12,    88,     0,     0,    13,    98,    99,   100,
     101,     0,    14,   102,    17,     0,    18,     0,    23,   104,
       0,    29,     0,     0,   116,    38,     0,   116,    44,     0,
     116,    45,     0,   116,    52,     0,   116,    53,     0,   116,
      60,     0,   116,    61,     0,   116,    72,     0,   116,    73,
       0,   116,    82,     0,   116,    83,   107,     0,     0,   116,
      95,     0,   116,    96,   110,     0,     0,    20,   117,    27,
     116,   106,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,   116,
     109,     0,     0,     0,     0,   103,   116,   112,     0,     0,
      36,    37,    40,    42,    41,    43,    48,    50,    49,    51,
      56,    58,    57,    59,    66,    70,   116,   115,    68,    67,
      71,    69,    78,    80,    79,    81,     0,    91,    93,    92,
      94,     0,    19,   105,     0,   108,   111,   114
  };

  const signed char
  Parser::yypgoto_[] =
  {
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,    10,    60,   -68,   -67,   -52,   -16,
     -15,   -68,    22
  };

  const unsigned char
  Parser::yydefgoto_[] =
  {
       0,     1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   100,   137,   145,   169,    97,   148,
      43,    44,    45
  };

  const unsigned char
  Parser::yytable_[] =
  {
      35,    52,    53,    51,    41,    42,    61,    65,    95,    77,
      83,    99,    93,    94,    96,    72,    73,    74,    75,    54,
      98,   136,    55,    56,   144,    84,    85,   167,    58,    59,
     101,    76,   136,   222,   167,    41,    42,   105,    57,   108,
     111,    86,   114,   117,    60,    71,   120,   123,    41,    42,
     126,   129,   154,    33,    34,   156,   132,   135,   158,   102,
     172,   160,     0,   147,   162,    33,    34,   164,   140,   143,
     166,   181,     0,   170,   183,   191,   173,    33,    34,   175,
     146,     0,   177,   103,   151,   104,   151,   182,    33,    34,
     184,     0,    28,    29,    30,     0,     2,     0,   189,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    31,     0,    32,    33,    34,     0,    66,    67,    68,
      69,   180,   193,     0,    33,    34,     0,   216,     0,   187,
       0,   188,     0,    70,   221,     0,    15,   180,    42,   180,
       0,   180,     0,   180,     0,   180,     0,   180,   195,   180,
      33,    34,   180,   207,   224,   180,   207,     0,   180,   197,
     180,    33,    34,   153,     0,   207,   155,   207,   106,   157,
     107,     0,   159,    33,    34,   161,    62,    63,   163,     0,
     109,   165,   110,     0,   168,    33,    34,   171,     0,   112,
     174,   113,    64,   176,    33,    34,    41,    42,    36,    37,
      38,    46,    47,    48,     0,   199,    39,    33,    34,    49,
      40,     0,     0,    50,    41,    42,     0,    41,    42,    87,
      88,    89,    90,     0,    91,    78,    79,     0,    92,    80,
      81,     0,    41,    42,    82,   115,     0,   116,    41,    42,
      33,    34,   118,   201,   119,    33,    34,    33,    34,   121,
     203,   122,    33,    34,    33,    34,   124,   208,   125,    33,
      34,    33,    34,   127,   211,   128,    33,    34,    33,    34,
     130,   213,   131,    33,    34,    33,    34,   133,   215,   134,
      33,    34,    33,    34,   138,   218,   139,    33,    34,    33,
      34,   141,     0,   142,   149,   150,    33,    34,    33,    34,
     152,   150,   178,   179,    33,    34,    33,    34,   185,   186,
     190,   179,    33,    34,    33,    34,   192,   179,   194,   179,
      33,    34,    33,    34,   196,   179,   198,   179,    33,    34,
      33,    34,   200,   179,   202,   179,    33,    34,    33,    34,
     204,   179,   205,   206,    33,    34,    33,    34,   209,   179,
     210,   206,    33,    34,    33,    34,   212,   179,   214,   179,
      33,    34,    33,    34,   217,   206,   219,   206,    33,    34,
      33,    34,   220,     0,    33,    34,   223,     0,    33,    34,
     225,     0,    33,    34,   226,     0,    33,    34,   227,     0,
      33,    34
  };

  const short
  Parser::yycheck_[] =
  {
      16,    22,    23,    18,    44,    45,    21,    22,    38,    24,
      25,    15,    27,    28,    30,    24,    25,    26,    27,    40,
      36,    16,    24,    25,    17,    24,    25,    18,    24,    25,
      46,    40,    16,    39,    18,    44,    45,    53,    40,    55,
      56,    40,    58,    59,    40,    23,    62,    63,    44,    45,
      66,    67,   104,    41,    42,   107,    72,    73,   110,    49,
     127,   113,    -1,    39,   116,    41,    42,   119,    84,    85,
     122,   138,    -1,   125,   141,    39,   128,    41,    42,   131,
      95,    -1,   134,    36,   100,    38,   102,   139,    41,    42,
     142,    -1,    19,    20,    21,    -1,     0,    -1,   150,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    38,    -1,    40,    41,    42,    -1,    24,    25,    26,
      27,   137,    39,    -1,    41,    42,    -1,   179,    -1,   145,
      -1,   146,    -1,    40,   186,    -1,    40,   153,    45,   155,
      -1,   157,    -1,   159,    -1,   161,    -1,   163,    39,   165,
      41,    42,   168,   169,   206,   171,   172,    -1,   174,    39,
     176,    41,    42,   103,    -1,   181,   106,   183,    36,   109,
      38,    -1,   112,    41,    42,   115,    24,    25,   118,    -1,
      36,   121,    38,    -1,   124,    41,    42,   127,    -1,    36,
     130,    38,    40,   133,    41,    42,    44,    45,    28,    29,
      30,    28,    29,    30,    -1,    39,    36,    41,    42,    36,
      40,    -1,    -1,    40,    44,    45,    -1,    44,    45,    31,
      32,    33,    34,    -1,    36,    31,    32,    -1,    40,    35,
      36,    -1,    44,    45,    40,    36,    -1,    38,    44,    45,
      41,    42,    36,    39,    38,    41,    42,    41,    42,    36,
      39,    38,    41,    42,    41,    42,    36,    39,    38,    41,
      42,    41,    42,    36,    39,    38,    41,    42,    41,    42,
      36,    39,    38,    41,    42,    41,    42,    36,    39,    38,
      41,    42,    41,    42,    36,    39,    38,    41,    42,    41,
      42,    36,    -1,    38,    37,    38,    41,    42,    41,    42,
      37,    38,    37,    38,    41,    42,    41,    42,    37,    38,
      37,    38,    41,    42,    41,    42,    37,    38,    37,    38,
      41,    42,    41,    42,    37,    38,    37,    38,    41,    42,
      41,    42,    37,    38,    37,    38,    41,    42,    41,    42,
      37,    38,    37,    38,    41,    42,    41,    42,    37,    38,
      37,    38,    41,    42,    41,    42,    37,    38,    37,    38,
      41,    42,    41,    42,    37,    38,    37,    38,    41,    42,
      41,    42,    39,    -1,    41,    42,    39,    -1,    41,    42,
      39,    -1,    41,    42,    39,    -1,    41,    42,    39,    -1,
      41,    42
  };

  const signed char
  Parser::yystos_[] =
  {
       0,    47,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    40,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    19,    20,
      21,    38,    40,    41,    42,    65,    28,    29,    30,    36,
      40,    44,    45,    66,    67,    68,    28,    29,    30,    36,
      40,    66,    22,    23,    40,    24,    25,    40,    24,    25,
      40,    66,    24,    25,    40,    66,    24,    25,    26,    27,
      40,    68,    24,    25,    26,    27,    40,    66,    31,    32,
      35,    36,    40,    66,    24,    25,    40,    31,    32,    33,
      34,    36,    40,    66,    66,    38,    65,    64,    65,    15,
      60,    65,    60,    36,    38,    65,    36,    38,    65,    36,
      38,    65,    36,    38,    65,    36,    38,    65,    36,    38,
      65,    36,    38,    65,    36,    38,    65,    36,    38,    65,
      36,    38,    65,    36,    38,    65,    16,    61,    36,    38,
      65,    36,    38,    65,    17,    62,    66,    39,    65,    37,
      38,    65,    37,    61,    64,    61,    64,    61,    64,    61,
      64,    61,    64,    61,    64,    61,    64,    18,    61,    63,
      64,    61,    63,    64,    61,    64,    61,    64,    37,    38,
      65,    63,    64,    63,    64,    37,    38,    65,    66,    64,
      37,    39,    37,    39,    37,    39,    37,    39,    37,    39,
      37,    39,    37,    39,    37,    37,    38,    65,    39,    37,
      37,    39,    37,    39,    37,    39,    64,    37,    39,    37,
      39,    64,    39,    39,    64,    39,    39,    39
  };

  const signed char
  Parser::yyr1_[] =
  {
       0,    46,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    48,    48,    48,    48,
      48,    48,    49,    49,    49,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    51,    51,    51,    51,    51,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    54,    54,    54,    54,    54,    54,
      54,    54,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    60,    61,    61,    61,
      62,    62,    62,    63,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    68
  };

  const signed char
  Parser::yyr2_[] =
  {
       0,     2,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     3,     3,     6,
       4,     2,     1,     3,     2,     2,     2,     4,     1,     3,
       2,     2,     2,     4,     1,     2,     5,     5,     3,     1,
       5,     5,     5,     5,     3,     3,     1,     2,     5,     5,
       5,     5,     3,     3,     1,     2,     5,     5,     5,     5,
       3,     3,     1,     2,     2,     2,     5,     5,     5,     5,
       5,     5,     3,     3,     1,     2,     2,     2,     5,     5,
       5,     5,     3,     3,     1,     2,     2,     2,     2,     4,
       1,     5,     5,     5,     5,     3,     3,     1,     2,     2,
       2,     2,     2,     4,     1,     4,     2,     1,     4,     2,
       1,     4,     2,     1,     4,     2,     0,     2,     1,     1,
       1,     1,     1,     1
  };


#if SDCPARSE_DEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const Parser::yytname_[] =
  {
  "\"end-of-file\"", "error", "\"invalid token\"", "\"create_clock\"",
  "\"set_clock_groups\"", "\"set_false_path\"", "\"set_max_delay\"",
  "\"set_min_delay\"", "\"set_multicycle_path\"", "\"set_input_delay\"",
  "\"set_output_delay\"", "\"set_clock_uncertainty\"",
  "\"set_clock_latency\"", "\"set_disable_timing\"",
  "\"set_timing_derate\"", "\"get_ports\"", "\"get_clocks\"",
  "\"get_cells\"", "\"get_pins\"", "\"-period\"", "\"-waveform\"",
  "\"-name\"", "\"-exclusive\"", "\"-group\"", "\"-from\"", "\"-to\"",
  "\"-setup\"", "\"-hold\"", "\"-clock\"", "\"-max\"", "\"-min\"",
  "\"-early\"", "\"-late\"", "\"-cell_delay\"", "\"-net_delay\"",
  "\"-source\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\"end-of-line\"",
  "STRING", "ESCAPED_STRING", "CHAR", "FLOAT_NUMBER", "INT_NUMBER",
  "$accept", "sdc_commands", "cmd_create_clock", "cmd_set_input_delay",
  "cmd_set_output_delay", "cmd_set_clock_groups", "cmd_set_false_path",
  "cmd_set_max_delay", "cmd_set_min_delay", "cmd_set_multicycle_path",
  "cmd_set_clock_uncertainty", "cmd_set_clock_latency",
  "cmd_set_disable_timing", "cmd_set_timing_derate", "cmd_get_ports",
  "cmd_get_clocks", "cmd_get_cells", "cmd_get_pins", "stringGroup",
  "string", "number", "float_number", "int_number", YY_NULLPTR
  };
#endif


#if SDCPARSE_DEBUG
  const short
  Parser::yyrline_[] =
  {
       0,   173,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   189,   190,   191,   192,
     193,   195,   200,   201,   202,   203,   204,   205,   208,   209,
     210,   211,   212,   213,   216,   217,   218,   219,   220,   225,
     226,   227,   228,   229,   230,   234,   240,   241,   242,   243,
     244,   245,   246,   250,   256,   257,   258,   259,   260,   261,
     262,   267,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   288,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   307,   314,   315,   316,   317,   318,   319,
     323,   324,   325,   326,   327,   328,   333,   340,   341,   342,
     343,   344,   345,   346,   349,   350,   351,   354,   355,   356,
     359,   360,   361,   364,   365,   366,   370,   371,   373,   374,
     377,   378,   381,   384
  };

  void
  Parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  Parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // SDCPARSE_DEBUG


#line 34 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"
} // sdcparse
#line 2304 "/home/nouran/OpenFPGA/build/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/sdc_parser.gen.cpp"

#line 387 "/home/nouran/OpenFPGA/vtr-verilog-to-routing/libs/EXTERNAL/libsdcparse/src/sdc_parser.y"



void sdcparse::Parser::error(const std::string& msg) {
    sdc_error_wrap(callback, lexer.lineno(), lexer.text(), msg.c_str());
}
