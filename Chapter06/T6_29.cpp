/*
*FileName:   T6_29.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   判断素数。
*/
#include<iostream>
#include<cmath>
using namespace std;

//判断素数函数
bool PrimeNumber(int n)
{
	//for(int i=2;i<=n/2;i++)
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) { return false; }
	}
	return true;
}
int main()
{
	cout << "2—10000之间的素数： " << endl;
	for (int i = 2; i < 10001; i++)
	{
		if (PrimeNumber(i)) { cout << i << endl; }
	}
	return 0;
}