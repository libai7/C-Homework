/*
*FileName:   T6_28.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 26th,2022
*College:    School of Computer Science and Information Engineering
*Function:   打印1—1000内的完数。
*/
#include<iostream>
using namespace std;
bool isperfect(int n)
{
	if (1 == n) { return false; }
	int arr[1000] = { 0 };//存储其因子
	int i = 0;
	for (int j = 2;j<n; j++)//找不是自身的因子
	{
		if (n % j == 0) 
		{
			arr[i++] = j;
		}
	}
	int sum=1;
	for (int k = 0; k < i; k++)
	{
		sum += arr[k];
	}
	//cout << sum <<"," << n1 << endl;
	if (n == sum)return true;
	return false;
}
int main()
{
	cout << "1-1000之内的完数： " << endl;
	for (int i = 1; i <= 1000; i++)
	{
		if (isperfect(i)) { cout << i << endl; }
	}
	return 0;
}