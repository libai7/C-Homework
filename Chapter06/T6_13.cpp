/*
*FileName:   T6_13.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   输出输入数最接近的整数。
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
	cout << "请输入一个数，程序将输出最接近这个数的整数(输入0时退出程序)： " << endl;
	while (1)
	{
		cin >> x;
		if(!x)break;
		test(x);
	}
	return 0;
}