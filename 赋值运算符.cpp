                                      //7.31//
#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

        /*赋值运算符有6种
         *  =
         *  +=
         *  -=
         *  *=
         *  /=
         *  %=
         */
        int num = 5;  //等号直接赋值
        cout << num <<endl;

        num +=  5 ;  //等同于num = num + 5
        cout << num <<endl;

        num -= 5;  //等同于num = num - 5
        cout << num <<endl;

        num *= 5 ; //等同于num = num * 5
        cout << num <<endl;

        num /= 5 ; //等同于num = num / 5
        cout << num <<endl;

        num %= 4 ; //等同于num = num %  5
        cout << num <<endl;


    return 0;
}