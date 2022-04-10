/*
*FileName:   T6_30.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   整数数字反向。
*/
#include<iostream>
using namespace std;

int Reverse(int n)
{
	int x=0;
	while (n)
	{
		x = x * 10 + n % 10;
		n /= 10;
	}
	return x;
}
int main()
{
	cout << "请您输入一个整数，程序将对其进行反转： " << endl;
	int n;
	cin >> n;
	cout << "反转后： " << Reverse(n) << endl;
	return 0;
}