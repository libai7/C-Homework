/*
*FileName:   T6_26.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 26th,2022
*College:    School of Computer Science and Information Engineering
*Function:   温度转换。
*/
#include<iostream>
#include<iomanip>
using namespace std;
double celsius(double f)
{
	return 5.0 / 9.0 * (f - 32);
}
double fahrenheit(double c)
{
	return 1.8 * c + 32;
}
int main()
{
	cout << fixed << setprecision(1);
	for (double i = 0; i <= 100; i++)
	{
		cout << i << "'C=" << fahrenheit(i) << "'H\t";
		if ((int)i % 5 == 0) { cout << endl; }
	}
	for (double j = 32; j <=212; j++)
	{
		cout << j << "'F=" << celsius(j) << "'C\t";
		if ((int)j % 5 == 0) { cout << endl; }
	}
	return 0;
}