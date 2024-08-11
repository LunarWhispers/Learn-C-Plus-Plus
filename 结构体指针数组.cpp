#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /**
     * 结构体指针的意思是，指针数组里面存放的是结构体
     */
    struct stu {
        string name;
        int age;
        string gendor;
    };
    struct stu *parr = new stu[5];
    for (int i = 0; i < 5; ++i) {
        cout << "请输入第" << i + 1 << "个学生的姓名:" << endl;
        cin >> parr[i].name;
        cout << "请输入第" << i + 1 << "个学生的年龄:" << endl;
        cin >> parr[i].age;
        cout << "请输入第" << i + 1 << "个学生的性别:" << endl;
        cin >> parr[i].gendor;
    }
    int k = 0;
    cout << "学生信息录入完成，开始输出" << endl;
    cout << endl;

    for (int k = 0; k < 5; ++k) {
        cout << "学生" << k + 1 << "姓名为 " << parr[k].name << endl;
        cout << "学生" << k + 1 << "年龄为 " << parr[k].age << endl;
        cout << "学生" << k + 1 << "性别为 " << parr[k].gendor << endl;
        cout << endl;
    }

    delete[] parr;
    return 0;
}


