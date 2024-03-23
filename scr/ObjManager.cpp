//
// Created by wangz on 2024/2/10.
//

#include <stdexcept>
#include "ObjManager.h"

ObjManager MainManager;

void ObjManager::inSpace() {
    newDefine.emplace();
}

void ObjManager::outSpace() {
    for (const auto &name: newDefine.top()) {
        deleteIdentfier(name);
    }
    newDefine.pop();
}

void ObjManager::deleteIdentfier(const std::string &name) {
    const std::string uuid=uuids[name].top();
    if (objects[uuid].count == 1)objects.erase(uuid);
    if (!uuids[name].empty()) {
        uuids[name].pop();
        if (uuids[name].empty()) {
            uuids.erase(name);
        }
    }
}

std::string ObjManager::creatNewObject(){
    std::string uuid=GetUUID();
    Object newObject;
    newObject.UUID = uuid;
    newObject._type = "void";
    newObject._value = NULL;
    newObject.count = 1;
    objects[uuid] = newObject;
    return uuid;
}

RiddleParser::FuncBodyContext* ObjManager::findFunc(const std::string& className, const std::string& funcName, const parameter_t& parameter) {
    if(!funcs[className].count(funcName)){
        return nullptr;
    }
    auto dParameter=funcs[className][funcName];
    return NULL;
}

//类名，参数名，有指向的参数名
std::string ObjManager::construct(const std::string &className, const parameter_t &parameter){
    std::string uuid=creatNewObject();

    return uuid;
}