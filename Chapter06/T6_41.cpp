/*
*FileName:   T6_41.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 28th,2022
*College:    School of Computer Science and Information Engineering
*Function:   递归的最大公约数。
*/
#include<iostream>
using namespace std;
unsigned int gcd(unsigned int x, unsigned int y)
{
	if (0 == y) { return x; }
	else { gcd(y, x % y); }
}
int main()
{
	cout << "请输入两个正整数，程序将求其最大公约数： " << endl;
	unsigned x, y,t;
	cin >> x >> y;
	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}
	cout << "最大公约数： " << gcd(x, y) << endl;
	return 0;
}