#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    a:
    cout << 'a' <<endl;
//    goto a;
    b:
    cout << 'b' <<endl;
//    goto b;
    c:
    cout << 'c' <<endl;
    d:
    cout << 'd' <<endl;

}


