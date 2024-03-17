
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParserVisitor.h"


/**
 * This class provides an empty implementation of RiddleParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RiddleParserBaseVisitor : public RiddleParserVisitor {
public:

  virtual std::any visitProgram(RiddleParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatment(RiddleParser::StatmentContext *ctx) override {
    return visitChildren(ctx);
  }

    virtual std::any visitReturnValue(RiddleParser::ReturnValueContext *ctx) override{
        return visitChildren(ctx);
    }

  virtual std::any visitPrimaryExpression(RiddleParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExpression(RiddleParser::IdExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierSet(RiddleParser::IdentifierSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDefintion(RiddleParser::FuncDefintionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncExpression(RiddleParser::FuncExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncBody(RiddleParser::FuncBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOneValDeclaration(RiddleParser::OneValDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOneValDefintion(RiddleParser::OneValDefintionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValDefintion(RiddleParser::ValDefintionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpression(RiddleParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheTypeName(RiddleParser::TheTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifier(RiddleParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassName(RiddleParser::ClassNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheOperator(RiddleParser::TheOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(RiddleParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntLiteral(RiddleParser::IntLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharLiteral(RiddleParser::CharLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatLiteral(RiddleParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStrLiteral(RiddleParser::StrLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolLiteral(RiddleParser::BoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

