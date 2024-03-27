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

dParameter_t ObjManager::Calibration(const parameter_t &parameter){
    dParameter_t temp;
    for(const auto &i:parameter){
        if(isNumber(i.first)){
            int number=std::stoi(i.first);
            if(temp.size()-1 < number){

            }
        }
    }
}