/*
*FileName:   T6_52.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       2022.4.8
*College:    School of Computer Science and Information Engineering
*Function:   �����������еĽϴ�ֵ��
*/
#include<iostream>
using namespace std;
double maximum(double x, double y)
{
	return x > y ? x : y;
}
int main()
{
	while (1)
	{
		cout << "������������������Ѱ����ϴ�ֵ��" << endl;
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
			cout << "�ϴ����� " << (int)maximum(n1, n2) << endl;
		}
		break;
		case 2:
		{
			cout << "�����������ַ��� " << endl;
			char x, y;
			cin >> x >> y;
			(double)x, (double)y;
			cout << "�ϴ����� " << (char)maximum(x, y) << endl;
		}
		break;
		case 3:
		{
			cout << "������������������ " << endl;
			double x, y;
			cin >> x >> y;
			cout << "�ϴ���:  " << maximum(x, y) << endl;
		}
		break;
		default:
			cout << "�����������������룡" << endl;
			break;
		}
	}
	return 0;
}