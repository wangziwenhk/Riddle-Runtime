#ifndef RIDDLE_OBJMANAGER_H
#define RIDDLE_OBJMANAGER_H
#include "Tools.h"
#include "Object.h"
#include <string>
#include <map>

class ObjManager{
private:
    //当前环境下的标识符来表示对应的对象的uuid
    std::map<std::string,std::stack<uuid_t>>uuids;
    //唯一标识符对应的对象
    std::map<uuid_t,Object>objects;
    //当前作用域内新定义的对象的标识符(方便退出作用域后销毁)
    std::stack<std::set<std::string>>newDefine;
public:
    void inSpace(){
        newDefine.emplace();
    }
    void outSpace(){
        for(auto name:newDefine.top()){
            deleteIdentfier(name);
        }
        newDefine.pop();
    }
    //newDefine是不会更新删除的,所以这个不能作为delete关键字
    void deleteIdentfier(const std::string& name){
        const uuid_t uuid = uuids[name].top();
        if(objects[uuid].count==1)objects.erase(uuid);
        if(!uuids[name].empty()){
            uuids[name].pop();
            if(uuids[name].empty()){
                uuids.erase(name);
            }
        }
    }
};
extern ObjManager MainManager;
#endif //RIDDLE_OBJMANAGER_H
