/*
*FileName:   T5_10.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��1��5ÿ�������Ľ׳ˡ�
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "����\t" << "�׳�\t\n";
	for (int i = 1; i <= 5; i++)
	{
		int j=1;//j����i�Ľ׳� ��
		for (int i1 = i; i1 > 0; i1--)
		{
			j *= i1;
		}
		cout << i << "\t" << j << "\t\n";
	}
	return 0;
}