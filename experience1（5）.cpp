#include <iostream>
using namespace std;

int main() {
    double F, C;
    cout << "请输入华氏度：";
    cin >> F;
    C = (F - 32) * 5.0 / 9.0;
    cout << "对应的摄氏度为：" << C << endl;
    return 0;
}