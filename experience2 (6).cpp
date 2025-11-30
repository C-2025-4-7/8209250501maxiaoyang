#include <iostream>
using namespace std;


int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int a, b;
    
    cout << "请输入第一个正整数a：";
    cin >> a;
    cout << "请输入第二个正整数b：";
    cin >> b;

  
    int biggestNum = gcd(a, b);
    
    int smallNum = a * b / biggestNum;

   
    cout << a << "和" << b << "的最大公约数是：" << biggestNum << endl;
    cout << a << "和" << b << "的最小公倍数是：" << smallNum << endl;

    return 0;
}