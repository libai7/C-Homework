/*
*FileName:   T6_42.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 28th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��������֮��ľ��롣
*/
#include<iostream>
#include<cmath>
using namespace std;
double distance(double a, double b, double c, double d)
{
	return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}
int main()
{
	double a, b, c, d;
	cout << "�������һ��������꣺ " << endl;
	cin >> a >> b;
	cout << "������ڶ���������꣺ " << endl;
	cin >> c >> d;
	cout << "���룺 " << distance(a, b, c, d) << endl;
	return 0;
}