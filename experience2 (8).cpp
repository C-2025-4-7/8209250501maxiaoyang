#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a = 0.0;
	
	cout << "请输入一个数" << endl;
	cin >> a;
	double Xn1 = a;
	double Xn  = 0.0 ;
	const double a_ = fabs(a);
	do{
		Xn = Xn1;
		Xn1 = (Xn + a_/ Xn) / 2;

	} while (fabs(Xn1 - Xn) >= 1e-5);
	if (a < 0)
	{
		cout << -Xn1 << "i" << endl;
	}
	else
	{
		cout << Xn1 << endl;
	}
	return 0;
	
}