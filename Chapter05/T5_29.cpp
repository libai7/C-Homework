/*
*FileName:   T5_29.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ���㸴��396�ꡣ
*/
#include<iostream>
using namespace std;
int main()
{
	double m = 24.0;
	for (double i = 0.05; i <= 0.10; i += 0.01)
	{
		cout << "���ʣ�" << i << endl;
		for (int y = 1; y <= 396; y++)
		{
			m *= (1.0 + i);
		}
		cout << "������Ϊֹ��Ϊ�� " << m << endl;
	}
	return 0;
}