#include <iostream>
using namespace std;
int main()
{
	char lettle;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> lettle;
	if (lettle >= 'a' && lettle <= 'z')
	{
		cout << (char)(lettle - 32) << endl;
	}
	else
	{
		cout << (int)(lettle + 1) << endl;
	}
}