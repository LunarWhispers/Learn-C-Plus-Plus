                                       //7.30//

#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a = 15, b = 6;
    cout << a / b << endl; //   /号指取余

    int c = 2;
    int d = --c;
    cout << c << "------" << d << endl;
    // ps：++和--等于加一和减一
    // Y = ++x ：为x加一，再为Y赋值
    // Y = --x ：为x减一，再为Y赋值
    // Y = x++ ：，为Y赋值，再为x加一
    // Y = x-- ：，为Y赋值，再为x减一



    return 0;
}