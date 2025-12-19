#include <iostream>
using namespace std;

bool NotIn(int arr[], int x,int n) {
	
	for (int i = 0; i < 10; i++) {
		if (arr[i] == x)
		{
			return false;
			
		}
	}
	
	return true;
}
int main() {
	int arr[10] ;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		int x;
		cin >> x;
		if (NotIn(arr, x,count))
		{
			arr[count] = x;
			count += 1;

		}
	}
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << "  ";
	}
	
	
}