//
// Created by wangz on 2024/3/17.
//

#ifndef RIDDLE_TOASTVISITOR_H
#define RIDDLE_TOASTVISITOR_H

#include "RiddleParserBaseVisitor.h"

class toAstVisitor :public RiddleParserBaseVisitor{
public:
    std::any visitT_primaryExpression(RiddleParser::T_primaryExpressionContext *ctx) override;
    std::any visitLiteral(RiddleParser::LiteralContext *ctx) override;
};


#endif //RIDDLE_TOASTVISITOR_H
