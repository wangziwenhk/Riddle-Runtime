#ifndef RIDDLE_OBJMANAGER_H
#define RIDDLE_OBJMANAGER_H

#include "Tools.h"
#include "Object.h"
#include <string>
#include <map>
#include <vector>

//有明确指明参数名的用参数名，否则用数字
typedef std::map<std::string, std::any> parameter_t;
//当second是string时为参数，当是Object时为默认参数
typedef std::vector<std::pair<std::string,std::any>> dParameter_t;

class ObjManager {
private:
    //当前环境下的标识符来表示对应的对象的uuid
    std::map<std::string, std::stack<uuid_t>> uuids;
    //唯一标识符对应的对象
    std::map<uuid_t, Object> objects;
    //当前作用域内新定义的对象的标识符(方便退出作用域后销毁)
    std::stack<std::set<std::string>> newDefine;
    //不同类的构造函数(parameter中value为)
    std::map<std::string,std::map<std::string,std::map<dParameter_t , RiddleParser::FuncBodyContext*>>>funcs;
public:
    void inSpace();

    void outSpace();

    //newDefine是不会更新删除的,所以这个不能作为delete关键字
    void deleteIdentfier(const std::string &name);

    uuid_t creatNewObject();

    RiddleParser::FuncBodyContext* findFunc(const std::string& className,const std::string& funcName,const parameter_t& parameter);

    uuid_t construct(const std::string &className, const parameter_t& parameter);
};

extern ObjManager MainManager;
#endif //RIDDLE_OBJMANAGER_H
