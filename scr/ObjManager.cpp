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
    const uuid_t uuid = uuids[name].top();
    if (objects[uuid].count == 1)objects.erase(uuid);
    if (!uuids[name].empty()) {
        uuids[name].pop();
        if (uuids[name].empty()) {
            uuids.erase(name);
        }
    }
}

uuid_t ObjManager::creatNewObject() {
    uuid_t uuid = GetUUID();
    Object newObject;
    newObject.UUID = uuid;
    newObject._type = "void";
    newObject._value = NULL;
    newObject.count = 1;
    objects[uuid] = newObject;
    return uuid;
}

//类名，参数名，有指向的参数名
uuid_t ObjManager::construct(const std::string &className, const parameter_t parameter) {
    uuid_t uuid = creatNewObject();

    return uuid;
}