//
// Created by wangz on 2024/2/12.
//

#ifndef RIDDLE_OBJECT_H
#define RIDDLE_OBJECT_H

#include <string>
#include <any>
#include <map>
#include <vector>
#include "visitor.h"

//表示语言中的对象
class Object{
private:
    std::string _type;
    std::any _value;
    std::string UUID;
    std::map<std::string, RiddleParser::FuncDefintionContext *> func;
public:
    std::any runFunc(const std::string &name, const std::vector<std::any> &parameters);

    void setFunc(const std::string &name, RiddleParser::FuncDefintionContext *function);

    RiddleParser::FuncDefintionContext * funcOf(const std::string &name);

    std::any &valueOf();

    std::string &hashCode();

    std::string &typeOf();
};


#endif //RIDDLE_OBJECT_H
