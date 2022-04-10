/*
*FileName:   T6_21.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   判断奇偶。
*/
#include<iostream>
#define true 1
#define false 0
using namespace std;
bool iseven(int n)
{
	if (n % 2 == 0) { return true; }
	return false;
}
int main()
{
	cout << "请输入整数，程序将判断其是否位偶数（输入0终止）： " << endl;
	int n;
	while (1)
	{
		cin >> n;
		if (!n) { break; }
		if (iseven(n)) { cout << n << "是偶数" << endl; }
		else { cout << n << "是奇数" << endl; }
	}
	return 0;
}