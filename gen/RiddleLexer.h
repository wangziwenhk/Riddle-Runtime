
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  RiddleLexer : public antlr4::Lexer {
public:
  enum {
      Var=1, Val=2, Fun=3, If=4, Else=5, False=6, True=7, While=8,
      Print=9, Int=10, Float=11, Char=12, Boolen=13, String=14,
      LeftParen=15, RightParen=16, LeftBracket=17, RightBracket=18,
      LeftBrace=19, RightBrace=20, Plus=21, Minus=22, Star=23, Div=24,
      Mod=25, Caret=26, And=27, Or=28, Tilde=29, Not=30, Assign=31,
      Less=32, Greater=33, LeftShift=34, RightShift=35, PlusAssign=36,
      MinusAssign=37, StarAssign=38, DivAssign=39, ModAssign=40, XorAssign=41,
      AndAssign=42, OrAssign=43, LeftShiftAssign=44, RightShiftAssign=45,
      Equal=46, NotEqual=47, LessEqual=48, GreaterEqual=49, AndAnd=50,
      OrOr=51, PlusPlus=52, MinusMinus=53, Comma=54, Question=55,
      Colon=56, Semi=57, Dot=58, IntegerLiteral=59, DecimalSequence=60,
      OctalSequence=61, BinarySequence=62, HexadecimalSequence=63, StringLiteral=64,
      StringPrefix=65, CharLiteral=66, EscapeCharacter=67, FloatLiteral=68,
      Identfier=69, Whitespace=70, NewLine=71, Newline=72, BlockComment=73,
      LineComment=74
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

