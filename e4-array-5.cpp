#include <iostream>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 > len2) { return -1; }
	for (int i = 0; i <=len2 - len1; i++) 
	{
		bool a = true;
		for (int j = 0; j < len1; j++)
		{
			if (s1[j] != s2[i + j])
			{
				a = 0;
				break;
			}
		}
		if (a){ return i; }
		
	}
	return -1;
}
int main() {
	const int MAX = 1000;
	char s1[MAX], s2[MAX];
	cout << "Enter the first string: ";
	cin.getline(s1, MAX);
	cout << "Enter the second string: ";
	cin.getline(s2, MAX);
	int result = indexOf(s1, s2);
	cout << result;
}