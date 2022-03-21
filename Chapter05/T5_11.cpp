/*
*FileName:   T5_11.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算不同利率下的年复利金额。
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
		cout << "利率为" << i << ":  \n";
		cout << "第n年\t" << "金额 \t\n";
		for (int j = 1; j <= 10; j++)
		{
			p1 = p1 * (1 + i);
			cout << j << "\t" << p1 << "\t\n";
		}
	}
	return 0;
}