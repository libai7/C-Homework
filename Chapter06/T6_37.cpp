/*
*FileName:   T6_37.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   斐波那契数列非递归计算前n个Fibonacci数。（规定第0个是0，第一个是1）
*/
#include<iostream>
using namespace std;
unsigned long fibonacci(unsigned long n)
{
	if (0 == n || 1 == n) { return n; }
	unsigned arr[2] = { 0,1 };
	for (int i = 2; i <= n; i++)
	{
		arr[i % 2] = arr[0] + arr[1];
		if (i == n)return arr[i % 2];
	}

}
int main()
{
	cout << "您想查询前几个斐波那契数： " << endl;
	int n; cin >> n;
	cout << "前" << n << "个斐波那契数： " << endl;
	for (int i = 0; i <= n; i++)
	{
		cout << fibonacci(i) << "\t";
	}
	return 0;
}