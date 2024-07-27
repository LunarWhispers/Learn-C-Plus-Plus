#include "iostream"
using namespace std;

int main(){
    //标识符， 也就是各种东西的名称，也是有限制的
    //1.内容限定（数字不能开头，文本不能有特殊符号或加减乘除+-*/符号
    // int 1num = 6
    //int num// = 777
    //int num-phone = 12345678900

    //2.大小写区分（大写标识符和小写标识符可以同时存在）
    char num = '7';
    char NUM = '8';
    cout << num <<"," << NUM <<endl;

    //3.不能占用关键词
    //int int = ABC;
    return 0;
}