/*
*FileName:   T4_36.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 11th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �������ݡ�
*/
#include<iostream>
using namespace std;
int main()
{
	
	int s;
	while (1)
	{
		cout << "1.����     2.����     3.�˳�����\n" << "��ѡ�� ";
		cin >> s;
		if (s == 1)
		{
			cout << "������һ����λ�����������򽫶�����м���: " << endl;
			int num1, a, b, c, d;
			cin >> num1;
			if (num1 < 1000 || num1>9999) { cout << "��������" << endl; continue; }
			a = num1 % 10;
			b = num1 / 10 % 10;
			c = num1 / 100 % 10;
			d = num1 / 1000; //cout << a << b << c << d;
			a = (a + 7) % 10;
			b = (b + 7) % 10;
			c = (c + 7) % 10;
			d = (d + 7) % 10;
			cout << "���ܺ������Ϊ�� " << d << c << b << a << endl;
		}
		else if (s == 2)
		{
			cout << "��������ܺ�����֣����򽫶�����н���: " << endl;
			int num, a1, b1, c1, d1;
			cin >> num;
			if (num < 1000 || num>9999) { cout << "��������" << endl; continue; }
			a1 = num % 10;
			b1 = num / 10 % 10;
			c1 = num / 100 % 10;
			d1 = num / 1000;
			if (a1 < 7) { a1 = a1 + 3; }
			else { a1 -= 7; }
			if (b1 < 7) { b1 = b1 + 3; }
			else { b1 -= 7; }
			if (c1 < 7) { c1 = c1 + 3; }
			else { c1 -= 7; }
			if (d1 < 7) { d1 = d1 + 3; }
			else { d1 -= 7; }
			cout << "���ܺ������Ϊ��" << d1 << c1 << b1 << a1 << endl;
		}
		else if (s == 3) { break; }
		else { cout << "�����������������룡" << endl; }
	}
	return 0;
}