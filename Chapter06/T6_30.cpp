/*
*FileName:   T6_30.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �������ַ���
*/
#include<iostream>
using namespace std;

int Reverse(int n)
{
	int x=0;
	while (n)
	{
		x = x * 10 + n % 10;
		n /= 10;
	}
	return x;
}
int main()
{
	cout << "��������һ�����������򽫶�����з�ת�� " << endl;
	int n;
	cin >> n;
	cout << "��ת�� " << Reverse(n) << endl;
	return 0;
}