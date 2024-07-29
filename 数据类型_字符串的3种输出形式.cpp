                                                //7.29//
#include "iostream"
#include "windows.h"
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    /*
     * 在c++中的字符串有多种表示形式
     * 1. c语言的字符数组表示方法
     * 2. c语言的指针模式表示方法
     * 3.c++的string表示方法
     */

        char x[] = "666";
        char *x1 = "888";
        string x2 = "999";

        //变量是可变的.......吗？
        //x = x + 1 ;  不行
        x1 = "999";
        x2 = "1000";
        cout << x <<endl;
        cout << x1 <<endl;
        cout << x2 <<endl;

    return 0;
}