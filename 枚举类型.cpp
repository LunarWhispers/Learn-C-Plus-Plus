                                    //8.3//
#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /**
     * 学习新类型：枚举类型
     * 形式为：
     * enum 名称{
     *  枚举元素1,  默认从0开始，也可以手动赋值
     *  枚举元素2,
     *  枚举元素3,
     *  ..
     *  ..
     *  ..
     * }
     */

    enum season {
        spring = 1,
        summer,
        autumn,
        winter
    };

    cout << "小朋友喜欢什么季节" << endl;
    int num;
    cin >> num;
    switch (num) {
        case spring:
            cout << "小朋友喜欢春季" << endl;
            break;
        case summer:
            cout << "小朋友喜欢夏季" << endl;
            break;
            case autumn:
            cout << "小朋友喜欢秋季" << endl;
            break;
            case winter:
            cout << "小朋友喜欢冬季" << endl;
            break;
        default:
            cout <<"你在乱输数字试试？信不信给你打成折叠屏（生气:( "<<endl;
    }

    return 0;
}


