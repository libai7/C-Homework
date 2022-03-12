/*
*FileName:   T4_13.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 8th,2022
*College:    School of Computer Science and Information Engineering
*Function:   打印汽车每次出车所得到的每加仑行驶英里数和所有加油综合计算的每加仑英里数。
*/
#include<iostream>
using namespace std;
int main()
{
	double a, b;//a代表行驶英里数，b代表用油加仑数。
	double sum1 = 0, sum2 = 0;
	while (1)
	{
		cout << "Enter miles driven (-1 to quit): ";
		cin >> a;
		if (a == -1)
		{
			break;
		}
		cout << "Enter gallons used: ";
		cin >> b;
		sum1 += a; sum2 += b;
		cout << "MGP this trip:　" << a/b << endl;
		cout << "Total MPG: " << sum1 / sum2 << endl;
	}
	return 0;
}