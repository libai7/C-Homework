/*
*FileName:   T5_08.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ������һ�����е���С������
*/
#include<iostream>
using namespace std;
int main()
{
	const int INF = 0x7fffffff;//����int�����������
	cout << "��������Ҫ�����������ֵĸ����� " << endl;
	int n,min=INF,num;
	cin >> n;
	cout << "���������������� " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num < min) { min = num; }
	}
	cout << "��С����Ϊ�� " << min << endl;
	return 0;
}