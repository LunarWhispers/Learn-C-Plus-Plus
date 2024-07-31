                                          //7.31//
#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    /* 比较运算符有六种形式
     * == 相等于
     * != 不等于
     * < 小于
     * > 大于
     * <= 小于等于（小于或等于）
     * >= 大于等于 （大于或等于）
     *
     *  输出结果会为bool（布尔类型）:
     *  false 不是，也就是0，
     *  true 是，也就是1。
     *  PS:一定要为cout语句中的运用比较运算符的句子加上（）!!
     */
    int num = 90;
    int num2 = 80;
    cout << (num == num2) <<endl;
    cout << (num != num2) <<endl;
    cout << (num < num2) <<endl;
    cout << (num > num2) <<endl;
    cout << (num <= num2) <<endl;
    cout << (num >= num2) <<endl;

    //but，字符串怎么比较呢？？
    //这样也是可以的

    string W1 = "hello world";
    string W2 = "hello world";
    cout << (W1==W2) <<endl;

    return 0;
}