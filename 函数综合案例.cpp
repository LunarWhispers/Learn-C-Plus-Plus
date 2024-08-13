#include "iostream"

using namespace std;

//存钱
void save_money(const string &name, int money, int *const now_money) {
    if (money < 0) {
        cout << "tm给我输整数" << endl;
    } else {
        cout << "-----------------存钱-----------------" << endl;
        cout << name << ",你好，你存款" << money << "元成功" << endl;
        *now_money = *now_money + money;
        cout << "现在，" << name << "用户有" << *now_money << "元" << endl;
    }
}

//取钱
void get_money(const string &name, int money, int *const now_money) {
    cout << "-----------------取钱-----------------" << endl;
    if (money > *now_money || money < 0) {
        cout << "我上早8，你乱输个damn呀" << endl;
    } else if (money <= *now_money) {
        cout << name << ",你好，你取款" << money << "元成功" << endl;
        *now_money = *now_money - money;
        cout << "现在，" << name << "用户有" << *now_money << "元" << endl;
    }
}

//查💴
void query_money(const string &name, const int *const now_money) {
    cout << name << "，您好，你的余额剩余" << *now_money << "元" << endl;
}

//菜单
int menu(const string &name) {
    cout << "-----------------主菜单-----------------" << endl;
    cout << name << ",您好，欢迎来到丑星ATM机，请选择操作:" << endl;
    cout << "查钱请输入1" << endl;
    cout << "存钱请输入2" << endl;
    cout << "取钱请输入3" << endl;
    cout << "退出请输入4" << endl;
    cout << "请输入你的选择: ";
    int num;
    cin >> num;
    return num;
}

int main() {
    string username;
    int now_money1 = 500000;

    cout << "输入你的名字" << endl;
    cin >> username;
    int test = 1;
    while (test) {
        int select_num = menu(username);
        switch (select_num) {
            case 1:
                query_money(username, &now_money1);
                break;
            case 2:
                cout << "您要存多少钱？" << endl;
                int cunmoney;
                cin >> cunmoney;
                save_money(username, cunmoney, &now_money1);
                break;
            case 3:
                cout << "您要取多少钱？" << endl;
                int qumoney;
                cin >> qumoney;
                get_money(username, qumoney, &now_money1);
                break;
            default:
                cout << "程序退出，byebye！" << endl;
                test = 0;
        }
    }


    return 0;
}


