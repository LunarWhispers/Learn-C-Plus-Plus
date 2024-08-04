                                                //8.4//
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
    /**
    * for循环是一种更为严谨的循环
    * 形式为：
    *      for(循环因子的初始化;条件判断；循环因子的更新){
    *       code
    *       ..
    *       ..
    *       ..
    *       }
    */

    int num = get_random_num(1, 10);
    cout << num << endl;
    cout << "请输入猜的数字：" << endl;
    int guess;
    int count = 1;
    cin >> guess;
    for (; guess != num;) {
        count++;
        if (guess > num) {
            cout << "猜大了，再猜：" << endl;
        } else if (guess < num) {
            cout << "猜小了，再猜：" << endl;
        }
        cin >> guess;
    }

    cout << "恭喜你，猜对了！奖励大嘴巴子一个:) (doge" << endl;
    cout << "猜对的次数为" << count << endl;
    return 0;
}
