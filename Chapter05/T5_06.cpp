/*
*FileName:   T5_06.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 12th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ������ƽ��ֵ��
*/
#include<iostream>
using namespace std;
int main()
{
	int num = 0 ;
	double sum = 0.0,i = 0;
	cout << "����������������ƽ��ֵ����������������������9999��ֹ��" << endl;
	for (; ; i++)
	{
		cin >> num;
		if (num == 9999) { break; }
		sum += num;
	}
	cout << "ƽ����Ϊ�� " << sum / i << endl;
	return 0;
}