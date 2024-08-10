#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /**
     * 结构体是用户自定义的数据类型
     * 形式为：
     * struct 名称{
     * 成员一类型 成员一名称
     * 成员二类型 成员二名称
     * 成员三类型 成员三名称
     * 。。。
     * 。。。
     * }
     */

    struct stu {
        string name = "myx";
        int age = 9999;
        string gendor = "man!";
    };
    //类型    量   名
    struct stu STU;
    //创建一个新的变量

//    cout <<stu<<endl;
//   这样是不行的，需要一个一个输出
    cout << STU.name << endl;
    cout << STU.age << "岁" << endl;
    cout << STU.gendor << endl;

    return 0;
}


