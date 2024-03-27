//
// Created by wangz on 2024/3/17.
//

#include "toAstVisitor.h"

std::any toAstVisitor::visitT_primaryExpression(RiddleParser::T_primaryExpressionContext *ctx){
    if(ctx->children.size() == 1){
        ctx->children=ctx->children[0]->children;
        visit(ctx);
    } else visit(ctx->children[0]);
    return {};
}

std::any toAstVisitor::visitLiteral(RiddleParser::LiteralContext *ctx){
    if(ctx->children.size() == 1){
        ctx->children=ctx->children[0]->children;
        visit(ctx);
    } else visit(ctx->children[0]);
    return {};
}
