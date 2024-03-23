//
// Created by wangz on 2024/3/17.
//

#include "toAstVisitor.h"


std::any toAstVisitor::visitAssignExpression(RiddleParser::AssignExpressionContext *ctx){
    if(ctx->children.size() == 1){
        auto temp=ctx->children[0]->children;
        ctx->children=temp;
        visit(ctx);
    } else visitChildren(ctx);
    return {};
}

std::any toAstVisitor::visitEqualExpression(RiddleParser::EqualExpressionContext *ctx){
    if(ctx->children.size() == 1){
        auto temp=ctx->children[0]->children;
        ctx->children=temp;
        visit(ctx);
    } else visitChildren(ctx);
    return {};
}

std::any toAstVisitor::visitGreaterExpression(RiddleParser::GreaterExpressionContext *ctx){
    if(ctx->children.size() == 1){
        auto temp=ctx->children[0]->children;
        ctx->children=temp;
        visit(ctx);
    } else visitChildren(ctx);
    return {};
}

std::any toAstVisitor::visitLessExpression(RiddleParser::LessExpressionContext *ctx){
    if(ctx->children.size() == 1){
        auto temp=ctx->children[0]->children;
        ctx->children=temp;
        visit(ctx);
    } else visitChildren(ctx);
    return {};
}

std::any toAstVisitor::visitNotEqualExpression(RiddleParser::NotEqualExpressionContext *ctx){
    if(ctx->children.size() == 1){
        auto temp=ctx->children[0]->children;
        ctx->children=temp;
        visit(ctx);
    } else visitChildren(ctx);
    return {};
}

std::any toAstVisitor::visitLiteral(RiddleParser::LiteralContext *ctx){
    if(ctx->children.size() == 1){
        auto temp=ctx->children[0]->children;
        ctx->children=temp;
        visit(ctx);
    } else visitChildren(ctx);
    return {};
}

std::any toAstVisitor::visitPlusAssignExpression(RiddleParser::PlusAssignExpressionContext *ctx){
    if(ctx->children.size() == 1){
        auto temp=ctx->children[0]->children;
        ctx->children=temp;
        visit(ctx);
    } else visitChildren(ctx);
    return {};
}

std::any toAstVisitor::visitMinusAssignExpression(RiddleParser::MinusAssignExpressionContext *ctx){
    if(ctx->children.size() == 1){
        auto temp=ctx->children[0]->children;
        ctx->children=temp;
        visit(ctx);
    } else visitChildren(ctx);
    return {};
}