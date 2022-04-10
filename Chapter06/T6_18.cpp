/*
*FileName:   T6_18.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   求幂计算。
*/
#include<iostream>
using namespace std;
int integerPower(int x, int y)
{
	int sum = 1;
	for (int i = 0; i < y; i++)
	{
		sum = sum * x;
	}
	return sum;
}
int main()
{
	cout << "请输入两个整数x，y；程序将计算x~y： " << endl;
	int x, y;
	cin >> x >> y;
	cout << "求幂值： " << integerPower(x, y) << endl;
	return 0;
}