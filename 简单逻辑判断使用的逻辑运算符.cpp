                                        //8.3//
#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /*
     * 在较为简单的逻辑判断场景中，我们只需要使用逻辑运算符就好了
     */

    // ! //

    //哥哥是一个口是心非的人，他说喜欢我就是不喜欢我，说不喜欢我就是喜欢我
    double love ;
    cout <<"哥哥喜欢我吗，喜欢扣1，不喜欢扣2"<<endl;
    cin >> love;
    if(love!= 1){

        cout <<"哥哥，我也爱你"<<endl;
    }else{
        cout <<555<<endl;
    }

    cout <<"-----------------"<<endl;


    //&&//

    //臭子游乐园身高1.2m以下和未成年可以免费游玩
    double height, age;
    cout <<"请输入你的身高(cm)"<<endl;
    cin >> height;
    cout <<"请输入你的年龄"<<endl;
    cin >> age;
    if(height < 120 && age <18){
        cout << "免费游玩！！！" <<endl;
    }else{
        cout << "不可以免费游玩！！！" <<endl;
    }
    //需要满足两个条件//

    cout <<"-----------------"<<endl;

    // ||  //


    double height1, age1;
    cout <<"请输入你的身高(cm)"<<endl;
    cin >> height1;
    cout <<"请输入你的年龄"<<endl;
    cin >> age1;
    if(height1 < 120 || age1 <18){
        cout << "免费游玩！！！" <<endl;
    }else{
        cout << "不可以免费游玩！！！" <<endl;
    }
    //只需要满足1个条件//


    return 0;
}



