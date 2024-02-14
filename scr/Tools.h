//
// Created by wangz on 2024/2/12.
//

#ifndef RIDDLE_TOOLS_H
#define RIDDLE_TOOLS_H

#include "antlr4-runtime.h"

std::string GetUUID();
template<typename Tp>
bool isTerminalNode(const Tp& node){
    if(dynamic_cast<antlr4::tree::TerminalNodeImpl*>(node) != nullptr)
        return true;
    else return false;
}
#endif //RIDDLE_TOOLS_H
