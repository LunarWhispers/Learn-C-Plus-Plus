                                            //8.1//
#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    //在生活中，我们可能不止两次判断，可能要100次，1000次判断
    //那怎么办？
    //else if语句可以实现
    /*形式为：
     * if(条件判断一){
     * 结果为true输出的内容
     * }
     * else if(条件判断二){
     * 结果为true输出的内容
     * }
     * else if(条件判断三){
     * 结果为true输出的内容
     * }
     * ..
     * ..
     * ..
     * ..
     */

    cout << "请输出一个猜想的数字" <<endl;
    int num =  73;
    int GN;
    cin >>GN;
    if(GN == num){
        cout <<"猜对啦，奖励一个好吃的肉包子（doge" <<endl;
    }
    else if (GN > num){
        cout << "猜大了哟 " <<endl;
    }
    else if (GN < num){
        cout << "猜小了哟 " <<endl;
    }


    return 0;
}