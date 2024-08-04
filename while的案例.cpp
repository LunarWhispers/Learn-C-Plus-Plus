                                                //8.4//
                                    // ps：可以用break语句 改进//
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

    /*
     * while循环猜数字案例
     * 1.无限次机会，猜中为止
     * 2.猜错提示猜大猜小
     * 3.猜对后提示猜了几次
     */
    int fromto = get_random_num(1, 10);
    cout << "请写出你猜测的数：";
    int guess;
    int count = 1;
    cin >> guess;

    while (guess != fromto) {
        count++;
        if (guess > fromto) {
            cout << "猜大了，请再猜" << endl;
        }
        if (guess < fromto) {
            cout << "猜小了，请再猜" << endl;
        }
        cin >> guess;
    }

    cout << "终于猜对了，共猜了" << count << "次" << endl;

    return 0;
}


