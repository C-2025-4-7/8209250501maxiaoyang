
#include "mytemperature.h"
using namespace std;
int main() {
	double cel_start, fah_start;
	cout << "请输入摄氏度: ";
	cin >> cel_start ;
	double fah = celsius_to_fah(cel_start);
	
	printf("摄氏度->华氏度:%.1f\n", fah);
	cout << "请输入华氏度： ";
	cin>> fah_start;
	double cel = fahrenheit_to_cels(fah_start);
	printf("华氏度->摄氏度:%.2f\n", cel);
	
}