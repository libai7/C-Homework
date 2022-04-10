/*
*FileName:   T6_14.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �����ض����롣
*/
#include<iostream>
#include<iomanip>
using namespace std;

//��ȷ����������
void roundToInteger(double n)
{
	cout << "������ " << floor(n + 0.5) << endl;
}

//��ȷ��ʮ��λ����
void roundToTenths(double n)
{
	cout << "ʮ��λ�� " << floor(n * 10 + 0.5) / 10 << endl;
}

//��ȷ���ٷ�λ����
void roundToHundresths(double n)
{
	cout << "�ٷ�λ�� " << floor(n * 100 + 0.5) / 100 << endl;
}

//��ȷ��ǧ��λ����
void roundToThousandths(double n)
{
	cout << "ǧ��λ�� " << floor(n * 1000 + 0.5) / 1000 << endl;
}

int main()
{
	cout << "������һ���������򽫶�����о�ȷ(����0ʱ��ֹ)�� " << endl;
	double n;
	while (1)
	{
		cin >> n;
		if (!n)break;
		cout << "ԭ���� " << n << endl;
		roundToInteger(n);
		roundToTenths(n);
		roundToHundresths(n);
		roundToThousandths(n);
	}
	return 0;
}