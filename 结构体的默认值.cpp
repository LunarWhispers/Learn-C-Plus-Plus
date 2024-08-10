#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    struct student {
        string name;
        int age;
        string address = "一号楼";
    };

    struct student s1 = {"小明", 101};
    struct student s2 = {"小红", 102, "二号楼"};
    cout << "第一个学生的名字是" << s1.name << endl;
    cout << "第一个学生的年龄是" << s1.age << endl;
    cout << "第一个学生的地址是" << s1.address << endl;
    // 默认为 一号楼


    cout << "第2个学生的名字是" << s2.name << endl;
    cout << "第2个学生的年龄是" << s2.age << endl;
    cout << "第2个学生的地址是" << s2.address << endl;

    return 0;
}


