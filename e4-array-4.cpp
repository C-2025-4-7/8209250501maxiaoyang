#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0;//list1
	int j = 0;//list2
	int k = 0;//list3
	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[j])
		{
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
	}
	while (i < size1) {
		list3[k++] = list1[i++];
	}
	while (j < size1) {
		list3[k++] = list2[j++];
	}
 }
int main() {
	const int MAX = 80;
	int size1, size2, list1[MAX], list2[MAX], list3[MAX * 2];
	//输入数组1
	cout << "Enter lisr1:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	//输入数组2
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	int size = size1 + size2;
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is ";
	for (int i = 0; i < size; i++)
	{
		cout << list3[i]<<" ";
	}
}