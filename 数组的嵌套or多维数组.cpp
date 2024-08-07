#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /*
     * 数组也是可以嵌套的， 将他称之为多维数组
     */
    int v1[2]{1,2};
    //这是一维常规写法
    cout <<"v1里面的第一个是：" << v1[0] <<endl;
    int v2[2][2]{{1,2},{3,4}};
    //这是二维写法
    cout <<"v2里面的第一个的第二个是：" << v2[1][1] <<endl;
    int v3[2][2][2]{{{1,2},{3,4}},{{5,6},{7,8}}};
    cout <<"v3里面的第一个的第二个的第一个是：" << v3[0][1][1] <<endl;
    return 0;
}