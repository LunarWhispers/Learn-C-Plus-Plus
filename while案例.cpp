                                               //8.4//
#include "iostream"
#include "windows.h"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    int line = 1;
    while (line <= 9) {
        int Lie = 1;
        while (Lie <= line) {
            cout << Lie << "x" << line << "=" << Lie * line << "\t ";
            Lie++;
        }
        line++;
        cout << endl;
    }

    return 0;
}


