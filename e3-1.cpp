#include <iostream>
using namespace std;
//最大公因数
void MaxGongyinshu(int x, int y ,int &t)
{
	
	
	int a, b;
	if (x == y) { t = x; }
	else 
	{
		a = (x > y) ? x : y;
		b = (x > y) ? y : x;//a>b
		while (b != 0)
		{
			int temp = b;
			b = a % b;
			a = temp;

		}
		t = a;
	}
}
//最小公倍数 
void MinGongbeishu(int x, int y,int &t)
{
	MaxGongyinshu(x, y, t);
	t = x * y / t;
}
int main() {
	int x, y, Gys, Gbs;
	cout << "请输入两个整数： ";
	cin >> x >> y;
	MaxGongyinshu(x, y, Gys);
	MinGongbeishu(x, y, Gbs);
	cout << "这两个数的最大公因数为" << Gys << endl;
	cout << "这两个数的最小公倍数" << Gbs << endl;
}