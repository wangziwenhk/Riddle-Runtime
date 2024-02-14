#ifndef RIDDLE_VISITOR_H
#define RIDDLE_VISITOR_H

#include "RiddleParserBaseVisitor.h"
#include "ObjManager.h"

std::wstring to_wstring(const std::string &str);

std::string to_string(const std::wstring &str);

class Visitor :public RiddleParserBaseVisitor{
public:
    std::any visitProgram(RiddleParser::ProgramContext *ctx) override;
    std::any visitLiteral(RiddleParser::LiteralContext *ctx) override;
    std::any visitBoolLiteral(RiddleParser::BoolLiteralContext *ctx) override;
    std::any visitStrLiteral(RiddleParser::StrLiteralContext *ctx) override;
    std::any visitCharLiteral(RiddleParser::CharLiteralContext *ctx) override;
    std::any visitIntLiteral(RiddleParser::IntLiteralContext *ctx) override;
    std::any visitFloatLiteral(RiddleParser::FloatLiteralContext *ctx) override;
    std::any visitValDefintion(RiddleParser::ValDefintionContext *ctx) override;
    std::any visitTypeSpecifier(RiddleParser::TypeSpecifierContext *ctx) override;
    std::any visitAssignmentExpression(RiddleParser::AssignmentExpressionContext *ctx) override;
    std::any visitClassName(RiddleParser::ClassNameContext *ctx) override;
    std::any visitFuncDefintion(RiddleParser::FuncDefintionContext *ctx) override;
};

#endif //RIDDLE_VISITOR_H
