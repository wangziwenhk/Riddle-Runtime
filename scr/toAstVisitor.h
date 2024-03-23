//
// Created by wangz on 2024/3/17.
//

#ifndef RIDDLE_TOASTVISITOR_H
#define RIDDLE_TOASTVISITOR_H

#include "RiddleParserBaseVisitor.h"

class toAstVisitor :public RiddleParserBaseVisitor{
public:

    std::any visitAssignExpression(RiddleParser::AssignExpressionContext *ctx) override;

    std::any visitEqualExpression(RiddleParser::EqualExpressionContext *ctx) override;

    std::any visitNotEqualExpression(RiddleParser::NotEqualExpressionContext *ctx) override;

    std::any visitGreaterExpression(RiddleParser::GreaterExpressionContext *ctx) override;

    std::any visitLessExpression(RiddleParser::LessExpressionContext *ctx) override;

    std::any visitPlusAssignExpression(RiddleParser::PlusAssignExpressionContext *ctx) override;

    std::any visitMinusAssignExpression(RiddleParser::MinusAssignExpressionContext *ctx) override;

    std::any visitLiteral(RiddleParser::LiteralContext *ctx) override;
};


#endif //RIDDLE_TOASTVISITOR_H
