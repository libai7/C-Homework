/*
*FileName:   T6_49.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 29th,2022
*College:    School of Computer Science and Information Engineering
*Function:   Բ������㡣
*/
#include<iostream>
using namespace std;
double circleAire(double r)
{
	return 3.1415926 * r * r;
}
int main()
{
	cout << "������Բ����������򽫼���������� " << endl;
	double r;
	cin >> r;
	cout << "Բ����� " << circleAire(r) << endl;
	return 0;
}