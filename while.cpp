                                        //8.3//
#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /**
     * while是c++中的循环语句，
     * 形式如下：
     * while（布尔类型结果的表达式）{
     *      code；
     * }
     *
     */

    int total = 1;
    int NumberTotal = 0;
    while( total < 101 ){
    //也可以写为（total <= 100）.

        NumberTotal += total;
        total++;
    }
    cout << NumberTotal <<endl;
    return 0;
}


