/*
*FileName:   T4_16.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 8th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �����Ա�Ĺ���ʱ�������㲢��ʾ���Ӧ�Ĺ��ʡ�
*/
#include<iostream>
using namespace std;
int main()
{
	double h, r;
	while (1)
	{
		cout << "Enter hours worked (-1 to end): ";
		cin >> h;
		if (h == -1) { break; }
		cout << "Enter houly rate of the employee ($00.00): ";
		cin >> r;
		if (h <= 40) { cout << "Salary is $" << h * r << endl; }
		else { cout << "Salary is $" << 40 * r + (h - 40) * 1.5 * r << endl; }
	}
	return 0;
}