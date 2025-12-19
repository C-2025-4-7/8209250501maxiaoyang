#include <iostream>
//摄氏度->华氏度
double celsius_to_fah(double cel) {
	double fah = cel * 1.8 + 32.0;
	return fah;
}
//华氏度->摄氏度
double fahrenheit_to_cels(double fah)
{
	double cel = (fah - 32.0) / 1.8;
	return cel;
}
