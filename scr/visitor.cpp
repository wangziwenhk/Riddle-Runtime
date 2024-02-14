//
// Created by wangz on 2024/2/7.
//
#include "visitor.h"
#include <codecvt>
#include <string>
#include <locale>
#include <cmath>
#include "ObjManager.h"

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

//字面量解析
std::any Visitor::visitLiteral(RiddleParser::LiteralContext *ctx){
    return visitChildren(ctx);
}

std::any Visitor::visitBoolLiteral(RiddleParser::BoolLiteralContext *ctx){
    string str=ctx->children[0]->toString();
    if(str == "true")return true;
    else return false;
}

std::any Visitor::visitStrLiteral(RiddleParser::StrLiteralContext *ctx){
    string str=ctx->children[0]->toString();
    wstring w_str;
    //原始字符串R"()"
    if(str[0] == 'r' || str[0] == 'R'){
        str=str.substr(3, str.size()-5);
    } else{
        str=str.substr(1, str.size()-2);
        string ans;
        for(int i=0;i < str.size();i++){
            if(str[i] == '\\'){
                //转义
                char ch=str[i+1];
                if(ch == '"')ans+='"';
                else if(ch == '\'')ans+='\'';
                else if(ch == '\\')ans+='\\';
                else if(ch == 'a')ans+='\a';
                else if(ch == 'b')ans+='\b';
                else if(ch == 'f')ans+='\f';
                else if(ch == 'n')ans+='\n';
                else if(ch == 'r')ans+='\r';
                else if(ch == 't')ans+='\t';
                else if(ch == 'v')ans+='\v';
                else if(isdigit(ch) && (ch-'0' <= 8)){//8进制转义序列
                    string temp;
                    ++i;
                    for(int cnt=0;isdigit(str[i]) && (str[i]-'0' <= 8) && cnt < 3;++i, ++cnt){
                        temp+=str[i];
                    }
                    int cht=stoi(temp, nullptr, 8);
                    ans+=char(cht);
                    --i;
                    continue;
                } else if(ch == 'x'){
                    string temp;
                    i+=2;
                    for(int cnt=0;is_hex(str[i]) && cnt < 2;++i, ++cnt){
                        temp+=str[i];
                    }
                    int cht=stoi(temp, nullptr, 16);
                    ans+=char(cht);
                    --i;
                    continue;
                } else if(ch == 'u'){
                    i+=2;
                    string temp={str[i], str[i+1], str[i+2], str[i+3]};
                    wchar_t cht=stoi(temp, nullptr, 16);
                    ans+=to_string(wstring(1, cht));
                    i+=3;
                    continue;
                } else if(ch == 'U'){
                    i+=2;
                    string temp={str[i], str[i+1], str[i+2], str[i+3], str[i+4], str[i+5], str[i+6], str[i+7]};
                    wchar_t cht=stoi(temp, nullptr, 16);
                    str=to_string(wstring(1, cht));
                    i+=7;
                    continue;
                } else ans+=str[i];
            } else ans+=str[i];
        }
        str=ans;
    }
    w_str=to_wstring(str);
    wcout << w_str;
    return w_str;
}

