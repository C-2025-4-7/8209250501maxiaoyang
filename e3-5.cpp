#include <iostream>
using namespace std;
int MonkeyEatPeach(int x) {
	if (x == 10) return 1;
	return (MonkeyEatPeach(x+1)+1)*2;

}

int main() {
	cout << MonkeyEatPeach(1) << endl;
	

}