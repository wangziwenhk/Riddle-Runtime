
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

    virtual std::any visitDotExpression(RiddleParser::DotExpressionContext *context) = 0;

    virtual std::any visitVariableDefine(RiddleParser::VariableDefineContext *context) = 0;

    virtual std::any visitIfExpression(RiddleParser::IfExpressionContext *context) = 0;

    virtual std::any visitWhile(RiddleParser::WhileContext *context) = 0;

    virtual std::any visitFuncDefine(RiddleParser::FuncDefineContext *context) = 0;

    virtual std::any visitFuncBody(RiddleParser::FuncBodyContext *context) = 0;

    virtual std::any visitBlock(RiddleParser::BlockContext *context) = 0;

    virtual std::any visitMinusAssignExpression(RiddleParser::MinusAssignExpressionContext *context) = 0;

    virtual std::any visitMinusExpression(RiddleParser::MinusExpressionContext *context) = 0;

    virtual std::any visitModAssignExpression(RiddleParser::ModAssignExpressionContext *context) = 0;

    virtual std::any visitTildeExpression(RiddleParser::TildeExpressionContext *context) = 0;

    virtual std::any visitAssignExpression(RiddleParser::AssignExpressionContext *context) = 0;

    virtual std::any visitLessExpression(RiddleParser::LessExpressionContext *context) = 0;

    virtual std::any visitModExpression(RiddleParser::ModExpressionContext *context) = 0;

    virtual std::any visitDivExpression(RiddleParser::DivExpressionContext *context) = 0;

    virtual std::any visitNotExpression(RiddleParser::NotExpressionContext *context) = 0;

    virtual std::any visitXorAssignExpression(RiddleParser::XorAssignExpressionContext *context) = 0;

    virtual std::any visitBracketExpression(RiddleParser::BracketExpressionContext *context) = 0;

    virtual std::any visitPlusAssignExpression(RiddleParser::PlusAssignExpressionContext *context) = 0;

    virtual std::any visitOrExpression(RiddleParser::OrExpressionContext *context) = 0;

    virtual std::any visitAndExpression(RiddleParser::AndExpressionContext *context) = 0;

    virtual std::any visitGreaterExpression(RiddleParser::GreaterExpressionContext *context) = 0;

    virtual std::any visitDivAssignEpxression(RiddleParser::DivAssignEpxressionContext *context) = 0;

    virtual std::any visitCaretExpression(RiddleParser::CaretExpressionContext *context) = 0;

    virtual std::any visitPlusExpression(RiddleParser::PlusExpressionContext *context) = 0;

    virtual std::any visitT_primaryExpression(RiddleParser::T_primaryExpressionContext *context) = 0;

    virtual std::any visitStarExpression(RiddleParser::StarExpressionContext *context) = 0;

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

