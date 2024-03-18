
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RiddleParser.
 */
class  RiddleParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(RiddleParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(RiddleParser::ProgramContext *ctx) = 0;

    virtual void enterNewline_statment(RiddleParser::Newline_statmentContext *ctx) = 0;

    virtual void exitNewline_statment(RiddleParser::Newline_statmentContext *ctx) = 0;

  virtual void enterStatment(RiddleParser::StatmentContext *ctx) = 0;
  virtual void exitStatment(RiddleParser::StatmentContext *ctx) = 0;

    virtual void enterPrint(RiddleParser::PrintContext *ctx) = 0;

    virtual void exitPrint(RiddleParser::PrintContext *ctx) = 0;

  virtual void enterPrimaryExpression(RiddleParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(RiddleParser::PrimaryExpressionContext *ctx) = 0;

    virtual void enterDotExpression(RiddleParser::DotExpressionContext *ctx) = 0;

    virtual void exitDotExpression(RiddleParser::DotExpressionContext *ctx) = 0;

    virtual void enterVariableDefine(RiddleParser::VariableDefineContext *ctx) = 0;

    virtual void exitVariableDefine(RiddleParser::VariableDefineContext *ctx) = 0;

    virtual void enterIfExpression(RiddleParser::IfExpressionContext *ctx) = 0;

    virtual void exitIfExpression(RiddleParser::IfExpressionContext *ctx) = 0;

    virtual void enterWhile(RiddleParser::WhileContext *ctx) = 0;

    virtual void exitWhile(RiddleParser::WhileContext *ctx) = 0;

    virtual void enterFuncDefine(RiddleParser::FuncDefineContext *ctx) = 0;

    virtual void exitFuncDefine(RiddleParser::FuncDefineContext *ctx) = 0;

  virtual void enterFuncBody(RiddleParser::FuncBodyContext *ctx) = 0;
  virtual void exitFuncBody(RiddleParser::FuncBodyContext *ctx) = 0;

    virtual void enterBlock(RiddleParser::BlockContext *ctx) = 0;

    virtual void exitBlock(RiddleParser::BlockContext *ctx) = 0;

    virtual void enterMinusAssignExpression(RiddleParser::MinusAssignExpressionContext *ctx) = 0;

    virtual void exitMinusAssignExpression(RiddleParser::MinusAssignExpressionContext *ctx) = 0;

    virtual void enterMinusExpression(RiddleParser::MinusExpressionContext *ctx) = 0;

    virtual void exitMinusExpression(RiddleParser::MinusExpressionContext *ctx) = 0;

    virtual void enterModAssignExpression(RiddleParser::ModAssignExpressionContext *ctx) = 0;

    virtual void exitModAssignExpression(RiddleParser::ModAssignExpressionContext *ctx) = 0;

    virtual void enterTildeExpression(RiddleParser::TildeExpressionContext *ctx) = 0;

    virtual void exitTildeExpression(RiddleParser::TildeExpressionContext *ctx) = 0;

    virtual void enterAssignExpression(RiddleParser::AssignExpressionContext *ctx) = 0;

    virtual void exitAssignExpression(RiddleParser::AssignExpressionContext *ctx) = 0;

    virtual void enterLessExpression(RiddleParser::LessExpressionContext *ctx) = 0;

    virtual void exitLessExpression(RiddleParser::LessExpressionContext *ctx) = 0;

    virtual void enterModExpression(RiddleParser::ModExpressionContext *ctx) = 0;

    virtual void exitModExpression(RiddleParser::ModExpressionContext *ctx) = 0;

    virtual void enterDivExpression(RiddleParser::DivExpressionContext *ctx) = 0;

    virtual void exitDivExpression(RiddleParser::DivExpressionContext *ctx) = 0;

    virtual void enterNotExpression(RiddleParser::NotExpressionContext *ctx) = 0;

    virtual void exitNotExpression(RiddleParser::NotExpressionContext *ctx) = 0;

    virtual void enterXorAssignExpression(RiddleParser::XorAssignExpressionContext *ctx) = 0;

    virtual void exitXorAssignExpression(RiddleParser::XorAssignExpressionContext *ctx) = 0;

    virtual void enterBracketExpression(RiddleParser::BracketExpressionContext *ctx) = 0;

    virtual void exitBracketExpression(RiddleParser::BracketExpressionContext *ctx) = 0;

    virtual void enterPlusAssignExpression(RiddleParser::PlusAssignExpressionContext *ctx) = 0;

    virtual void exitPlusAssignExpression(RiddleParser::PlusAssignExpressionContext *ctx) = 0;

    virtual void enterOrExpression(RiddleParser::OrExpressionContext *ctx) = 0;

    virtual void exitOrExpression(RiddleParser::OrExpressionContext *ctx) = 0;

    virtual void enterAndExpression(RiddleParser::AndExpressionContext *ctx) = 0;

    virtual void exitAndExpression(RiddleParser::AndExpressionContext *ctx) = 0;

    virtual void enterGreaterExpression(RiddleParser::GreaterExpressionContext *ctx) = 0;

    virtual void exitGreaterExpression(RiddleParser::GreaterExpressionContext *ctx) = 0;

    virtual void enterDivAssignEpxression(RiddleParser::DivAssignEpxressionContext *ctx) = 0;

    virtual void exitDivAssignEpxression(RiddleParser::DivAssignEpxressionContext *ctx) = 0;

    virtual void enterCaretExpression(RiddleParser::CaretExpressionContext *ctx) = 0;

    virtual void exitCaretExpression(RiddleParser::CaretExpressionContext *ctx) = 0;

    virtual void enterPlusExpression(RiddleParser::PlusExpressionContext *ctx) = 0;

    virtual void exitPlusExpression(RiddleParser::PlusExpressionContext *ctx) = 0;

    virtual void enterT_primaryExpression(RiddleParser::T_primaryExpressionContext *ctx) = 0;

    virtual void exitT_primaryExpression(RiddleParser::T_primaryExpressionContext *ctx) = 0;

    virtual void enterStarExpression(RiddleParser::StarExpressionContext *ctx) = 0;

    virtual void exitStarExpression(RiddleParser::StarExpressionContext *ctx) = 0;

    virtual void enterIdExpression(RiddleParser::IdExpressionContext *ctx) = 0;

    virtual void exitIdExpression(RiddleParser::IdExpressionContext *ctx) = 0;

    virtual void enterTypeLiteral(RiddleParser::TypeLiteralContext *ctx) = 0;

    virtual void exitTypeLiteral(RiddleParser::TypeLiteralContext *ctx) = 0;

    virtual void enterBasicType(RiddleParser::BasicTypeContext *ctx) = 0;

    virtual void exitBasicType(RiddleParser::BasicTypeContext *ctx) = 0;

  virtual void enterLiteral(RiddleParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(RiddleParser::LiteralContext *ctx) = 0;

    virtual void enterStrLiteral(RiddleParser::StrLiteralContext *ctx) = 0;

    virtual void exitStrLiteral(RiddleParser::StrLiteralContext *ctx) = 0;

  virtual void enterCharLiteral(RiddleParser::CharLiteralContext *ctx) = 0;
  virtual void exitCharLiteral(RiddleParser::CharLiteralContext *ctx) = 0;

    virtual void enterIntLiteral(RiddleParser::IntLiteralContext *ctx) = 0;

    virtual void exitIntLiteral(RiddleParser::IntLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(RiddleParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(RiddleParser::FloatLiteralContext *ctx) = 0;

    virtual void enterBoolenLiteral(RiddleParser::BoolenLiteralContext *ctx) = 0;

    virtual void exitBoolenLiteral(RiddleParser::BoolenLiteralContext *ctx) = 0;


};

