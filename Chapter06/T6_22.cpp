/*
*FileName:   T6_22.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��ӡ�����Ρ�
*/
#include<iostream>
using namespace std;
void print(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	cout << "�����������εı߳������򽫴�ӡ�����Σ� " << endl;
	int n;
	cin >> n;
	print(n);
	return 0;
}