/*
*FileName:   T5_05.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 12th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ������͡�
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������Ҫȥ��������ĸ����� ";
	int n,sum=0,num1;
	cin >> n;
	cout << "����������Ҫ��͵������� ";
	for (int i = 0; i < n; i++)
	{
		cin >> num1;
		sum += num1;
	}
	cout << "���������ĺ�Ϊ�� " << sum << endl;
	return 0;
}