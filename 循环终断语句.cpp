#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /**
     * 循环也有终止命令：Continue和break
     * continue：跳过当次循环
     * break：终止循环
     */
    int num = 1;
    for (num; num <= 20; ++num) {
        if (num % 2 == 0){
            continue;
        }
        cout << num << endl;
        num++;
    }

    cout <<"--------------------------" <<endl;
    int num1 = 1;
    for (num1; num1 <= 5; ++num1) {
        if (num1 % 2 == 0){
            break;
        }
        cout << num1 << endl;
        num++;
    }

    return 0;
}


