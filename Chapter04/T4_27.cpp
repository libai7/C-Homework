/*
*FileName:   T4_27.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ����һ��������������������Ӧ��ʮ����������
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������һ������������������������Ӧ��ʮ����������" << endl;
	unsigned long long num,x=0;
	while (1)
	{
		cin >> num;
		if (num % 10 != 0 && num % 10 != 1) { cout << "���������������������������" << endl; continue; }
		else { break; }
	}
	while (num)
	{
		x = x * 2 + num % 10;
		num /= 10;
	}
	cout << "���Ӧʮ��������Ϊ��" << x << endl;
	return 0;
}