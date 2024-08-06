#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    char aaa[] {'h','e','l','l','o','\0'};
    char ddd[] {'w','o','r','l','d','\0'};
    cout << aaa << ',' <<ddd<<endl;
    return 0;
}


