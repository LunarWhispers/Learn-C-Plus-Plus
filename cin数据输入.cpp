                                    //7.30//
#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    //cout是将变量输出到控制台
    //那怎么将输入的数据提供给提供给变量呢？
    //cin >> 变量名 就好了
    //Ps：cout是<<，而cin是 >> 。
    int BA;
    cout << "请输入年龄：";
    cin >> BA;



    //多种类型都可以
    string BH;
    cout << "请输入身高：";
    cin >> BH;


    string BN;
    cout << "请输入名字：";
    cin >> BN ;


    cout << BA << endl;
    cout << BH << endl;
    cout << BN << endl;

    string msg = "我哥哥叫" + BN + "，他今年" + to_string(BA) + "，他身高为" + BH + ",他很衰（doge";
    cout << msg << endl;
    return 0;
}