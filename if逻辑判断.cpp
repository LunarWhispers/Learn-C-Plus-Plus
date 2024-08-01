                                        //8.1//

#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    /*
     * if是逻辑判断的方式
     * 形式为：
     *  if(比较内容，必须为布尔类型){
     *    结果为true输出的内容
     *  }
     */
    cout <<"欢迎来到游乐园，儿童免费，成人10000刀乐（doge" <<endl;
    cout <<"请输入你的年龄:";
    int age;
    cin >> age;
    if(age < 18){
        cout <<"未成年请进，欢迎！！" <<endl;
    }
    if (age > 18){
        cout <<"请给10000000000刀乐，坐地起价不行吗，不玩滚damn"<<endl;
    }
    cout <<"祝你玩的开心!!!!"<<endl;


    return 0;
}



