#include "iostream"
using namespace std;

int main(){
    system("chcp 65001");
    // 变量相当于一个存储值的箱子
     //创造变量:
    // 1.在main函数中写出盒子(变量),形式为 变量类型 变量名称
    // 变量类型: 整型int,实型float,字符型char.字符串string
     int age;
    float height;
    string gender;
    string name;

    //2.为变量赋予值
    age = 21;
    height = 180.5;
    gender = "56kg";
    name = "周杰轮";

//    now,开始使用吧!!!

    cout <<"我是"<< name <<"," ;
    cout <<"今年"<< age << "岁"<< "。"<<  endl;
    cout << "身高" << height <<"cm"<< ",";
    cout << "体重" << gender <<"。"<< endl;
    return 0;
}