/*
*FileName:   T6_52.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 29th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �����������еĽ�Сֵ��
*/
#include<iostream>
using namespace std;
double minimun(double x, double y)
{
	return x < y ? x : y;
}
int main()
{
	while (1)
	{
		cout << "������������������Ѱ�����Сֵ��" << endl;
		cout << "1.����   2.�ַ�   3.������    0.�˳�����    ����ѡ���ţ� " << endl;
		int o;
		cin >> o;
		if (0 == o) { break; }
		switch (o)
		{
		case 1:
		{
			cout << "���������������� " << endl;
			int n1, n2;
			cin >> n1 >> n2;
			(double)n1, (double)n2;
			cout << "��С���� " <<(int) minimun(n1, n2) << endl;
		}
		break;
		case 2:
		{
			cout << "�����������ַ��� " << endl;
			char x, y;
			cin >> x >> y;
			(double)x, (double)y;
			cout << "��С���� " << (char)minimun(x, y) << endl;
		}
		break;
		case 3:
		{
			cout << "������������������ " << endl;
			double x, y;
			cin >> x >> y;
			cout << "��С��:  " << minimun(x, y) << endl;
		}
		break;
		default:
			cout << "�����������������룡" << endl;
			break;
		}
	}
	return 0;
}