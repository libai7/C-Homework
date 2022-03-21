/*
*FileName:   T5_08.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   找输入一组数中的最小整数。
*/
#include<iostream>
using namespace std;
int main()
{
	const int INF = 0x7fffffff;//定义int型无穷大常量。
	cout << "请输入您要输入整数数字的个数： " << endl;
	int n,min=INF,num;
	cin >> n;
	cout << "请依次输入整数： " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num < min) { min = num; }
	}
	cout << "最小整数为： " << min << endl;
	return 0;
}