#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    /**
     * const用来修改常量，可以配合指针使用
     * 三种用法
     * 1.const 类型 * 名；
     * 存储值不可变，指针指向可变
     */
     int b = 10,c = 20;
     const int * a = &b;
     cout <<  * a <<endl;
//     a = *c;
     a = &c;
     cout << a <<endl;


     /**
      * 2.类型 * const 名；
      * 存储值可变，指针指向不可变
      */
     int d = 30, e = 40;
     int * const f = &d;
     cout << f <<endl;
//   f = &e;
     *f = e;


     /*
      * 3. const 类型 * const 名；
      * 啥都不能变:)
      */
     int g = 50 , h = 60;
     const int * const i = &g;
     cout << i <<endl;
//     *i = h;
//     i = &h;
    return 0;
}


