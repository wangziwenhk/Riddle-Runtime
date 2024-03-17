
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

    virtual void enterExpression(RiddleParser::ExpressionContext *ctx) = 0;

    virtual void exitExpression(RiddleParser::ExpressionContext *ctx) = 0;

    virtual void enterAssignExpression(RiddleParser::AssignExpressionContext *ctx) = 0;

    virtual void exitAssignExpression(RiddleParser::AssignExpressionContext *ctx) = 0;

    virtual void enterEqualExpression(RiddleParser::EqualExpressionContext *ctx) = 0;

    virtual void exitEqualExpression(RiddleParser::EqualExpressionContext *ctx) = 0;

    virtual void enterNotEqualExpression(RiddleParser::NotEqualExpressionContext *ctx) = 0;

    virtual void exitNotEqualExpression(RiddleParser::NotEqualExpressionContext *ctx) = 0;

    virtual void enterGreaterExpression(RiddleParser::GreaterExpressionContext *ctx) = 0;

    virtual void exitGreaterExpression(RiddleParser::GreaterExpressionContext *ctx) = 0;

    virtual void enterLessExpression(RiddleParser::LessExpressionContext *ctx) = 0;

    virtual void exitLessExpression(RiddleParser::LessExpressionContext *ctx) = 0;

    virtual void enterLessAssignExpression(RiddleParser::LessAssignExpressionContext *ctx) = 0;

    virtual void exitLessAssignExpression(RiddleParser::LessAssignExpressionContext *ctx) = 0;

    virtual void enterGreaterAssignExpression(RiddleParser::GreaterAssignExpressionContext *ctx) = 0;

    virtual void exitGreaterAssignExpression(RiddleParser::GreaterAssignExpressionContext *ctx) = 0;

    virtual void enterPlusAssignExpression(RiddleParser::PlusAssignExpressionContext *ctx) = 0;

    virtual void exitPlusAssignExpression(RiddleParser::PlusAssignExpressionContext *ctx) = 0;

    virtual void enterMinusAssignExpression(RiddleParser::MinusAssignExpressionContext *ctx) = 0;

    virtual void exitMinusAssignExpression(RiddleParser::MinusAssignExpressionContext *ctx) = 0;

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

