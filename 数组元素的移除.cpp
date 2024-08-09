#include "iostream"
#include "windows.h"
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int * parr = new int[10]{3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
    int * nparr = new int[8];
    int offset = 0;
    for (int i = 0; i < 10; ++i) {
        if(i == 0 || i==5){
            offset++;
            continue;
        }
         nparr[i - offset] =  parr[i];
    }
    for (int k = 0; k <= 7 ; ++k) {
        cout << nparr[k]<<endl;
    }
    delete[] parr;
    delete[] nparr;
    return 0;
}


