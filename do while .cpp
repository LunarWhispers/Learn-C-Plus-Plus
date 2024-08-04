                                                //8.4//
#include "iostream"
#include "windows.h"
#include "random"

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

    /**
     * do while是while的一种
     * 它会至少运行一次的循环体
     * 形式为：
     * do{
     * //循环体，至少执行一次
     * code;
     * ...
     * ...
     * }while(表达式);
     *
     */
    int num = get_random_num(1, 10);
    int guess;
    int count = 0;

    cout << "我已经想好了一个1到10之间的数字，你能猜到是哪个吗？" << endl;
    cout << "输入数字：";

    do {
        cin >> guess;
        count++;

        if (guess > num) {
            cout << "猜大了，再猜：";
        } else if (guess < num) {
            cout << "猜小了，再猜：";
        }

    } while (guess != num);

    cout << "恭喜你，猜对了！奖励大嘴巴子一个:) (doge" << endl;
    cout << "你总共猜了" << count << "次。" << endl;

    return 0;
}


