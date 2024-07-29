                                                    //7.29//
#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    //有时候我们需要把多个字符串导入进一个字符串，一直用<<太麻烦
    //so，我们可以用+号连接，如下：
    string H = "身高182.2cm";
    string N = "我的哥哥";
    string Ho = "让自己的弟弟当奴才（doge";
    string MSG = N + H + "\n" + "喜欢的事:" + Ho;
    cout << MSG << endl;
    cout << "------------------------" << endl;

    /*
     *  but,我们有时候需要将其他类型也加入string类型
     *  How  do？
     *  用 C++ 的函数 to_string(内容)
     */
    string BH = "身高182.2cm";
    string MB = "我的哥哥";
    string HO = "让自己的弟弟当奴才（doge";
    int age = 20;
    string message = MB + BH + "\n" + "喜欢的事:" + HO + "\n" + "他今年" + to_string(age);
    cout << message << endl;


    return 0;
}