/*
*FileName:   T6_13.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �����������ӽ���������
*/
#include<iostream>
#include<cmath>
using namespace std;
void test(double n)
{
	cout << n <<"\t" << floor(n + 0.5) << endl;
}
int main()
{
	double x;
	cout << "������һ���������������ӽ������������(����0ʱ�˳�����)�� " << endl;
	while (1)
	{
		cin >> x;
		if(!x)break;
		test(x);
	}
	return 0;
}