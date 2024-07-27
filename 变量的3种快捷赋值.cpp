#include "iostream"
#include "windows.h"
using namespace std;

int main(){
    //变量也可以有多种快捷赋值方式，可以不用一个一个赋值
    //第一种快捷赋值：声明和赋值同时进行
    SetConsoleOutputCP(CP_UTF8 );
    int age = 20;
    string name = "star";
    cout << "我哥哥叫" << name <<"，他今年" << age<<"岁"<< endl;

    //第2种快捷赋值:同时声明多个变量
    string s , c ;
    s = "打篮球";
    c = "上大学";
    cout <<"他喜欢"<< s << ",现在在"<< c << "。"<<endl;

    //第3种快捷赋值:将1，2结合，声明多个的同时为多个赋值
    string p = "自己的弟弟" , n = "奴才二臭";
    cout <<"他喜欢叫" <<  p  <<  n  <<  endl;

    return 0;
}