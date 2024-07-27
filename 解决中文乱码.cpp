

/**
 * 知周所众，我们在cout中输入中文时，会出现乱码问题
 * 就像这样
 * cout <<"哈哈哈"<< endl；
 *
 * 那我们怎么解决呢？
 * 嗖一贼！！！
 */
#include "iostream"

#include "windows.h"
//方式一：为代码引入一个库：windows.h
//形式为 #include "windows.h"
//然后 在main函数中加上 SetConsoleOutputCP(CP_UTF8 );
//就耗了!!!
using namespace std;

int main(){
//    SetConsoleOutputCP(CP_UTF8);

//方式2：在main函数中加上一句话：system("chcp 65001");
//这样就改变了代码的编码
//巴特！会加一行字：Active code page: 65001

    system("chcp 65001");
    cout <<"哥哥不爱我doge"<< endl;
    return 0;
}