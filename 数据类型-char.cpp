                                                   //7.28//

#include "iostream"
#include "windows.h"
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
        //char不像其他一样类型炒鸡多，ta只有无符号和有符号类型
        //but！他可以通过字符输出数字（详见https://www.bilibili.com/video/BV1ZH4y137ws?p=25&vd_source=977f7990860b4e626a1813cfc6f1cad9   2分钟

        //由于a在表中指97，而我们再加一，就变成了98
        char num  = 'a';
        cout <<num + 1<<endl;

        //但是，在cout语句中会默认数字加减法，那我们可不可以字母加减法呢？？
        //怎么不行！！！！！！！
        //在char命名时加就可以了！！
        char NUM = 'b' + 18;
        cout << NUM <<endl;

    return 0;
}