//
// Created by wangz on 2024/2/12.
//
#include <bits/stdc++.h>
using namespace std;
class MyClass{
    static void s(){
        cout<<1;
        return;
    }
};
int main(){
    MyClass.s();
}