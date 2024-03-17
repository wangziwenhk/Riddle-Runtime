
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  RiddleParser : public antlr4::Parser {
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

  enum {
      RuleProgram=0, RuleNewline_statment=1, RuleStatment=2, RulePrint=3,
      RulePrimaryExpression=4, RuleVariableDefine=5, RuleIfExpression=6,
      RuleWhile=7, RuleFuncDefine=8, RuleFuncBody=9, RuleBlock=10,
      RuleExpression=11, RuleAssignExpression=12, RuleEqualExpression=13,
      RuleNotEqualExpression=14, RuleGreaterExpression=15, RuleLessExpression=16,
      RuleLessEqualExpression=17, RuleIdExpression=18, RuleTypeLiteral=19,
      RuleBasicType=20, RuleLiteral=21, RuleStrLiteral=22, RuleCharLiteral=23,
      RuleIntLiteral=24, RuleFloatLiteral=25, RuleBoolenLiteral=26
  };

  explicit RiddleParser(antlr4::TokenStream *input);

  RiddleParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~RiddleParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;

    class Newline_statmentContext;
  class StatmentContext;

    class PrintContext;
  class PrimaryExpressionContext;

    class VariableDefineContext;

    class IfExpressionContext;

    class WhileContext;

    class FuncDefineContext;
  class FuncBodyContext;

    class BlockContext;

    class ExpressionContext;

    class AssignExpressionContext;

    class EqualExpressionContext;

    class NotEqualExpressionContext;

    class GreaterExpressionContext;

    class LessExpressionContext;

    class LessEqualExpressionContext;

    class IdExpressionContext;

    class TypeLiteralContext;

    class BasicTypeContext;
  class LiteralContext;

    class StrLiteralContext;
  class CharLiteralContext;

    class IntLiteralContext;
  class FloatLiteralContext;

    class BoolenLiteralContext;

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

      antlr4::tree::TerminalNode *EOF();

      std::vector<Newline_statmentContext *> newline_statment();

      Newline_statmentContext *newline_statment(size_t i);

      StatmentContext *statment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

    class Newline_statmentContext :public antlr4::ParserRuleContext{
    public:
        Newline_statmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        StatmentContext *statment();

        antlr4::tree::TerminalNode *NewLine();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

    };

    Newline_statmentContext *newline_statment();

  class  StatmentContext : public antlr4::ParserRuleContext {
  public:
    StatmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

      VariableDefineContext *variableDefine();

      ExpressionContext *expression();

      BlockContext *block();

      FuncDefineContext *funcDefine();

      WhileContext *while_();

      PrintContext *print();
    antlr4::tree::TerminalNode *Semi();

      std::vector<StatmentContext *> statment();

      StatmentContext *statment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatmentContext* statment();

    StatmentContext *statment(int precedence);

    class PrintContext :public antlr4::ParserRuleContext{
    public:
        PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *Print();

        antlr4::tree::TerminalNode *LeftParen();

        ExpressionContext *expression();

        antlr4::tree::TerminalNode *RightParen();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

    };

    PrintContext *print();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    IdExpressionContext *idExpression();

      antlr4::tree::TerminalNode *LeftParen();

      ExpressionContext *expression();

      antlr4::tree::TerminalNode *RightParen();

      IfExpressionContext *ifExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

    class VariableDefineContext :public antlr4::ParserRuleContext{
  public:
        VariableDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *Var();

        antlr4::tree::TerminalNode *Val();

        std::vector<antlr4::tree::TerminalNode *> Identfier();

        antlr4::tree::TerminalNode *Identfier(size_t i);

        std::vector<antlr4::tree::TerminalNode *> Comma();

        antlr4::tree::TerminalNode *Comma(size_t i);

        std::vector<antlr4::tree::TerminalNode *> Assign();

        antlr4::tree::TerminalNode *Assign(size_t i);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    VariableDefineContext *variableDefine();

    class IfExpressionContext :public antlr4::ParserRuleContext{
  public:
        IfExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *If();

        antlr4::tree::TerminalNode *LeftParen();

        ExpressionContext *expression();

        antlr4::tree::TerminalNode *RightParen();

        std::vector<StatmentContext *> statment();

        StatmentContext *statment(size_t i);

        antlr4::tree::TerminalNode *Else();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    IfExpressionContext *ifExpression();

    class WhileContext :public antlr4::ParserRuleContext{
  public:
        WhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();

        ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();

        StatmentContext *statment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    WhileContext *while_();

    class FuncDefineContext :public antlr4::ParserRuleContext{
  public:
        FuncDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *Fun();

        std::vector<antlr4::tree::TerminalNode *> Identfier();

        antlr4::tree::TerminalNode *Identfier(size_t i);
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();

        FuncBodyContext *funcBody();

        std::vector<antlr4::tree::TerminalNode *> Colon();

        antlr4::tree::TerminalNode *Colon(size_t i);

        std::vector<TypeLiteralContext *> typeLiteral();

        TypeLiteralContext *typeLiteral(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    FuncDefineContext *funcDefine();

  class  FuncBodyContext : public antlr4::ParserRuleContext {
  public:
    FuncBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<StatmentContext *> statment();
    StatmentContext* statment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncBodyContext* funcBody();

    class BlockContext :public antlr4::ParserRuleContext{
  public:
        BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *LeftBrace();

        antlr4::tree::TerminalNode *RightBrace();

        std::vector<StatmentContext *> statment();

        StatmentContext *statment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    BlockContext *block();

    class ExpressionContext :public antlr4::ParserRuleContext{
  public:
        ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        AssignExpressionContext *assignExpression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

    };

    ExpressionContext *expression();

    class AssignExpressionContext :public antlr4::ParserRuleContext{
    public:
        AssignExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        EqualExpressionContext *equalExpression();

        antlr4::tree::TerminalNode *Identfier();
    antlr4::tree::TerminalNode *Assign();

        AssignExpressionContext *assignExpression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

    };

    AssignExpressionContext *assignExpression();

    class EqualExpressionContext :public antlr4::ParserRuleContext{
    public:
        EqualExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        NotEqualExpressionContext *notEqualExpression();

        std::vector<EqualExpressionContext *> equalExpression();

        EqualExpressionContext *equalExpression(size_t i);

        antlr4::tree::TerminalNode *Equal();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

    };

    EqualExpressionContext *equalExpression();

    EqualExpressionContext *equalExpression(int precedence);

    class NotEqualExpressionContext :public antlr4::ParserRuleContext{
    public:
        NotEqualExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        GreaterExpressionContext *greaterExpression();

        std::vector<NotEqualExpressionContext *> notEqualExpression();

        NotEqualExpressionContext *notEqualExpression(size_t i);

        antlr4::tree::TerminalNode *NotEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    NotEqualExpressionContext *notEqualExpression();

    NotEqualExpressionContext *notEqualExpression(int precedence);

    class GreaterExpressionContext :public antlr4::ParserRuleContext{
  public:
        GreaterExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        LessExpressionContext *lessExpression();

        std::vector<GreaterExpressionContext *> greaterExpression();

        GreaterExpressionContext *greaterExpression(size_t i);

        antlr4::tree::TerminalNode *Greater();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    GreaterExpressionContext *greaterExpression();

    GreaterExpressionContext *greaterExpression(int precedence);

    class LessExpressionContext :public antlr4::ParserRuleContext{
  public:
        LessExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        LessEqualExpressionContext *lessEqualExpression();

        std::vector<LessExpressionContext *> lessExpression();

        LessExpressionContext *lessExpression(size_t i);

        antlr4::tree::TerminalNode *Less();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    LessExpressionContext *lessExpression();

    LessExpressionContext *lessExpression(int precedence);

    class LessEqualExpressionContext :public antlr4::ParserRuleContext{
  public:
        LessEqualExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        PrimaryExpressionContext *primaryExpression();

        std::vector<LessEqualExpressionContext *> lessEqualExpression();

        LessEqualExpressionContext *lessEqualExpression(size_t i);

        antlr4::tree::TerminalNode *LessEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    LessEqualExpressionContext *lessEqualExpression();

    LessEqualExpressionContext *lessEqualExpression(int precedence);

    class IdExpressionContext :public antlr4::ParserRuleContext{
  public:
        IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *Identfier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    IdExpressionContext *idExpression();

    class TypeLiteralContext :public antlr4::ParserRuleContext{
  public:
        TypeLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        BasicTypeContext *basicType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    TypeLiteralContext *typeLiteral();

    class BasicTypeContext :public antlr4::ParserRuleContext{
  public:
        BasicTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *Int();

        antlr4::tree::TerminalNode *Char();

        antlr4::tree::TerminalNode *Float();

        antlr4::tree::TerminalNode *Boolen();

        antlr4::tree::TerminalNode *String();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    BasicTypeContext *basicType();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntLiteralContext *intLiteral();

      StrLiteralContext *strLiteral();
    CharLiteralContext *charLiteral();
    FloatLiteralContext *floatLiteral();

      BoolenLiteralContext *boolenLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

    class StrLiteralContext :public antlr4::ParserRuleContext{
  public:
        StrLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    StrLiteralContext *strLiteral();

  class  CharLiteralContext : public antlr4::ParserRuleContext {
  public:
    CharLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

      antlr4::tree::TerminalNode *CharLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharLiteralContext* charLiteral();

    class IntLiteralContext :public antlr4::ParserRuleContext{
  public:
        IntLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *IntegerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    IntLiteralContext *intLiteral();

    class FloatLiteralContext :public antlr4::ParserRuleContext{
  public:
        FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *FloatLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    FloatLiteralContext *floatLiteral();

    class BoolenLiteralContext :public antlr4::ParserRuleContext{
  public:
        BoolenLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *True();

        antlr4::tree::TerminalNode *False();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

    BoolenLiteralContext *boolenLiteral();


    bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

    bool statmentSempred(StatmentContext *_localctx, size_t predicateIndex);

    bool equalExpressionSempred(EqualExpressionContext *_localctx, size_t predicateIndex);

    bool notEqualExpressionSempred(NotEqualExpressionContext *_localctx, size_t predicateIndex);

    bool greaterExpressionSempred(GreaterExpressionContext *_localctx, size_t predicateIndex);

    bool lessExpressionSempred(LessExpressionContext *_localctx, size_t predicateIndex);

    bool lessEqualExpressionSempred(LessEqualExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

