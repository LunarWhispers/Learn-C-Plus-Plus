#include "random"
#include "iostream"
#include "windows.h"
using namespace std;
int get_random_num(int min, int max) {
    //创建一个随机数生成器
    random_device rd;
    mt19937 gen(rd());
    //定义一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);
    //生成一个随机数并输出
    int random_number = dis(gen);
    return random_number;

}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    string array[2][2][5];
    string names[]{"Landon", "Avery", "Kamden", "Bentley", "Finnegan", "Nash", "Emmett","Greyson", "Noah", "Jace""Jaxton",
                     "Sawyer", "Zachary", "Eli", "Keegan", "Lincoln", "Isaac", "Asher", "Declan", "Theo",
                     "Levi", "Dominic",
                     "Austin", "Wyatt", "Carter",
                     "Logan", "Luke", "Max", "Ethan", "Miles",
                     "oliver", "Hudson", "Owen", "William",
                     "Joshua",
                     "Benjamin", "Henry",
                     "LUcas",
                     "Alexander", "Jackson",
                     "Mason", "Grayson", "Ryder", "ELijah", "Liam",
                     "Caleb", "Thomas", "Cooper", "Hunter", "Connor","Dany"};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 5; ++k) {
               string subjects = i!=1? "专业为：物理,":"专业为：计算机,";
               string  classes = j!=1? "班级为1班,":"班级为2班,";
               cout << subjects << classes <<"座位号为"<<k<<","<<"姓名为：" <<names[get_random_num(1,50)]<<endl;
               /**
                * 00 0-4        01 0-4
                * 0 1 2 3 4     5 6 7 8 9
                * names[0]      names[5]
                * 1             6
                * 2             7
                * 3             8
                * 4
                *
                * 10 0-4       11 0-4
                * names[10]  names[15]
                *
                *
                *
                *
                */
            }
        }
    }
    return 0;
}
