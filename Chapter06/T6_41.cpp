/*
*FileName:   T6_41.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 28th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �ݹ�����Լ����
*/
#include<iostream>
using namespace std;
unsigned int gcd(unsigned int x, unsigned int y)
{
	if (0 == y) { return x; }
	else { gcd(y, x % y); }
}
int main()
{
	cout << "�����������������������������Լ���� " << endl;
	unsigned x, y,t;
	cin >> x >> y;
	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}
	cout << "���Լ���� " << gcd(x, y) << endl;
	return 0;
}