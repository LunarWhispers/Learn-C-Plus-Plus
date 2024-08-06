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
    int random_number_count = 0;
    int max, min;
    while (random_number_count <= 9) {
        array[random_number_count] = get_random_num(1, 100);
        random_number_count++;
    }
    max, min = array[0];
    for (int element: array) {
        cout << element << endl;
        if (max < element) {
            max = element;
        }
        if (min > element) {
            min = element;
        }
    }
    cout << "最大数为" << max << endl;
    cout << "最小数为" << min << endl;
    return 0;
}
