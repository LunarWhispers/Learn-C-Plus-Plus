
#include "iostream"
#include "windows.h"

using namespace std;

//10 红 红桃
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int correct_answer = 10;
    float num;
    string C;
    string FC;

    string fcr = "红色";

    string PokerF2 = "红桃";

    cout << "请输入数字" << endl;
    cin >> num;

    if (num == correct_answer) {
        cout << "恭喜，猜对了，接下来请猜颜色" << endl;
        cin >> C;
        if (C != fcr) {
            cout << "猜错了，是红色，请猜花色" << endl;
            cin >> FC;
            if (FC == PokerF2) {
                cout << "恭喜，猜对了，game over!!!" << endl;
            } else {
                cout << "恭喜，猜错了，game do not over!!!" << endl;
            }
        } else {
            cout << "猜对了，是红色，请猜花色" << endl;
            cin >> FC;
            if (FC == PokerF2) {
                cout << "恭喜，猜对了，game over!!!" << endl;
            } else {
                cout << "恭喜，猜错了，game do not over!!!" << endl;
            }
        }
    } else {
        cout << "猜错了， 正确答案是10，请猜颜色" << endl;
        cin >> C;
        if (C == fcr) {
            cout << "猜对了，请猜花色" << endl;
            cin >> FC;
            if (FC == PokerF2) {
                cout << "恭喜，猜对了，game over!!!" << endl;
            } else {
                cout << "恭喜，猜错了，game do not over!!!" << endl;
            }
        } else {
            cout << "猜错了，是红色，请猜花色" << endl;
            cin >> FC;
            if (FC == PokerF2) {
                cout << "恭喜，猜对了，game over!!!" << endl;
            } else {
                cout << "恭喜，猜错了，game do not over!!!" << endl;
            }
        }
    }
    return 0;
}

