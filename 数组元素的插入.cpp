//
// Created by starr on 24-8-9.
//
#include "iostream"
#include "windows.h"
using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    int * parr = new int[5]{2,4,5,6,7};
    int * nparr = new int[7];
    int offset = 0;
    for (int i = 0; i < 8; ++i) {
        if ( i == 2 ){
            offset++;
            nparr[1] = 3;
        }else if (i == 7){
            offset++;
            nparr[6] = 8;
        }
        nparr[i] = parr[i - offset];
    }
    for (int k = 0; k < 7; ++k) {
        cout << nparr[k] <<endl;
    }
    delete[] parr;
    delete[] nparr;
    return 0;
}


