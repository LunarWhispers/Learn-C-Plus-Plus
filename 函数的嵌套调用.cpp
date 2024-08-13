#include "iostream"
#include "windows.h"

using namespace std;

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

struct minandmax {
    int min;
    int max;
};

struct minandmax x(int a,int b) {
    int c = min(a,b);
    int d = max(a,b);
    struct minandmax v = {c,d};
    return v;
};


int main() {
    SetConsoleOutputCP(CP_UTF8);

    struct minandmax q = x(67,98);
    cout << q.min <<endl;
    cout << q.max <<endl;

    return 0;
}


