//
// Created by wangz on 2024/2/12.
//

#ifndef RIDDLE_OBJECT_H
#define RIDDLE_OBJECT_H

#include <string>
#include <any>
#include <map>
#include <vector>
#include "visitor.h"

typedef std::string uuid_t;
//表示语言中的对象
class Object{
public:
    //所属的类型，名称为对应类型的类名
    std::string _type;
    //值
    std::any _value;
    //唯一标识符
    std::string UUID;
    //引用计数
    std::size_t count;
};


#endif //RIDDLE_OBJECT_H
