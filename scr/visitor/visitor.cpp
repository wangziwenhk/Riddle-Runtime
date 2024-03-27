//
// Created by wangz on 2024/2/7.
//
#include "visitor.h"
#include <codecvt>
#include <string>
#include <locale>
#include <cmath>
#include "../ObjManager.h"

using namespace std;

bool is_hex(char ch){
    return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F');
}

wstring to_wstring(const string &str){
    wstring_convert<codecvt_utf8<wchar_t>> converter;
    return converter.from_bytes(str);
}

string to_string(const wstring &str){
    wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> converter;
    return converter.to_bytes(str);
}
