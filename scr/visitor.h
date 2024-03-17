#ifndef RIDDLE_VISITOR_H
#define RIDDLE_VISITOR_H

#include "RiddleParserBaseVisitor.h"
#include "ObjManager.h"

std::wstring to_wstring(const std::string &str);

std::string to_string(const std::wstring &str);

class Visitor :public RiddleParserBaseVisitor{
public:

};

#endif //RIDDLE_VISITOR_H
