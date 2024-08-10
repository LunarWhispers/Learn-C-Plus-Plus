#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    struct student{
        string name;
        int age;
        string gendor;
    };

    //这是结构体数组的写法
    struct student s1[2]{
            {"myc",12,"man!!!!"},
            {"myx",999999,"man!!!!!!!!!!!!!!!!"}
    };
    for (int i = 0; i < 2; ++i) {
        cout <<"名字为"<<s1[i].name<<endl;
        cout <<"性别为"<<s1[i].age<<endl;
        cout <<"性别为"<<s1[i].gendor<<endl;
    }

    return 0;
}


