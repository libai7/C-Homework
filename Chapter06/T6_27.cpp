/*
*FileName:   T6_27.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ������ʵ���е���С����
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
	cout << "����������ʵ���������������С���� " << endl;
	cin >> a >> b >> c;
	cout << "��С���� " << Mininum(a, b, c) << endl;
	return 0;
}