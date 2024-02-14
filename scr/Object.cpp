//
// Created by wangz on 2024/2/12.
//

#include "Object.h"

std::any &Object::valueOf(){
    return _value;
}

std::string &Object::hashCode(){
    return UUID;
}

std::string &Object::typeOf(){
    return _type;
}

//fixme 不正确的方法调用,谁TM让你直接Visit啊,Visitor是解析用的不是运行用的啊SB
std::any Object::runFunc(const std::string &name){
    if(!func.count(name))throw std::logic_error("Function not defined");
    Visitor visitor;
    return visitor.visit(func[name]);
}

RiddleParser::FuncDefintionContext * Object::funcOf(const std::string &name){
    return func[name];
}