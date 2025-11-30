#include <iostream>
using namespace std;
int main()
{
	double x=0;
	double y = 0;
	cout << "请输入x的值(0<x<10)： " << endl;
	while (1)
	{
		cin >> x;
		if (x > 0 && x < 1)
		{
			y = 3 - 2 * x;
			break;
		}
		else if (x >= 1 && x < 5)
		{
			y = 1 / (2 * x) + 1;
			break;
		}
		else if (x >= 5 && x < 10)
		{
			y = x * x;
			break;
		}
		else
		{
			cout << "输入错误，请重新输入（0<x<10)" << endl;
		}
	}
	cout << "y的值为： " << y << endl;
}