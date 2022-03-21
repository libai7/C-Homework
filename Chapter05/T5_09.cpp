/*
*FileName:   T5_09.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   打印从1到15中奇数的乘积。
*/
#include<iostream>
using namespace std;
int main()
{
	int c=1;
	for (int i = 1; i <= 15; i += 2)
	{
		c *= i;
	}
	cout << "1到15中奇数的乘积为： " << c << endl;
	return 0;
}