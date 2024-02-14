
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  RiddleLexer : public antlr4::Lexer {
public:
  enum {
    Import_ = 1, True_ = 2, False_ = 3, For = 4, While = 5, Break = 6, Continue = 7, 
    Class = 8, Const = 9, If = 10, Elif = 11, Else = 12, Try = 13, Export = 14, 
    Throw = 15, New = 16, Private = 17, Protected = 18, Public = 19, Return = 20, 
    Static = 21, This = 22, Delete = 23, Int = 24, String = 25, Float = 26, 
    Char = 27, Void = 28, Null = 29, Any = 30, Bool = 31, LeftParen = 32, 
    RightParen = 33, LeftBracket = 34, RightBracket = 35, LeftBrace = 36, 
    RightBrace = 37, Plus = 38, Minus = 39, Star = 40, Div = 41, Mod = 42, 
    Caret = 43, And = 44, Or = 45, Tilde = 46, Not = 47, Assign = 48, Less = 49, 
    Greater = 50, PlusAssign = 51, MinusAssign = 52, StarAssign = 53, DivAssign = 54, 
    ModAssign = 55, XorAssign = 56, AndAssign = 57, OrAssign = 58, LeftShiftAssign = 59, 
    RightShiftAssign = 60, Equal = 61, NotEqual = 62, LessEqual = 63, GreaterEqual = 64, 
    AndAnd = 65, OrOr = 66, PlusPlus = 67, MinusMinus = 68, Comma = 69, 
    Arrow = 70, Question = 71, Colon = 72, Semi = 73, Dot = 74, IntegerLiteral = 75, 
    FloatingLiteral = 76, StringLiteral = 77, CharacterLiteral = 78, Identifier = 79, 
    DecimalLiteral = 80, OctalLiteral = 81, HexadecimalLiteral = 82, BinaryLiteral = 83, 
    Whitespace = 84, Newline = 85, BlockComment = 86, LineComment = 87
  };

  explicit RiddleLexer(antlr4::CharStream *input);

  ~RiddleLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

