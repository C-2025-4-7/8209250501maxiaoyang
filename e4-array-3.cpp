#include <iostream>
using namespace std;

void a(bool *arr,int n)
{
	int x = (101 + n) / (n + 1);
	for (int i = 1; i < x; i++)
	{
		arr[(n + 1) * i - 1] = !arr[(n + 1) * i - 1];
	}
}
int main() {
	bool arr[100] = { false };//falseÎª¹Ø
	for (int i = 0; i < 100; i++) {
		a(arr, i);
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i])
		{
			cout << i +1<< " ";
		}
	}
	
}