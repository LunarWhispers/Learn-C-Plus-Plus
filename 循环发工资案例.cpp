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

    int num = 10000;
    int id = 1;
    for (id; id <= 20; id++) {
        int yeji = get_random_num(1, 10);
        if (num == 0) {
            cout << "不好意思，工资发完了，下个月再发，请麻溜地gun出去" << endl;
            break;
        }
        if (yeji <= 5) {
            cout << "员工" << id << "业绩没达标，也敢领工资？gun！" << endl;
            continue;
        }
        num = num - 1000;
        cout << "员工" << id << "，发到工资1000元，余额为" << num << "元" << endl;
    }

    return 0;
}
