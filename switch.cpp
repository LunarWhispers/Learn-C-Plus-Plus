                                //8.3//
#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    /**
     * 今天学习了switch语句，与else很像
     * 形式为：
     * switch（整型变量）{
     *  case 整型变量1 ：
     *  code;
     *  break(用来终止代码执行)
     *
     *  case 整型变量N ：
     *  code;
     *  break(用来终止代码执行)
     *  ..
     *  ..
     *  ..
     *  default:
     *  没有case执行时执行的代码
     * }
     */

    cout << "请选择直播场景，输入对应的场景代码数字" << endl;
    cout << "1,仅输出屏幕  2,输出屏幕+摄像头画面  3，仅输出摄像头" << endl;
    int num;
    cin >> num;
    switch (num) {
        case 1:
            cout << "用户只能看到屏幕" << endl;
            break;
        case 2:
            cout << "用户能看到屏幕+摄像头" << endl;
            break;
        case 3:
            cout << "用户只能看到摄像头" << endl;
            break;
        default:
            cout <<"你在乱输数字试试？信不信给你打成折叠屏（生气:( "<<endl;
    }

    return 0;
}


