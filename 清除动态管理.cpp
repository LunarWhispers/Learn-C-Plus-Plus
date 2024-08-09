#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /*
     * 清理动态管理空间
     * new来接受
     * delete来删除
     */
    int * num = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; ++i) {
        cout << "数组输出的第" << i+1 << "元素是" << num[i] <<endl;
    }
    delete num;
    return 0;
}


