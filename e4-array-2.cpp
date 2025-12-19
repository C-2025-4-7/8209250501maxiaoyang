#include <iostream>
using namespace std;

void swap(double &x,double &y)
{ 
	double temp;
	temp = x;
	x = y;
	y = temp;
}
int main() {
	double arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i]<<"  ";
	}
}