                                        //7.31//
#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    /**
     * 三元运算符原理简单，应用应该比较广泛
     * 形式为三部分： bool类型式 ？ A值 ： B值
     * 如果bool式为 真，则选A值，反之为B值
     */
    string BH = "帅", BDH = "不帅";
    int num, num2;
    cout << "请输入值" << endl;
    cin >> num;
    cout << "请输入值" << endl;
    cin >> num2;
    string X = (num > num2) ? BH : BDH;
    cout << "哥哥" << X << endl;


    return 0;
}