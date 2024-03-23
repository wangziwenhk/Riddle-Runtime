
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParserListener.h"


/**
 * This class provides an empty implementation of RiddleParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RiddleParserBaseListener : public RiddleParserListener {
public:

  virtual void enterProgram(RiddleParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(RiddleParser::ProgramContext * /*ctx*/) override { }

    virtual void enterNewline_statment(RiddleParser::Newline_statmentContext * /*ctx*/) override{}

    virtual void exitNewline_statment(RiddleParser::Newline_statmentContext * /*ctx*/) override{}

  virtual void enterStatment(RiddleParser::StatmentContext * /*ctx*/) override { }
  virtual void exitStatment(RiddleParser::StatmentContext * /*ctx*/) override { }

    virtual void enterPrint(RiddleParser::PrintContext * /*ctx*/) override{}

    virtual void exitPrint(RiddleParser::PrintContext * /*ctx*/) override{}

  virtual void enterPrimaryExpression(RiddleParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(RiddleParser::PrimaryExpressionContext * /*ctx*/) override { }

    virtual void enterIdExpression(RiddleParser::IdExpressionContext * /*ctx*/) override{}

    virtual void exitIdExpression(RiddleParser::IdExpressionContext * /*ctx*/) override{}

    virtual void enterVariableDefine(RiddleParser::VariableDefineContext * /*ctx*/) override{}

    virtual void exitVariableDefine(RiddleParser::VariableDefineContext * /*ctx*/) override{}

    virtual void enterIfExpression(RiddleParser::IfExpressionContext * /*ctx*/) override{}

    virtual void exitIfExpression(RiddleParser::IfExpressionContext * /*ctx*/) override{}

    virtual void enterWhile(RiddleParser::WhileContext * /*ctx*/) override{}

    virtual void exitWhile(RiddleParser::WhileContext * /*ctx*/) override{}

    virtual void enterFuncDefine(RiddleParser::FuncDefineContext * /*ctx*/) override{}

    virtual void exitFuncDefine(RiddleParser::FuncDefineContext * /*ctx*/) override{}

  virtual void enterFuncBody(RiddleParser::FuncBodyContext * /*ctx*/) override { }
  virtual void exitFuncBody(RiddleParser::FuncBodyContext * /*ctx*/) override { }

    virtual void enterBlock(RiddleParser::BlockContext * /*ctx*/) override{}

    virtual void exitBlock(RiddleParser::BlockContext * /*ctx*/) override{}

    virtual void enterMinusAssignExpression(RiddleParser::MinusAssignExpressionContext * /*ctx*/) override{}

    virtual void exitMinusAssignExpression(RiddleParser::MinusAssignExpressionContext * /*ctx*/) override{}

    virtual void enterAndAssignExpression(RiddleParser::AndAssignExpressionContext * /*ctx*/) override{}

    virtual void exitAndAssignExpression(RiddleParser::AndAssignExpressionContext * /*ctx*/) override{}

    virtual void enterOrAssignExpression(RiddleParser::OrAssignExpressionContext * /*ctx*/) override{}

    virtual void exitOrAssignExpression(RiddleParser::OrAssignExpressionContext * /*ctx*/) override{}

    virtual void enterRightShiftAssignExpression(RiddleParser::RightShiftAssignExpressionContext * /*ctx*/) override{}

    virtual void exitRightShiftAssignExpression(RiddleParser::RightShiftAssignExpressionContext * /*ctx*/) override{}

    virtual void enterNegativeExpression(RiddleParser::NegativeExpressionContext * /*ctx*/) override{}

    virtual void exitNegativeExpression(RiddleParser::NegativeExpressionContext * /*ctx*/) override{}

    virtual void enterMinusExpression(RiddleParser::MinusExpressionContext * /*ctx*/) override{}

    virtual void exitMinusExpression(RiddleParser::MinusExpressionContext * /*ctx*/) override{}

    virtual void enterTildeExpression(RiddleParser::TildeExpressionContext * /*ctx*/) override{}

    virtual void exitTildeExpression(RiddleParser::TildeExpressionContext * /*ctx*/) override{}

    virtual void enterLessExpression(RiddleParser::LessExpressionContext * /*ctx*/) override{}

    virtual void exitLessExpression(RiddleParser::LessExpressionContext * /*ctx*/) override{}

    virtual void enterLeftPlusPlusExoression(RiddleParser::LeftPlusPlusExoressionContext * /*ctx*/) override{}

    virtual void exitLeftPlusPlusExoression(RiddleParser::LeftPlusPlusExoressionContext * /*ctx*/) override{}

    virtual void enterLeftMinusMinusExpression(RiddleParser::LeftMinusMinusExpressionContext * /*ctx*/) override{}

    virtual void exitLeftMinusMinusExpression(RiddleParser::LeftMinusMinusExpressionContext * /*ctx*/) override{}

    virtual void enterModExpression(RiddleParser::ModExpressionContext * /*ctx*/) override{}

    virtual void exitModExpression(RiddleParser::ModExpressionContext * /*ctx*/) override{}

    virtual void enterNotExpression(RiddleParser::NotExpressionContext * /*ctx*/) override{}

    virtual void exitNotExpression(RiddleParser::NotExpressionContext * /*ctx*/) override{}

    virtual void enterDivExpression(RiddleParser::DivExpressionContext * /*ctx*/) override{}

    virtual void exitDivExpression(RiddleParser::DivExpressionContext * /*ctx*/) override{}

    virtual void enterPlusAssignExpression(RiddleParser::PlusAssignExpressionContext * /*ctx*/) override{}

    virtual void exitPlusAssignExpression(RiddleParser::PlusAssignExpressionContext * /*ctx*/) override{}

    virtual void enterRightShiftExpression(RiddleParser::RightShiftExpressionContext * /*ctx*/) override{}

    virtual void exitRightShiftExpression(RiddleParser::RightShiftExpressionContext * /*ctx*/) override{}

    virtual void enterAndExpression(RiddleParser::AndExpressionContext * /*ctx*/) override{}

    virtual void exitAndExpression(RiddleParser::AndExpressionContext * /*ctx*/) override{}

    virtual void enterDivAssignEpxression(RiddleParser::DivAssignEpxressionContext * /*ctx*/) override{}

    virtual void exitDivAssignEpxression(RiddleParser::DivAssignEpxressionContext * /*ctx*/) override{}

    virtual void enterLeftShiftExpression(RiddleParser::LeftShiftExpressionContext * /*ctx*/) override{}

    virtual void exitLeftShiftExpression(RiddleParser::LeftShiftExpressionContext * /*ctx*/) override{}

    virtual void enterAndAndExpression(RiddleParser::AndAndExpressionContext * /*ctx*/) override{}

    virtual void exitAndAndExpression(RiddleParser::AndAndExpressionContext * /*ctx*/) override{}

    virtual void enterPositiveExpression(RiddleParser::PositiveExpressionContext * /*ctx*/) override{}

    virtual void exitPositiveExpression(RiddleParser::PositiveExpressionContext * /*ctx*/) override{}

    virtual void enterPlusExpression(RiddleParser::PlusExpressionContext * /*ctx*/) override{}

    virtual void exitPlusExpression(RiddleParser::PlusExpressionContext * /*ctx*/) override{}

    virtual void enterLessEqualExpression(RiddleParser::LessEqualExpressionContext * /*ctx*/) override{}

    virtual void exitLessEqualExpression(RiddleParser::LessEqualExpressionContext * /*ctx*/) override{}

    virtual void enterEqualExpression(RiddleParser::EqualExpressionContext * /*ctx*/) override{}

    virtual void exitEqualExpression(RiddleParser::EqualExpressionContext * /*ctx*/) override{}

    virtual void enterT_primaryExpression(RiddleParser::T_primaryExpressionContext * /*ctx*/) override{}

    virtual void exitT_primaryExpression(RiddleParser::T_primaryExpressionContext * /*ctx*/) override{}

    virtual void enterOrOrExpression(RiddleParser::OrOrExpressionContext * /*ctx*/) override{}

    virtual void exitOrOrExpression(RiddleParser::OrOrExpressionContext * /*ctx*/) override{}

    virtual void enterModAssignExpression(RiddleParser::ModAssignExpressionContext * /*ctx*/) override{}

    virtual void exitModAssignExpression(RiddleParser::ModAssignExpressionContext * /*ctx*/) override{}

    virtual void enterAssignExpression(RiddleParser::AssignExpressionContext * /*ctx*/) override{}

    virtual void exitAssignExpression(RiddleParser::AssignExpressionContext * /*ctx*/) override{}

    virtual void enterNotEqualExpression(RiddleParser::NotEqualExpressionContext * /*ctx*/) override{}

    virtual void exitNotEqualExpression(RiddleParser::NotEqualExpressionContext * /*ctx*/) override{}

    virtual void enterXorAssignExpression(RiddleParser::XorAssignExpressionContext * /*ctx*/) override{}

    virtual void exitXorAssignExpression(RiddleParser::XorAssignExpressionContext * /*ctx*/) override{}

    virtual void enterCommaExpression(RiddleParser::CommaExpressionContext * /*ctx*/) override{}

    virtual void exitCommaExpression(RiddleParser::CommaExpressionContext * /*ctx*/) override{}

    virtual void enterOrExpression(RiddleParser::OrExpressionContext * /*ctx*/) override{}

    virtual void exitOrExpression(RiddleParser::OrExpressionContext * /*ctx*/) override{}

    virtual void enterRightPlusPlusExoression(RiddleParser::RightPlusPlusExoressionContext * /*ctx*/) override{}

    virtual void exitRightPlusPlusExoression(RiddleParser::RightPlusPlusExoressionContext * /*ctx*/) override{}

    virtual void enterLeftShiftAssignExpression(RiddleParser::LeftShiftAssignExpressionContext * /*ctx*/) override{}

    virtual void exitLeftShiftAssignExpression(RiddleParser::LeftShiftAssignExpressionContext * /*ctx*/) override{}

    virtual void enterCallExpression(RiddleParser::CallExpressionContext * /*ctx*/) override{}

    virtual void exitCallExpression(RiddleParser::CallExpressionContext * /*ctx*/) override{}

    virtual void enterGreaterExpression(RiddleParser::GreaterExpressionContext * /*ctx*/) override{}

    virtual void exitGreaterExpression(RiddleParser::GreaterExpressionContext * /*ctx*/) override{}

    virtual void enterRightMinusMinusExpression(RiddleParser::RightMinusMinusExpressionContext * /*ctx*/) override{}

    virtual void exitRightMinusMinusExpression(RiddleParser::RightMinusMinusExpressionContext * /*ctx*/) override{}

    virtual void enterQuoteExpression(RiddleParser::QuoteExpressionContext * /*ctx*/) override{}

    virtual void exitQuoteExpression(RiddleParser::QuoteExpressionContext * /*ctx*/) override{}

    virtual void enterGreaterEqualExpression(RiddleParser::GreaterEqualExpressionContext * /*ctx*/) override{}

    virtual void exitGreaterEqualExpression(RiddleParser::GreaterEqualExpressionContext * /*ctx*/) override{}

    virtual void enterCaretExpression(RiddleParser::CaretExpressionContext * /*ctx*/) override{}

    virtual void exitCaretExpression(RiddleParser::CaretExpressionContext * /*ctx*/) override{}

    virtual void enterStarExpression(RiddleParser::StarExpressionContext * /*ctx*/) override{}

    virtual void exitStarExpression(RiddleParser::StarExpressionContext * /*ctx*/) override{}

    virtual void enterTypeLiteral(RiddleParser::TypeLiteralContext * /*ctx*/) override{}

    virtual void exitTypeLiteral(RiddleParser::TypeLiteralContext * /*ctx*/) override{}

    virtual void enterBasicType(RiddleParser::BasicTypeContext * /*ctx*/) override{}

    virtual void exitBasicType(RiddleParser::BasicTypeContext * /*ctx*/) override{}

  virtual void enterLiteral(RiddleParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(RiddleParser::LiteralContext * /*ctx*/) override { }

    virtual void enterStrLiteral(RiddleParser::StrLiteralContext * /*ctx*/) override{}

    virtual void exitStrLiteral(RiddleParser::StrLiteralContext * /*ctx*/) override{}

  virtual void enterCharLiteral(RiddleParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(RiddleParser::CharLiteralContext * /*ctx*/) override { }

    virtual void enterIntLiteral(RiddleParser::IntLiteralContext * /*ctx*/) override{}

    virtual void exitIntLiteral(RiddleParser::IntLiteralContext * /*ctx*/) override{}

  virtual void enterFloatLiteral(RiddleParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(RiddleParser::FloatLiteralContext * /*ctx*/) override { }

    virtual void enterBoolenLiteral(RiddleParser::BoolenLiteralContext * /*ctx*/) override{}

    virtual void exitBoolenLiteral(RiddleParser::BoolenLiteralContext * /*ctx*/) override{}


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

