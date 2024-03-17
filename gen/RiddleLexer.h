
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
      Less=32, Greater=33, PlusAssign=34, MinusAssign=35, StarAssign=36,
      DivAssign=37, ModAssign=38, XorAssign=39, AndAssign=40, OrAssign=41,
      LeftShiftAssign=42, RightShiftAssign=43, Equal=44, NotEqual=45,
      LessEqual=46, GreaterEqual=47, AndAnd=48, OrOr=49, PlusPlus=50,
      MinusMinus=51, Comma=52, Question=53, Colon=54, Semi=55, Dot=56,
      IntegerLiteral=57, DecimalSequence=58, OctalSequence=59, BinarySequence=60,
      HexadecimalSequence=61, StringLiteral=62, StringPrefix=63, CharLiteral=64,
      EscapeCharacter=65, FloatLiteral=66, Identfier=67, Whitespace=68,
      NewLine=69, Newline=70, BlockComment=71, LineComment=72
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

