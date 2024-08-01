                                                    //8.1//
#include "iostream"
#include "windows.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    /*上节课学习了if逻辑判断，那if只会识别true，那false怎么办
     *当然是用if else句型了
     * 形式为：
     * if(比较内容，必须为布尔类型){
     *     结果为true输出的内容
     * }
     * else {
     *  结果为false输出的内容
     * }
     */
    cout <<"欢迎来到动物园"<<endl;
    cout <<"请输入你的身高（cm）："<<endl;
    int H;
    cin >> H;
    if (H >= 120){
        cout <<"你的身高超过120cm，游玩需要9999999999999津巴布韦币"<<endl;
    }
    else{
        cout <<"你的身高未超过120cm，免费游玩" <<endl;
    }
    cout <<"祝您游玩愉快"<<endl;

    return 0;
}