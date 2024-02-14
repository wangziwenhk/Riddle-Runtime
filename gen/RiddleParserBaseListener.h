
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

  virtual void enterStatment(RiddleParser::StatmentContext * /*ctx*/) override { }
  virtual void exitStatment(RiddleParser::StatmentContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(RiddleParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(RiddleParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterIdExpression(RiddleParser::IdExpressionContext * /*ctx*/) override { }
  virtual void exitIdExpression(RiddleParser::IdExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierSet(RiddleParser::IdentifierSetContext * /*ctx*/) override { }
  virtual void exitIdentifierSet(RiddleParser::IdentifierSetContext * /*ctx*/) override { }

  virtual void enterFuncDefintion(RiddleParser::FuncDefintionContext * /*ctx*/) override { }
  virtual void exitFuncDefintion(RiddleParser::FuncDefintionContext * /*ctx*/) override { }

  virtual void enterFuncExpression(RiddleParser::FuncExpressionContext * /*ctx*/) override { }
  virtual void exitFuncExpression(RiddleParser::FuncExpressionContext * /*ctx*/) override { }

  virtual void enterFuncBody(RiddleParser::FuncBodyContext * /*ctx*/) override { }
  virtual void exitFuncBody(RiddleParser::FuncBodyContext * /*ctx*/) override { }

  virtual void enterOneValDeclaration(RiddleParser::OneValDeclarationContext * /*ctx*/) override { }
  virtual void exitOneValDeclaration(RiddleParser::OneValDeclarationContext * /*ctx*/) override { }

  virtual void enterOneValDefintion(RiddleParser::OneValDefintionContext * /*ctx*/) override { }
  virtual void exitOneValDefintion(RiddleParser::OneValDefintionContext * /*ctx*/) override { }

  virtual void enterValDefintion(RiddleParser::ValDefintionContext * /*ctx*/) override { }
  virtual void exitValDefintion(RiddleParser::ValDefintionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(RiddleParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(RiddleParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterTheTypeName(RiddleParser::TheTypeNameContext * /*ctx*/) override { }
  virtual void exitTheTypeName(RiddleParser::TheTypeNameContext * /*ctx*/) override { }

  virtual void enterTypeSpecifier(RiddleParser::TypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeSpecifier(RiddleParser::TypeSpecifierContext * /*ctx*/) override { }

  virtual void enterClassName(RiddleParser::ClassNameContext * /*ctx*/) override { }
  virtual void exitClassName(RiddleParser::ClassNameContext * /*ctx*/) override { }

  virtual void enterTheOperator(RiddleParser::TheOperatorContext * /*ctx*/) override { }
  virtual void exitTheOperator(RiddleParser::TheOperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(RiddleParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(RiddleParser::LiteralContext * /*ctx*/) override { }

  virtual void enterIntLiteral(RiddleParser::IntLiteralContext * /*ctx*/) override { }
  virtual void exitIntLiteral(RiddleParser::IntLiteralContext * /*ctx*/) override { }

  virtual void enterCharLiteral(RiddleParser::CharLiteralContext * /*ctx*/) override { }
  virtual void exitCharLiteral(RiddleParser::CharLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(RiddleParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(RiddleParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterStrLiteral(RiddleParser::StrLiteralContext * /*ctx*/) override { }
  virtual void exitStrLiteral(RiddleParser::StrLiteralContext * /*ctx*/) override { }

  virtual void enterBoolLiteral(RiddleParser::BoolLiteralContext * /*ctx*/) override { }
  virtual void exitBoolLiteral(RiddleParser::BoolLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

