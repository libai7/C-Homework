/*
*FileName:   T5_10.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   求1到5每个整数的阶乘。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "整数\t" << "阶乘\t\n";
	for (int i = 1; i <= 5; i++)
	{
		int j=1;//j代表i的阶乘 。
		for (int i1 = i; i1 > 0; i1--)
		{
			j *= i1;
		}
		cout << i << "\t" << j << "\t\n";
	}
	return 0;
}