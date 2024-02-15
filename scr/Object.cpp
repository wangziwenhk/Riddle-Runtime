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

std::any Object::runFunc(const std::string &name, const std::vector<std::any> &parameters){
    if(!func.count(name))throw std::logic_error("Function not defined");
    MainManager.enter_scope();
    RiddleParser::FuncDefintionContext *ctx=func[name];
    //XXX 谁让你每次调用方法就新生成一个Visitor啊，放到外面去
    Visitor temp;
    auto typeName=std::any_cast<std::string>(temp.visit(ctx->children[0]));
    std::string funcName=ctx->children[1]->toString();
    //生成自定义变量
    int cnt=0;
    for(int i=3;i < ctx->children.size()-2;i++){
        auto ValName=std::any_cast<std::string>(temp.visit(ctx->children[i]));
        MainManager.set_value(ValName, parameters[cnt++]);
    }
    //visitFuncBody 来运行
    std::any result=temp.visit(ctx->children[ctx->children.size()-1]);
    MainManager.out_scope();
    return result;
}

RiddleParser::FuncDefintionContext * Object::funcOf(const std::string &name){
    return func[name];
}

void Object::setFunc(const std::string &name, RiddleParser::FuncDefintionContext *function){
    func[name]=function;
}