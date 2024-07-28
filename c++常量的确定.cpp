                                      // 7.28
#include "iostream"
#include "windows.h"
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    //有的时候我们会忘记写变量，所以cout会自动选择默认类型
    //整型默认为int
    cout << "180的字节数是：" << sizeof(180u) <<endl;
                            //且可以为字面书数加上后缀指定类型
                            //u指无符号类型
    //实型默认double，当然也可以加上字母F，指定float
    cout << "999.888的字节数是：" << sizeof(999.888F) <<endl;

    //还有等等，详见黑马程序员c++课程第一章-12_c++常量类型的确定https://www.bilibili.com/video/BV1ZH4y137ws?p=24  10分31秒


    return 0;
}