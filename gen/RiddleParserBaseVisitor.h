
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

    virtual std::any visitIdExpression(RiddleParser::IdExpressionContext *ctx) override{
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

    virtual std::any visitMinusAssignExpression(RiddleParser::MinusAssignExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitAndAssignExpression(RiddleParser::AndAssignExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitOrAssignExpression(RiddleParser::OrAssignExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitRightShiftAssignExpression(RiddleParser::RightShiftAssignExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitNegativeExpression(RiddleParser::NegativeExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitMinusExpression(RiddleParser::MinusExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitTildeExpression(RiddleParser::TildeExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitLessExpression(RiddleParser::LessExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitLeftPlusPlusExoression(RiddleParser::LeftPlusPlusExoressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitLeftMinusMinusExpression(RiddleParser::LeftMinusMinusExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitModExpression(RiddleParser::ModExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitNotExpression(RiddleParser::NotExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitDivExpression(RiddleParser::DivExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitPlusAssignExpression(RiddleParser::PlusAssignExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitRightShiftExpression(RiddleParser::RightShiftExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitAndExpression(RiddleParser::AndExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitDivAssignEpxression(RiddleParser::DivAssignEpxressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitLeftShiftExpression(RiddleParser::LeftShiftExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitAndAndExpression(RiddleParser::AndAndExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitPositiveExpression(RiddleParser::PositiveExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitPlusExpression(RiddleParser::PlusExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitLessEqualExpression(RiddleParser::LessEqualExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitEqualExpression(RiddleParser::EqualExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitT_primaryExpression(RiddleParser::T_primaryExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitOrOrExpression(RiddleParser::OrOrExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitModAssignExpression(RiddleParser::ModAssignExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitAssignExpression(RiddleParser::AssignExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitNotEqualExpression(RiddleParser::NotEqualExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitXorAssignExpression(RiddleParser::XorAssignExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitCommaExpression(RiddleParser::CommaExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitOrExpression(RiddleParser::OrExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitRightPlusPlusExoression(RiddleParser::RightPlusPlusExoressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitLeftShiftAssignExpression(RiddleParser::LeftShiftAssignExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitCallExpression(RiddleParser::CallExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitGreaterExpression(RiddleParser::GreaterExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitRightMinusMinusExpression(RiddleParser::RightMinusMinusExpressionContext *ctx) override{
    return visitChildren(ctx);
  }

    virtual std::any visitQuoteExpression(RiddleParser::QuoteExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitGreaterEqualExpression(RiddleParser::GreaterEqualExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitCaretExpression(RiddleParser::CaretExpressionContext *ctx) override{
        return visitChildren(ctx);
    }

    virtual std::any visitStarExpression(RiddleParser::StarExpressionContext *ctx) override{
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

