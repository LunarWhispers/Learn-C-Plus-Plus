#include "iostream"
#include "windows.h"
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8);

    int *pArr = new int[10]{3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
    int min = 0;
    int min_index = 0;
    for (int i = 0; i < 9; ++i) {
        for (int j = i; j < 10; ++j) {
            if (j == i) {
                min = pArr[i];
                min_index = j;
            }
            if (pArr[j] < min) {
                min = pArr[j];
                min_index = j;
            }

        }
        int tmp = pArr[i];
        pArr[i] = pArr[min_index];
        pArr[min_index] = tmp;

    }
    for (int k = 0; k < 10; ++k) {
        cout << pArr[k] << endl;
    }

    return 0;
}


