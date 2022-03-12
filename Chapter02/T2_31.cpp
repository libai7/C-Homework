/*
*FileName:   T2_31.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   向用户显示每日开车的费用。
*/
#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d, e;
	cout << "请输入今天开的英里数： ";
	cin >> a;
	cout << "请输入每加仑汽油的价格： ";
	cin >> b;
	cout << "请输入每加仑汽油可以开的平均英里数： ";
	cin >> c;
	cout << "请输入今日的停车费： ";
	cin >> d;
	cout << "请输入今日的通行费： ";
	cin >> e;
	cout << "今日用车费用为： " << a / c * b + c + d << endl;
	return 0;
}