#include <iostream>
using namespace std;
 

int main()
{
	double a, b, c;
	cout << "请输入三角形三条边的长度： " << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		double C = a + b + c;
		cout << "这个三角形的周长是： " << C << endl;
		if (a == b || a == c || b==c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "这三条边不能构成三角形" << endl;
	}
}