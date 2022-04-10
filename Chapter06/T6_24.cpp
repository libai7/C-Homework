/*
*FileName:   T6_24.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 26th,2022
*College:    School of Computer Science and Information Engineering
*Function:   数字分离。
*/
#include<iostream>
using namespace std;

//数字分离
int* test01(int a[],int &i, int x)
{
	while (x > 9)
	{
		a[i++] = x % 10;
		x /= 10;
	}
	a[i] = x;
	return a;
}

int main()
{
	cout << "请输入整数（1--32767）: " << endl;
	int num;
	cin >> num;
	int arr[5] = { 0 };
	int j = 0;
	test01(arr, j, num);
	for (int k= j;k>=0;k--)
	{
		cout << arr[k] << "\t";
	}
	return 0;
}