/*
*FileName:   T5_05.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 12th,2022
*College:    School of Computer Science and Information Engineering
*Function:   整数求和。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入要去求和整数的个数： ";
	int n,sum=0,num1;
	cin >> n;
	cout << "请依次输入要求和的整数： ";
	for (int i = 0; i < n; i++)
	{
		cin >> num1;
		sum += num1;
	}
	cout << "输入整数的和为： " << sum << endl;
	return 0;
}