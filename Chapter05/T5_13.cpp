/*
*FileName:   T5_13.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   跟据用户输入数字打印*。
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "请依次输入5个数字(1~30之间的整数)：　" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			cout << "*";
		}
		cout <<endl;
	}
	return 0;
}