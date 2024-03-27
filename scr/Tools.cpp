//
// Created by wangz on 2024/2/13.
//
#include <guiddef.h>
#include <combaseapi.h>
#include <string>
#include <algorithm>

bool isNumber(const std::string &s){
    if(s[0] == '0' && s.size() == 1)return true;
    else if(s[0] != '0'){
        return std::all_of(s.begin(), s.end(), [](const char ch){
            return isdigit(ch);
        });
    } else return false;
}

std::string GetUUID()
{
    std::string strUUID;
    GUID guid;
    if (!CoCreateGuid(&guid)) {
        char buffer[64] = { 0 };
        _snprintf_s(buffer, sizeof(buffer),
//                    "%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",    //大写
                    "%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",  //小写
                    guid.Data1, guid.Data2, guid.Data3,
                    guid.Data4[0], guid.Data4[1], guid.Data4[2],
                    guid.Data4[3], guid.Data4[4], guid.Data4[5],
                    guid.Data4[6], guid.Data4[7]);
        strUUID = buffer;
    }
    return strUUID;
}