#include "iostream"
#include "windows.h"

using namespace std;

//void 函数类型没有返回值
void love(int LOVE){
    cin >> LOVE;
    cout <<"然后，生~~成~~"<<endl;
    for (int i = 0; i < LOVE; ++i) {

        cout <<"不如阿the，我爱你"<<endl;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    love( 9 );


    return 0;
}


