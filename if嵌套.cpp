#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

        /*
         * 有时候我们需要在满足A条件后再次判断B或C条件，那怎么办？
         * 嵌套！！
         * if(比较内容，必须为布尔类型){
              代码
             }
        else {
              代码
        if{
            代码
         }
         ..
         ..
         ..
        }
         ..
         ..
         ..
        */

        cout <<"第一次猜数字";
        int num1;
        int num2;
        int num3;
        int zhengquedaan = 7;
        cin >>num1;
         if(num1==zhengquedaan){
             cout <<"真棒，猜对了" <<endl;
         }
         else{
             cout <<"不对，请再猜一次:";
             cin >> num2;
             if(num2==zhengquedaan){
                 cout <<"真棒，猜对了" <<endl;
             }
             else {
                 cout <<"不对，最后猜一次:";
                 cin >> num3;
                 if(num3==zhengquedaan){
                     cout <<"终于猜对了" <<endl;
                 }
                 else{
                     cout << "sorry，全部猜错，正确答案为7" <<endl;
                 }
             }
         }
    return 0;
}