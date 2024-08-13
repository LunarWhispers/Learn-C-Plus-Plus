#include "iostream"

using namespace std;

void switch_num(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void switch_num_pointer(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {

    int x = 8;
    int y = 10;
    switch_num(x,y);
    cout <<x<<endl;
    cout <<y<<endl;
    /**
     * 这里的值只不过是赋予了a和b,x和y本身不会受到影响
     */
    cout  <<"-----------------------"<<endl;
    switch_num_pointer(&x,&y);
    cout << x<<endl;
    cout <<y<<endl;
    return 0;
}


