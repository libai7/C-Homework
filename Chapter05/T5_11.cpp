/*
*FileName:   T5_11.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ���㲻ͬ�����µ��긴����
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	double p = 1000.00;
	for (double i = 0.05; i <= 0.10; i += 0.01)
	{
		double p1 = p;
		cout << "����Ϊ" << i << ":  \n";
		cout << "��n��\t" << "��� \t\n";
		for (int j = 1; j <= 10; j++)
		{
			p1 = p1 * (1 + i);
			cout << j << "\t" << p1 << "\t\n";
		}
	}
	return 0;
}