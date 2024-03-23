
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

  enum {
      RuleProgram=0, RuleNewline_statment=1, RuleStatment=2, RulePrint=3,
      RulePrimaryExpression=4, RuleIdExpression=5, RuleVariableDefine=6,
      RuleIfExpression=7, RuleWhile=8, RuleFuncDefine=9, RuleFuncBody=10,
      RuleBlock=11, RuleExpression=12, RuleTypeLiteral=13, RuleBasicType=14,
      RuleLiteral=15, RuleStrLiteral=16, RuleCharLiteral=17, RuleIntLiteral=18,
      RuleFloatLiteral=19, RuleBoolenLiteral=20
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

    class IdExpressionContext;

    class VariableDefineContext;

    class IfExpressionContext;

    class WhileContext;

    class FuncDefineContext;
  class FuncBodyContext;

    class BlockContext;

    class ExpressionContext;

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

    class IdExpressionContext :public antlr4::ParserRuleContext{
    public:
        IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *Identfier();

        std::vector<IdExpressionContext *> idExpression();

        IdExpressionContext *idExpression(size_t i);

        antlr4::tree::TerminalNode *Dot();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

    };

    IdExpressionContext *idExpression();

    IdExpressionContext *idExpression(int precedence);

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

        ExpressionContext() = default;

        void copyFrom(ExpressionContext *context);

        using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;


    };

    class MinusAssignExpressionContext :public ExpressionContext{
    public:
        MinusAssignExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *MinusAssign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class AndAssignExpressionContext :public ExpressionContext{
    public:
        AndAssignExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *AndAssign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class OrAssignExpressionContext :public ExpressionContext{
    public:
        OrAssignExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *OrAssign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class RightShiftAssignExpressionContext :public ExpressionContext{
    public:
        RightShiftAssignExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *RightShiftAssign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class NegativeExpressionContext :public ExpressionContext{
    public:
        NegativeExpressionContext(ExpressionContext *ctx);

        antlr4::tree::TerminalNode *Minus();

        ExpressionContext *expression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class MinusExpressionContext :public ExpressionContext{
    public:
        MinusExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Minus();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class TildeExpressionContext :public ExpressionContext{
    public:
        TildeExpressionContext(ExpressionContext *ctx);

        antlr4::tree::TerminalNode *Tilde();

        ExpressionContext *expression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class LessExpressionContext :public ExpressionContext{
    public:
        LessExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Less();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class LeftPlusPlusExoressionContext :public ExpressionContext{
    public:
        LeftPlusPlusExoressionContext(ExpressionContext *ctx);

        antlr4::tree::TerminalNode *PlusPlus();

        IdExpressionContext *idExpression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class LeftMinusMinusExpressionContext :public ExpressionContext{
    public:
        LeftMinusMinusExpressionContext(ExpressionContext *ctx);

        antlr4::tree::TerminalNode *MinusMinus();

        IdExpressionContext *idExpression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class ModExpressionContext :public ExpressionContext{
    public:
        ModExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Mod();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class NotExpressionContext :public ExpressionContext{
    public:
        NotExpressionContext(ExpressionContext *ctx);

        antlr4::tree::TerminalNode *Not();

        ExpressionContext *expression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class DivExpressionContext :public ExpressionContext{
    public:
        DivExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Div();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

    class PlusAssignExpressionContext :public ExpressionContext{
  public:
        PlusAssignExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *PlusAssign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class RightShiftExpressionContext :public ExpressionContext{
    public:
        RightShiftExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *RightShift();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class AndExpressionContext :public ExpressionContext{
    public:
        AndExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *And();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class DivAssignEpxressionContext :public ExpressionContext{
    public:
        DivAssignEpxressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *DivAssign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class LeftShiftExpressionContext :public ExpressionContext{
    public:
        LeftShiftExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *LeftShift();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class AndAndExpressionContext :public ExpressionContext{
    public:
        AndAndExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *AndAnd();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class PositiveExpressionContext :public ExpressionContext{
    public:
        PositiveExpressionContext(ExpressionContext *ctx);

        antlr4::tree::TerminalNode *Plus();

        ExpressionContext *expression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class PlusExpressionContext :public ExpressionContext{
    public:
        PlusExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Plus();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class LessEqualExpressionContext :public ExpressionContext{
    public:
        LessEqualExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *LessEqual();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class EqualExpressionContext :public ExpressionContext{
    public:
        EqualExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Equal();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class T_primaryExpressionContext :public ExpressionContext{
    public:
        T_primaryExpressionContext(ExpressionContext *ctx);

        PrimaryExpressionContext *primaryExpression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class OrOrExpressionContext :public ExpressionContext{
    public:
        OrOrExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *OrOr();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class ModAssignExpressionContext :public ExpressionContext{
    public:
        ModAssignExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *ModAssign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class AssignExpressionContext :public ExpressionContext{
    public:
        AssignExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Assign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class NotEqualExpressionContext :public ExpressionContext{
    public:
        NotEqualExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *NotEqual();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class XorAssignExpressionContext :public ExpressionContext{
    public:
        XorAssignExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *XorAssign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class CommaExpressionContext :public ExpressionContext{
    public:
        CommaExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Comma();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class OrExpressionContext :public ExpressionContext{
    public:
        OrExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Or();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class RightPlusPlusExoressionContext :public ExpressionContext{
    public:
        RightPlusPlusExoressionContext(ExpressionContext *ctx);

        IdExpressionContext *idExpression();

        antlr4::tree::TerminalNode *PlusPlus();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class LeftShiftAssignExpressionContext :public ExpressionContext{
    public:
        LeftShiftAssignExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *LeftShiftAssign();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class CallExpressionContext :public ExpressionContext{
    public:
        CallExpressionContext(ExpressionContext *ctx);

        IdExpressionContext *idExpression();

        antlr4::tree::TerminalNode *LeftBracket();

        ExpressionContext *expression();

        antlr4::tree::TerminalNode *RightBracket();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class GreaterExpressionContext :public ExpressionContext{
    public:
        GreaterExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Greater();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

    class RightMinusMinusExpressionContext :public ExpressionContext{
  public:
        RightMinusMinusExpressionContext(ExpressionContext *ctx);

        IdExpressionContext *idExpression();

        antlr4::tree::TerminalNode *MinusMinus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

    class QuoteExpressionContext :public ExpressionContext{
  public:
        QuoteExpressionContext(ExpressionContext *ctx);

        antlr4::tree::TerminalNode *And();

        IdExpressionContext *idExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

    class GreaterEqualExpressionContext :public ExpressionContext{
    public:
        GreaterEqualExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *GreaterEqual();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class CaretExpressionContext :public ExpressionContext{
    public:
        CaretExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Caret();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    class StarExpressionContext :public ExpressionContext{
    public:
        StarExpressionContext(ExpressionContext *ctx);

        std::vector<ExpressionContext *> expression();

        ExpressionContext *expression(size_t i);

        antlr4::tree::TerminalNode *Star();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
    };

    ExpressionContext *expression();

    ExpressionContext *expression(int precedence);

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

    bool idExpressionSempred(IdExpressionContext *_localctx, size_t predicateIndex);

    bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

