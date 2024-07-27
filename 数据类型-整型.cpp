#include "iostream"
using namespace std;

int main(){
    system("chcp 65001" );
    //整型也是有四种的类型：
    //short(2字节） int（4字节） long（win4字节，Linux8字节）  longlong（8字节）
    /**
     * Windows
            kg字节数:2
            money字节数:4
            book字节数:4
            B_Video字节数：8
     * Linux
            kg字节数:2
            money字节数:4
            book字节数:8
            B_Video字节数：8
     */
    short kg = 50;
    int money = 300;
    long book = 9000;
    long long B_Video = 999999999;
    cout << kg << "，"<< money <<  "，"<< book <<  "，"<< B_Video<< "。"<< endl;

    //那在具体的程序中怎么得知字节数呢？
    //用sizeof()函数就可以了，使用cout输出，在括号里填入标识符
    cout << "kg字节数:" <<sizeof(kg) << endl;
    cout << "money字节数:" << sizeof(money) << endl;
    cout << "book字节数:"<< sizeof(book) << endl;
    cout << "B_Video字节数：" << sizeof(B_Video) << endl;

    return 0;
}