#include "iostream"
using namespace std;
int main(){
    system("chcp 65001");
//    这是一个变量
    int money;
    money = 50 ;
    cout <<"小明余额: "<< money << "RMB"<<endl;
    //那变量可以改变吗？
    //当然可以!!
    money = 45;
//    那还能用吗???
//    sure!!!!!
    cout << "买冰淇淋花费5元,剩下 " << money<< "RMB" <<endl;
//    而且c++也是有+-*/的
    money = money+10;
    cout <<"转卖冰淇淋得到10RMB,余额变为: " << money <<"RMB"<<endl;

    money = money - 2;
    cout << "买彩票花了2元,剩下: " << money << "RMB"<<endl;

    money = money * 2;
    cout <<"彩票奖金翻倍,剩下: " << money << "RMB"<<endl;





}