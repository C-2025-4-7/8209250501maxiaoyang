#include <iostream>
using namespace std;
 //交换
void swap(int* a, int* b)
{
	int temp = 0;
	
	
	temp = *a;
	*a = *b;
	*b = temp;
	
}
//冒泡排序
void BubbleSort(int *arr,int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (*(arr + j) > *(arr + j + 1)) 
			{ swap((arr + j), (arr + j + 1)); }
		 }
	}
}
//显示信息
void ShowInfo(int* list)
{
	cout << "指针list的地址： " << &list << endl;
	cout << "指针指向的地址： " << list << endl;
	cout << "指针list存储的首地址： " << list << endl;
	cout << "数组首元素的值是： " << *list << endl;

}
int main() {
	int n;
	cout << "请输入数组长度: ";
	cin >> n;
	int *list = new int[n];
	cout << "请输入" << n << "个整数: ";
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	cout << "交换前的信息" << endl;
	ShowInfo(list);
	BubbleSort(list, n);
	cout << "交换后的信息 " << endl;
	ShowInfo(list);
	cout << "排序后的数组：" ;
	for (int i = 0; i < n; i++)
	{
		cout << list[i]<<" " ;
	}
	delete[] list;
}
 