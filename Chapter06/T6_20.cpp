/*
*FileName:   T6_20.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   判断输入的第二个整数是否是第一个整数的倍数。
*/
#include<iostream>
using namespace std;
bool multiple(int x, int y)
{
	if (y % x == 0) { return true; }
	return false;
}
int main()
{
	int x, y;
	while (1)
	{
		cout << "请输入两个整数(输入0时退出)： " << endl;
		cin >> x;
		if (0 == x) { break; }
		cin >> y;
		if (multiple(x, y)) { cout << y << "是" << x << "的倍数" << endl; }
		else { cout << y << "不是" << x << "的倍数" << endl; }
	}
	return 0;
}