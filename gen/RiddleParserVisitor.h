
// Generated from C:/Users/wangz/CLionProjects/Riddle/RiddleParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RiddleParser.
 */
class  RiddleParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RiddleParser.
   */
    virtual std::any visitProgram(RiddleParser::ProgramContext *context) = 0;

    virtual std::any visitNewline_statment(RiddleParser::Newline_statmentContext *context) = 0;

    virtual std::any visitStatment(RiddleParser::StatmentContext *context) = 0;

    virtual std::any visitPrint(RiddleParser::PrintContext *context) = 0;

    virtual std::any visitPrimaryExpression(RiddleParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitVariableDefine(RiddleParser::VariableDefineContext *context) = 0;

    virtual std::any visitIfExpression(RiddleParser::IfExpressionContext *context) = 0;

    virtual std::any visitWhile(RiddleParser::WhileContext *context) = 0;

    virtual std::any visitFuncDefine(RiddleParser::FuncDefineContext *context) = 0;

    virtual std::any visitFuncBody(RiddleParser::FuncBodyContext *context) = 0;

    virtual std::any visitBlock(RiddleParser::BlockContext *context) = 0;

    virtual std::any visitExpression(RiddleParser::ExpressionContext *context) = 0;

    virtual std::any visitAssignExpression(RiddleParser::AssignExpressionContext *context) = 0;

    virtual std::any visitEqualExpression(RiddleParser::EqualExpressionContext *context) = 0;

    virtual std::any visitNotEqualExpression(RiddleParser::NotEqualExpressionContext *context) = 0;

    virtual std::any visitGreaterExpression(RiddleParser::GreaterExpressionContext *context) = 0;

    virtual std::any visitLessExpression(RiddleParser::LessExpressionContext *context) = 0;

    virtual std::any visitLessEqualExpression(RiddleParser::LessEqualExpressionContext *context) = 0;

    virtual std::any visitGreaterEqualExpression(RiddleParser::GreaterEqualExpressionContext *context) = 0;

    virtual std::any visitIdExpression(RiddleParser::IdExpressionContext *context) = 0;

    virtual std::any visitTypeLiteral(RiddleParser::TypeLiteralContext *context) = 0;

    virtual std::any visitBasicType(RiddleParser::BasicTypeContext *context) = 0;

    virtual std::any visitLiteral(RiddleParser::LiteralContext *context) = 0;

    virtual std::any visitStrLiteral(RiddleParser::StrLiteralContext *context) = 0;

    virtual std::any visitCharLiteral(RiddleParser::CharLiteralContext *context) = 0;

    virtual std::any visitIntLiteral(RiddleParser::IntLiteralContext *context) = 0;

    virtual std::any visitFloatLiteral(RiddleParser::FloatLiteralContext *context) = 0;

    virtual std::any visitBoolenLiteral(RiddleParser::BoolenLiteralContext *context) = 0;


};

