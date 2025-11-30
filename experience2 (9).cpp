#include <iostream>
using namespace std;
int main()
{
	
	int buy_num = 2;
	int day = 1;
	int total = 2;
	do {
		day++;
		buy_num = buy_num * 2;
		total = total + buy_num;
	} while (buy_num*2<= 100);
	double average = total * 0.8 / day;
	cout << average;
}