/*
*FileName:   T6_27.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   找三个实数中的最小数。
*/
#include<iostream>
using namespace std;
double Mininum(double x, double y, double z)
{
	if (x <= y && x <= z) { return x; }
	if (y <= x && y <= z) { return y; }
	return z;
}
int main()
{
	double a, b, c;
	cout << "请输入三个实数，程序将输出其最小数： " << endl;
	cin >> a >> b >> c;
	cout << "最小数： " << Mininum(a, b, c) << endl;
	return 0;
}