/*
*FileName:   T6_21.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �ж���ż��
*/
#include<iostream>
#define true 1
#define false 0
using namespace std;
bool iseven(int n)
{
	if (n % 2 == 0) { return true; }
	return false;
}
int main()
{
	cout << "�����������������ж����Ƿ�λż��������0��ֹ���� " << endl;
	int n;
	while (1)
	{
		cin >> n;
		if (!n) { break; }
		if (iseven(n)) { cout << n << "��ż��" << endl; }
		else { cout << n << "������" << endl; }
	}
	return 0;
}