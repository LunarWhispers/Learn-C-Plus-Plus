#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

/**
 * 作为一种类型，struct也可以变为指针的
 */
    struct stu {
        string name;
        int age;
        string gendor;
    };
    struct stu p1 = {"myc", 17, "男"};
    struct stu *STU = &p1;
    //但是在访问它时，需要用 名称 -> 部位名称
    cout << STU->name << endl;
    cout << STU->age << endl;
    cout << STU->gendor << endl;


    /**
     * 但是上面的时是静态内存管理，不能用delete删除空间，
     * 那怎么办？
     */
    struct stu p2 = *new stu{"myx", 999, "女（doge"};
    struct stu *study = &p2;
    cout << study->name << endl;
    cout << study->age << endl;
    cout << study->gendor << endl;


    return 0;
}


