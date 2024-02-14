
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

    virtual std::any visitStatment(RiddleParser::StatmentContext *context) = 0;

    virtual std::any visitPrimaryExpression(RiddleParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitIdExpression(RiddleParser::IdExpressionContext *context) = 0;

    virtual std::any visitIdentifierSet(RiddleParser::IdentifierSetContext *context) = 0;

    virtual std::any visitFuncDefintion(RiddleParser::FuncDefintionContext *context) = 0;

    virtual std::any visitFuncExpression(RiddleParser::FuncExpressionContext *context) = 0;

    virtual std::any visitFuncBody(RiddleParser::FuncBodyContext *context) = 0;

    virtual std::any visitOneValDeclaration(RiddleParser::OneValDeclarationContext *context) = 0;

    virtual std::any visitOneValDefintion(RiddleParser::OneValDefintionContext *context) = 0;

    virtual std::any visitValDefintion(RiddleParser::ValDefintionContext *context) = 0;

    virtual std::any visitAssignmentExpression(RiddleParser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitTheTypeName(RiddleParser::TheTypeNameContext *context) = 0;

    virtual std::any visitTypeSpecifier(RiddleParser::TypeSpecifierContext *context) = 0;

    virtual std::any visitClassName(RiddleParser::ClassNameContext *context) = 0;

    virtual std::any visitTheOperator(RiddleParser::TheOperatorContext *context) = 0;

    virtual std::any visitLiteral(RiddleParser::LiteralContext *context) = 0;

    virtual std::any visitIntLiteral(RiddleParser::IntLiteralContext *context) = 0;

    virtual std::any visitCharLiteral(RiddleParser::CharLiteralContext *context) = 0;

    virtual std::any visitFloatLiteral(RiddleParser::FloatLiteralContext *context) = 0;

    virtual std::any visitStrLiteral(RiddleParser::StrLiteralContext *context) = 0;

    virtual std::any visitBoolLiteral(RiddleParser::BoolLiteralContext *context) = 0;


};

