/*
*FileName:   T4_27.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   输入一个二进制整数，输出其对应的十进制整数。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个二进制整数，程序将输出其对应的十进制整数。" << endl;
	unsigned long long num,x=0;
	while (1)
	{
		cin >> num;
		if (num % 10 != 0 && num % 10 != 1) { cout << "输入二进制数字有误，请重新输入" << endl; continue; }
		else { break; }
	}
	while (num)
	{
		x = x * 2 + num % 10;
		num /= 10;
	}
	cout << "其对应十进制数字为：" << x << endl;
	return 0;
}