
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

    virtual std::any visitNewline_statment(RiddleParser::Newline_statmentContext *ctx) override{
        return visitChildren(ctx);
    }

  virtual std::any visitStatment(RiddleParser::StatmentContext *ctx) override {
    return visitChildren(ctx);
  }

    virtual std::any visitPrint(RiddleParser::PrintContext *ctx) override{
        return visitChildren(ctx);
    }

  virtual std::any visitPrimaryExpression(RiddleParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

    virtual std::any visitVariableDefine(RiddleParser::VariableDefineContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitIfExpression(RiddleParser::IfExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitWhile(RiddleParser::WhileContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitFuncDefine(RiddleParser::FuncDefineContext *ctx) override{
    return visitChildren(ctx);
  }

  virtual std::any visitFuncBody(RiddleParser::FuncBodyContext *ctx) override {
    return visitChildren(ctx);
  }

    virtual std::any visitBlock(RiddleParser::BlockContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitExpression(RiddleParser::ExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitAssignExpression(RiddleParser::AssignExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitEqualExpression(RiddleParser::EqualExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitNotEqualExpression(RiddleParser::NotEqualExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitGreaterExpression(RiddleParser::GreaterExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitLessExpression(RiddleParser::LessExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitLessEqualExpression(RiddleParser::LessEqualExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitIdExpression(RiddleParser::IdExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitTypeLiteral(RiddleParser::TypeLiteralContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitBasicType(RiddleParser::BasicTypeContext *ctx) override{
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(RiddleParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

    virtual std::any visitStrLiteral(RiddleParser::StrLiteralContext *ctx) override{
    return visitChildren(ctx);
  }

  virtual std::any visitCharLiteral(RiddleParser::CharLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

    virtual std::any visitIntLiteral(RiddleParser::IntLiteralContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitFloatLiteral(RiddleParser::FloatLiteralContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitBoolenLiteral(RiddleParser::BoolenLiteralContext *ctx) override{
    return visitChildren(ctx);
  }


};

