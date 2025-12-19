#include <iostream>
using namespace std;
#define MAX 1000
void count(const char s[], int counts[])
{
	int len = strlen(s);
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	
	for (int i = 0; i < len; i++)
	{
		char ch = s[i];

		if (ch >= 'A' && ch <= 'Z') {
			ch = char(ch + 32);  
		}

		if (ch >= 'a' && ch <= 'z') {
			int index = ch - 'a';  
			counts[index]++;      
		}
	}
 }
int main() {
	int counts[26] = { 0 };
	char s[MAX];
	cout << "Enter a string	: ";
	cin.getline(s, MAX);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0) {
			cout << char(i + 97) << ":" << counts[i] << "  times" << endl;
		}
	}

}
