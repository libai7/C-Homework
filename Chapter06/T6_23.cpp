/*
*FileName:   T6_23.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��ӡͼ����
*/
#include<iostream>
using namespace std;
void print(int n)
{
	cout << "�����ӡ���ַ��� " << endl;
	char a;
	cin >> a;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a;
		}
		cout << endl;
	}
}
int main()
{
	cout << "������߳��� " << endl;
	int n;
	cin >> n;
	print(n);
	return 0;
}