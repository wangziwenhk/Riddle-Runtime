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
    MainManager.enter_scope();
    RiddleParser::FuncDefintionContext *ctx=func[name];
    std::string funcName=ctx->children[1]->toString();
    Visitor temp;
    auto typeName=std::any_cast<std::string>(temp.visit(ctx->children[0]));
    //todo 生成自定义变量


}

RiddleParser::FuncDefintionContext * Object::funcOf(const std::string &name){
    return func[name];
}

void Object::setFunc(const std::string &name, RiddleParser::FuncDefintionContext *function){
    func[name]=function;
}