#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    if(1){
        int num1 = 100;
        cout << num1 <<endl;
    }

    /**
     * 代码也有自己的可以使用的区域和不可以使用的区域：
     * 就像这样
     */

//     cout <<num <<endl;

    return 0;
}


