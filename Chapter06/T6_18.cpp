/*
*FileName:   T6_18.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ���ݼ��㡣
*/
#include<iostream>
using namespace std;
int integerPower(int x, int y)
{
	int sum = 1;
	for (int i = 0; i < y; i++)
	{
		sum = sum * x;
	}
	return sum;
}
int main()
{
	cout << "��������������x��y�����򽫼���x~y�� " << endl;
	int x, y;
	cin >> x >> y;
	cout << "����ֵ�� " << integerPower(x, y) << endl;
	return 0;
}