
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  RiddleParser : public antlr4::Parser {
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

  enum {
      RuleProgram=0, RuleStatment=1, RuleReturnValue=2, RulePrimaryExpression=3,
      RuleIdExpression=4, RuleIdentifierSet=5, RuleFuncDefintion=6,
      RuleFuncExpression=7, RuleFuncBody=8, RuleOneValDeclaration=9,
      RuleOneValDefintion=10, RuleValDefintion=11, RuleAssignmentExpression=12,
      RuleTheTypeName=13, RuleTypeSpecifier=14, RuleClassName=15, RuleTheOperator=16,
      RuleLiteral=17, RuleIntLiteral=18, RuleCharLiteral=19, RuleFloatLiteral=20,
      RuleStrLiteral=21, RuleBoolLiteral=22
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
  class StatmentContext;

    class ReturnValueContext;
  class PrimaryExpressionContext;
  class IdExpressionContext;
  class IdentifierSetContext;
  class FuncDefintionContext;
  class FuncExpressionContext;
  class FuncBodyContext;
  class OneValDeclarationContext;
  class OneValDefintionContext;
  class ValDefintionContext;
  class AssignmentExpressionContext;
  class TheTypeNameContext;
  class TypeSpecifierContext;
  class ClassNameContext;
  class TheOperatorContext;
  class LiteralContext;
  class IntLiteralContext;
  class CharLiteralContext;
  class FloatLiteralContext;
  class StrLiteralContext;
  class BoolLiteralContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatmentContext *> statment();
    StatmentContext* statment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatmentContext : public antlr4::ParserRuleContext {
  public:
    StatmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncDefintionContext *funcDefintion();
    OneValDeclarationContext *oneValDeclaration();
    antlr4::tree::TerminalNode *Semi();
    ValDefintionContext *valDefintion();
    AssignmentExpressionContext *assignmentExpression();

      ReturnValueContext *returnValue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatmentContext* statment();

    class ReturnValueContext :public antlr4::ParserRuleContext{
    public:
        ReturnValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);

        virtual size_t getRuleIndex() const override;

        antlr4::tree::TerminalNode *Return();

        PrimaryExpressionContext *primaryExpression();

        virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

        virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

    };

    ReturnValueContext *returnValue();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    IdExpressionContext *idExpression();
    AssignmentExpressionContext *assignmentExpression();
    FuncExpressionContext *funcExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  IdExpressionContext : public antlr4::ParserRuleContext {
  public:
    IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdExpressionContext* idExpression();

  class  IdentifierSetContext : public antlr4::ParserRuleContext {
  public:
    IdentifierSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dot();
    antlr4::tree::TerminalNode* Dot(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierSetContext* identifierSet();

  class  FuncDefintionContext : public antlr4::ParserRuleContext {
  public:
    FuncDefintionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeNameContext *theTypeName();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    FuncBodyContext *funcBody();
    std::vector<OneValDeclarationContext *> oneValDeclaration();
    OneValDeclarationContext* oneValDeclaration(size_t i);
    std::vector<OneValDefintionContext *> oneValDefintion();
    OneValDefintionContext* oneValDefintion(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDefintionContext* funcDefintion();

  class  FuncExpressionContext : public antlr4::ParserRuleContext {
  public:
    FuncExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<PrimaryExpressionContext *> primaryExpression();
    PrimaryExpressionContext* primaryExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncExpressionContext* funcExpression();

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

  class  OneValDeclarationContext : public antlr4::ParserRuleContext {
  public:
    OneValDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeNameContext *theTypeName();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OneValDeclarationContext* oneValDeclaration();

  class  OneValDefintionContext : public antlr4::ParserRuleContext {
  public:
    OneValDefintionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeNameContext *theTypeName();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    PrimaryExpressionContext *primaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OneValDefintionContext* oneValDefintion();

  class  ValDefintionContext : public antlr4::ParserRuleContext {
  public:
    ValDefintionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeNameContext *theTypeName();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Assign();
    antlr4::tree::TerminalNode* Assign(size_t i);
    std::vector<PrimaryExpressionContext *> primaryExpression();
    PrimaryExpressionContext* primaryExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValDefintionContext* valDefintion();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierSetContext *identifierSet();
    antlr4::tree::TerminalNode *Assign();
    PrimaryExpressionContext *primaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  TheTypeNameContext : public antlr4::ParserRuleContext {
  public:
    TheTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    TypeSpecifierContext *typeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheTypeNameContext* theTypeName();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Int();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Any();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  ClassNameContext : public antlr4::ParserRuleContext {
  public:
    ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassNameContext* className();

  class  TheOperatorContext : public antlr4::ParserRuleContext {
  public:
    TheOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *AndAnd();
    antlr4::tree::TerminalNode *OrOr();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheOperatorContext* theOperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoolLiteralContext *boolLiteral();
    IntLiteralContext *intLiteral();
    CharLiteralContext *charLiteral();
    FloatLiteralContext *floatLiteral();
    StrLiteralContext *strLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  IntLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntLiteralContext* intLiteral();

  class  CharLiteralContext : public antlr4::ParserRuleContext {
  public:
    CharLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CharacterLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharLiteralContext* charLiteral();

  class  FloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FloatingLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatLiteralContext* floatLiteral();

  class  StrLiteralContext : public antlr4::ParserRuleContext {
  public:
    StrLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StrLiteralContext* strLiteral();

  class  BoolLiteralContext : public antlr4::ParserRuleContext {
  public:
    BoolLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *True_();
    antlr4::tree::TerminalNode *False_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolLiteralContext* boolLiteral();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

