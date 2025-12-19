#include <iostream>
using namespace std;

bool is_prime(int num) {
	if (num == 1) { return false; }
	else if (num == 2) { return true; }
	else 
	{
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0) {
				return false;
				break;
			}

		}
		return true;
	}
}
int main() {
	int num = 0;
	for (int j = 1; j < 201; j++) {
		
		
		if (is_prime(j)) {
			cout << j<<"\t";
			num++;
			if (num % 10 == 0) { cout << endl; }
		}
		
	}
}