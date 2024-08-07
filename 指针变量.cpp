
#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /**
     * 数字类型 * 变量名 = 内存地址；
     * * 在 声明 时使用，表示指针变量
     * model : int * A = B;
     * * 在 使用 时使用，取指针变量指向内存区域的 数值 。
     * model : cout << *A <<endl;
     * & 取变量的内存地址,得到A变量的内存地址
     * model : &A,
     * */
    int num = 110120;
    int * zhizhen = &num;
    cout <<"zhizhen的内存地址为：" <<zhizhen<<endl;
    cout <<"zhizhen内存地址的数值为：" <<*zhizhen<<endl;

    *zhizhen = 20;
    cout <<"zhizhen内存地址更改后的数值为：" <<*zhizhen<<endl;

    return 0;
}