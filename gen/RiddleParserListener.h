
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

  virtual void enterStatment(RiddleParser::StatmentContext *ctx) = 0;
  virtual void exitStatment(RiddleParser::StatmentContext *ctx) = 0;

  virtual void enterPrimaryExpression(RiddleParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(RiddleParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterIdExpression(RiddleParser::IdExpressionContext *ctx) = 0;
  virtual void exitIdExpression(RiddleParser::IdExpressionContext *ctx) = 0;

  virtual void enterIdentifierSet(RiddleParser::IdentifierSetContext *ctx) = 0;
  virtual void exitIdentifierSet(RiddleParser::IdentifierSetContext *ctx) = 0;

  virtual void enterFuncDefintion(RiddleParser::FuncDefintionContext *ctx) = 0;
  virtual void exitFuncDefintion(RiddleParser::FuncDefintionContext *ctx) = 0;

  virtual void enterFuncExpression(RiddleParser::FuncExpressionContext *ctx) = 0;
  virtual void exitFuncExpression(RiddleParser::FuncExpressionContext *ctx) = 0;

  virtual void enterFuncBody(RiddleParser::FuncBodyContext *ctx) = 0;
  virtual void exitFuncBody(RiddleParser::FuncBodyContext *ctx) = 0;

  virtual void enterOneValDeclaration(RiddleParser::OneValDeclarationContext *ctx) = 0;
  virtual void exitOneValDeclaration(RiddleParser::OneValDeclarationContext *ctx) = 0;

  virtual void enterOneValDefintion(RiddleParser::OneValDefintionContext *ctx) = 0;
  virtual void exitOneValDefintion(RiddleParser::OneValDefintionContext *ctx) = 0;

  virtual void enterValDefintion(RiddleParser::ValDefintionContext *ctx) = 0;
  virtual void exitValDefintion(RiddleParser::ValDefintionContext *ctx) = 0;

  virtual void enterAssignmentExpression(RiddleParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(RiddleParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterTheTypeName(RiddleParser::TheTypeNameContext *ctx) = 0;
  virtual void exitTheTypeName(RiddleParser::TheTypeNameContext *ctx) = 0;

  virtual void enterTypeSpecifier(RiddleParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(RiddleParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterClassName(RiddleParser::ClassNameContext *ctx) = 0;
  virtual void exitClassName(RiddleParser::ClassNameContext *ctx) = 0;

  virtual void enterTheOperator(RiddleParser::TheOperatorContext *ctx) = 0;
  virtual void exitTheOperator(RiddleParser::TheOperatorContext *ctx) = 0;

  virtual void enterLiteral(RiddleParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(RiddleParser::LiteralContext *ctx) = 0;

  virtual void enterIntLiteral(RiddleParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(RiddleParser::IntLiteralContext *ctx) = 0;

  virtual void enterCharLiteral(RiddleParser::CharLiteralContext *ctx) = 0;
  virtual void exitCharLiteral(RiddleParser::CharLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(RiddleParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(RiddleParser::FloatLiteralContext *ctx) = 0;

  virtual void enterStrLiteral(RiddleParser::StrLiteralContext *ctx) = 0;
  virtual void exitStrLiteral(RiddleParser::StrLiteralContext *ctx) = 0;

  virtual void enterBoolLiteral(RiddleParser::BoolLiteralContext *ctx) = 0;
  virtual void exitBoolLiteral(RiddleParser::BoolLiteralContext *ctx) = 0;


};

