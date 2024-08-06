#include "random"
#include "iostream"
#include "windows.h"

using namespace std;

int get_random_num(int min, int max) {
    //创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());
    //定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);
    //生成一个随机数并输出
    int random_number = dis(gen);
    return random_number;

}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int array[10];
    int guess = get_random_num(1, 10);
    int right_count = 0;
    cout << guess << endl;
    for (int i = 0; i <= 9; ++i) {
//        cout << "请输入第" << i + 1 << "次猜的数字:";
        cin >> array[i];
    }
    for (int count = 0; count <= 9; count++) {
        if (array[count] != guess) {
            continue;
        } else{
            right_count++;
        }
    }
    cout << "猜对了" << right_count << "次" << endl;
    return 0;
}
