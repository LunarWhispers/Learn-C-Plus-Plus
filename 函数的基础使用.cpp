#include "iostream"
#include "windows.h"

using namespace std;

/**
     * main，是主函数，那我们可不可以在main函数外创建一个函数呢？
     * 当然可以！
     * 形式为：
     * 返回值类型 函数名 （参数列表）{
     * 函数体code;
     * }
     * 返回值;
     */
//就像这样
//这是传入main的数据
int super(int a, int b, int c) {
    int min = b;

    for (int i = 0; i < 3; ++i) {
        if (a < min) {
            min = a;
        }
        if (c < min) {
            min = a;
        }
    }

    return min;
}


int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a;

    a = super(4, 5, 7);
    cout << "最小值是" << a << endl;

    return 0;
}


