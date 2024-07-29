                                        //7.29//
#include "iostream"
#include "windows.h"
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
        /*
         * 转义字符是ASCII中的非打印控制字符，无法打印显示其形态，但拥有特殊的控制功能
         * 简单点来说就是用反斜杠（\）加上那些本没有作用的字母，使他们 有用处
         */

        /*列举几个
         * \n 换行
         * \t  移动到下一个tab位置 2个或n个都写的话，会让n个对齐
         * \\ 表示反斜线
         * \' 表示一个单引号
         * \" 代表一个双引号
         * 更多请见https://www.bilibili.com/video/BV1ZH4y137ws?p=26&vd_source=977f7990860b4e626a1813cfc6f1cad9  12.34秒
         */

    cout << "hello \nworld" << endl;  //换行作用
    cout << "------------" << endl;

    cout << "my\tbrother " << endl;
    cout << "my\tself " << endl;
    cout << "your\tself " << endl;
    cout << "------------" << endl;
                    //对齐

    //符号区
    cout << "一个英语句子可以用any\\some" << endl; //杠
    cout << " 他说:\" 我可以扇你一巴掌吗？\" "<< endl;//


    return 0;
}