/*
*FileName:   T6_20.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �ж�����ĵڶ��������Ƿ��ǵ�һ�������ı�����
*/
#include<iostream>
using namespace std;
bool multiple(int x, int y)
{
	if (y % x == 0) { return true; }
	return false;
}
int main()
{
	int x, y;
	while (1)
	{
		cout << "��������������(����0ʱ�˳�)�� " << endl;
		cin >> x;
		if (0 == x) { break; }
		cin >> y;
		if (multiple(x, y)) { cout << y << "��" << x << "�ı���" << endl; }
		else { cout << y << "����" << x << "�ı���" << endl; }
	}
	return 0;
}