std::any Visitor::visitCharLiteral(RiddleParser::CharLiteralContext *ctx){
    string str=ctx->children[0]->toString();
    int i=0;
    if(str[i] == '\\'){
        //转义
        char ch=str[i+1];
        if(ch == '"')str='"';
        else if(ch == '\'')str='\'';
        else if(ch == '\\')str='\\';
        else if(ch == 'a')str='\a';
        else if(ch == 'b')str='\b';
        else if(ch == 'f')str='\f';
        else if(ch == 'n')str='\n';
        else if(ch == 'r')str='\r';
        else if(ch == 't')str='\t';
        else if(ch == 'v')str='\v';
        else if(isdigit(ch) && (ch-'0' <= 8)){//8进制转义序列
            string temp;
            ++i;
            for(int cnt=0;isdigit(str[i]) && (str[i]-'0' <= 8) && cnt < 3;++i, ++cnt){
                temp+=str[i];
            }
            int cht=stoi(temp, nullptr, 8);
            str=char(cht);
            --i;
        } else if(ch == 'x'){
            string temp;
            i+=2;
            for(int cnt=0;is_hex(str[i]) && cnt < 2;++i, ++cnt){
                temp+=str[i];
            }
            int cht=stoi(temp, nullptr, 16);
            str=char(cht);
        } else if(ch == 'u'){
            i+=2;
            string temp={str[i], str[i+1], str[i+2], str[i+3]};
            wchar_t cht=stoi(temp, nullptr, 16);
            str=to_string(wstring(1, cht));
        } else if(ch == 'U'){
            i+=2;
            string temp={str[i], str[i+1], str[i+2], str[i+3], str[i+4], str[i+5], str[i+6], str[i+7]};
            wchar_t cht=stoi(temp, nullptr, 16);
            str=to_string(wstring(1, cht));
        } else str=str[i];
    }
    return to_wstring(str);
}

std::any Visitor::visitIntLiteral(RiddleParser::IntLiteralContext *ctx){
    string str=ctx->children[0]->toString();
    if(str[0] == '0'){
        //16进制
        if(str[1] == 'X' || str[1] == 'x')
            return stoi(str.substr(2), nullptr, 16);
            //2进制
        else if(str[1] == 'B' || str[1] == 'b')
            return stoi(str.substr(2), nullptr, 2);
            //8进制
        else return stoi(str.substr(1), nullptr, 8);
    } else return stoi(str);
}

std::any Visitor::visitFloatLiteral(RiddleParser::FloatLiteralContext *ctx){
    string str=ctx->children[0]->toString();
    //科学计数法
    size_t k1=str.find('e'), k2=str.find('E');
    if(k1 != string::npos || k2 != string::npos){
        k1=k1 != string::npos ? k1 : k2;
        double base, index;
        base=stod(str.substr(0, k1));
        index=stoi(str.substr(k1+1));
        return pow(base, index);
    } else return stod(str);
}

std::any Visitor::visitTypeSpecifier(RiddleParser::TypeSpecifierContext *ctx){
    return ctx->children[0]->toString();
}

std::any Visitor::visitProgram(RiddleParser::ProgramContext *ctx){
    MainManager.enter_scope();
    std::any result=visitChildren(ctx);
    MainManager.out_scope();
    return result;
}

std::any Visitor::visitValDefintion(RiddleParser::ValDefintionContext *ctx){
    auto type=any_cast<string>(visit(ctx->children[0]));
    vector< typeof ctx->children[0] > vec;
    for(int i=1;i <= ctx->children.size();i++){
        if(ctx->children.size() != i && ctx->children[i]->toString() != ","){
            vec.push_back(ctx->children[i]);
        } else{
            string name=vec.front()->toString();
            if(vec.size() == 3){
                any value=visit(vec.back());
                MainManager.define_obj(name, type, value);
            } else{
                MainManager.define_obj(name, type);
            }
            vec.clear();
        }
    }
    return {};
}

std::any Visitor::visitAssignmentExpression(RiddleParser::AssignmentExpressionContext *ctx){
    string name=ctx->children[0]->toString();
    any value=visit(ctx->children[2]);

    if(!MainManager.is_have(name))throw logic_error("Object does not exist");
    MainManager.set_value(name, value);
    return value;
}

std::any Visitor::visitClassName(RiddleParser::ClassNameContext *ctx){
    return ctx->children[0]->toString();
}

std::any Visitor::visitFuncDefintion(RiddleParser::FuncDefintionContext *ctx){
    auto funcName = ctx->children[1]->toString();
    MainManager.define_obj(funcName,"function",ctx);
    return {};
}