#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    //指针也是可以进行计算的
    int v1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *zhizhen1 = v1;
    char v2[] = {'a', 'b', 'c', 'd', 'e'};
    char *zhizhen2 = v2;
    for (int i = 0; i < 10; i++) {
        cout << "输出v1数组的第" << i << "元素：" << *zhizhen1 + i << endl;
    }
    for (int k = 0; k < 5; ++k) {

        cout << "输出v2数组的第" << k + 1 << "元素：" << zhizhen2[k] << endl;
    }

    return 0;
}


