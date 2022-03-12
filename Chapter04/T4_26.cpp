/*
*FileName:   T4_26.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   读入一个5位数，判断其是否为回文数。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个五位整数：　" << endl;
	int num,num1=0,num2;
	cin >> num;
	num2 = num;
	while (num)
	{
		num1 = num1 * 10 + num % 10;
		num /= 10;
	}
	if (num1 == num2) { cout << num2 << "是回文数" << endl; }
	else { cout << num2 << "不是回文数" << endl; }
	return 0;
}