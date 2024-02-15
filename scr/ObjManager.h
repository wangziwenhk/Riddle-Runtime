#ifndef RIDDLE_OBJMANAGER_H
#define RIDDLE_OBJMANAGER_H
#include "Tools.h"
#include "Object.h"


class ObjManager{
private:
    //存储不同作用域中不同标识符所对应的UUID
    std::map<std::string, std::stack<std::string>> uuids;
    //存储不同UUID所对应的对象
    std::map<std::string, Object> objects;
    //存储当前作用域中的新定义的对象
    std::stack<std::set<std::string>> new_define;
public:
    //进入新的作用域
    void enter_scope();

    //退出作用域
    void out_scope();

    //在当前作用域中定义一个变量
    bool define_obj(const std::string & name, const std::string & type,const std::any & value=NULL);


    //获取一个对象的值
    std::any get_value(const std::string & name);

    //一个变量是否存在
    bool is_have(const std::string & name);

    //设置一个对象的值
    void set_value(const std::string & name,const std::any & value);

};
extern ObjManager MainManager;
#endif //RIDDLE_OBJMANAGER_H
