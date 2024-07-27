#include "iostream"
#include "windows.h"
using namespace std;

int main(){

    SetConsoleOutputCP(CP_UTF8);


   /*PS！！！！！！！！！！！！！！！
    * 如果数字较大，IDE则会使用科学计算法
    * 那该则么办？？？
    * 添上一点东西
    */
    cout <<fixed;   //设置为小数显示
    cout.width(20);  //设置显示的最大宽度


    /*
    * 实型也分为三种类型：float（常用），double（常用），long double
    */
    //1.float（4字节），有效位6-7位
    float NumOne = 1.77788;  //最大位数7
    cout << NumOne << "字节数，" <<sizeof(NumOne)<<endl;

    //2.double(8字节），有效位15-16位
    double NumTwo = 1234567890123456; //最大位数16位
    cout << NumTwo << "字节数，" <<sizeof(NumTwo)<<endl;

    //3.long double(16字节)，有效位17-18位
    long double NumThr = 123456789012345678; //最大位数18位
    cout << NumThr << "字节数，" <<sizeof(NumThr)<<endl;


    return 0;
}