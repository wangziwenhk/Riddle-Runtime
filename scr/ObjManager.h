#ifndef RIDDLE_OBJMANAGER_H
#define RIDDLE_OBJMANAGER_H

#include "Tools.h"
#include "Object.h"
#include "RiddleParserBaseVisitor.h"

//有明确指明参数名的用参数名，否则用数字
typedef std::map<std::string, Object> parameter_t;
//第一个参数是名称，第二个参数是类型(如果是 Object 类型则确定为默认值)
typedef std::vector<std::pair<std::string, std::string>> dParameter_t;

class ObjManager {
private:
    //当前环境下的标识符来表示对应的对象的uuid
    std::map<std::string, std::stack<std::string>> uuids;
    //唯一标识符对应的对象
    std::map<std::string, Object> objects;
    //当前作用域内新定义的对象的标识符(方便退出作用域后销毁)
    std::stack<std::set<std::string>> newDefine;
    //不同类的函数(parameter中value为)
    std::map<std::string,std::map<std::string,std::map<dParameter_t , RiddleParser::FuncBodyContext*>>>funcs;
public:
    void inSpace();

    void outSpace();

    //newDefine是不会更新删除的,所以这个不能作为delete关键字
    void deleteIdentfier(const std::string &name);

    std::string creatNewObject();

    static dParameter_t Calibration(const parameter_t &parameter);

};

extern ObjManager MainManager;
#endif //RIDDLE_OBJMANAGER_H
