/*
*FileName:   T6_25.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 26th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ����������
*/
#include<iostream>
#include<cmath>
using namespace std;

int test(int a, int b, int c)
{
	return a * 3600 + b * 60 + c;
}
int main()
{
	cout << "������������������ʾ��һʱ��   ʱ�� �֣� �룺 " << endl;
	int a, b, c;
	cin >> a >> b >> c;
	cout << "������������������ʾ�ڶ�ʱ��   ʱ�� �֣� �룺 " << endl;
	int x, y, z;
	cin >> x >> y >> z;
	cout << "��������� " << fabs(test(a, b, c) - test(x, y, z)) << endl;
	return 0;
}