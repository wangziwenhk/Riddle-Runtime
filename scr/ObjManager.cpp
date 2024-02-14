//
// Created by wangz on 2024/2/10.
//

#include <stdexcept>
#include "ObjManager.h"
ObjManager MainManager;

void ObjManager::enter_scope(){
    new_define.push(std::set<std::string>());
}
void ObjManager::out_scope(){
    //new_define中存储的是标识符
    //清除当前作用域中的对象和标识符
    for(const auto& i:new_define.top()){
        objects.erase(uuids[i].top());
        uuids[i].pop();
        if(uuids[i].empty()){
            uuids.erase(i);
        }
    }
    new_define.pop();
}

bool ObjManager::define_obj(const std::string & name, const std::string & type,const std::any & value){
    if(!new_define.empty() && new_define.top().count(name))throw std::logic_error("Multiple definitions");

    //初始化object
    Object temp;
    temp.hashCode() = GetUUID();
    temp.typeOf() = type;
    temp.valueOf() = value;

    //类型自定义初始化
    //todo:写完类型自定义初始化
    if(type == "function"){
        //函数类型初始化
        
    }

    //manager注册该对象
    new_define.top().insert(name);
    objects[temp.hashCode()] = temp;
    uuids[name].push(temp.hashCode());
    return true;
}

bool ObjManager::define_refer(const std::string &name, const std::string &referenced){
    if(new_define.top().count(name))throw std::logic_error("Multiple definitions");

    Object temp;
    temp.hashCode() = uuids[referenced].top();
    temp.typeOf() = "reference";
    temp.valueOf() = NULL;

    new_define.top().insert(name);
    uuids[name].push(temp.hashCode());
    return true;
}

std::any ObjManager::get_value(const std::string & name){
    if(uuids[name].empty())throw std::logic_error("Object does not exist");
    return objects[uuids[name].top()].valueOf();
}

bool ObjManager::is_have(const std::string &name){
    return uuids[name].empty();
}

void ObjManager::set_value(const std::string &name, const std::any &value){
    Object object = objects[uuids[name].top()];
    object.valueOf() = value;
}