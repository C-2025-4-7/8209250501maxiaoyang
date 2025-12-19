# include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int i = 0;
	int result = 0;
	while (hexString[i] != '\0')
	{
		char c = hexString[i];
		int num = 0;
		if (c >= 'A' && c <= 'Z')
		{
			num = c - 'A'+10;
		}
		else {
			num = c - '0';
		}
		result = result * 16 + num;
		i++;
	}
	return result;
}
int main()
{
	cout << parseHex("A5")<<endl;
	 
}