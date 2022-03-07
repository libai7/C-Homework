/*
*FileName:   T2_18.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   比较两个整数的大小。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入两个整数" << endl;
	int a, b;
	cin >> a >> b;
	if (a > b)cout << a << " is large.";
	else if (a < b)cout << b << " is large.";
	else cout << "These numbers are equal.";
	return 0;
}