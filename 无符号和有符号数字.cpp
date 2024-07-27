#include "iostream"
#include "windows.h"
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    // 有符号的就是本身的 int ，不过省略了单词 signed
    int num = -10;
    signed int num1 = 100; //两个类型一样
    cout << num <<"   "<<  num1 << endl;


    // 无符号的就是 int 前加上一个 unsigned
    //unsigned  int num2 = -100,，这样是不行的
    unsigned int num3 = 100;
    cout << num3 << endl;
    //但现在有了简写，将unsigned简写为u_
    u_long num4 = 1000;
    u_int  num5  = 5000;
    cout << num4 <<"   "<< num5 << endl;

    return 0;
}