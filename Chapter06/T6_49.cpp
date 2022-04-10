/*
*FileName:   T6_49.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 29th,2022
*College:    School of Computer Science and Information Engineering
*Function:   圆面积计算。
*/
#include<iostream>
using namespace std;
double circleAire(double r)
{
	return 3.1415926 * r * r;
}
int main()
{
	cout << "请输入圆的面积，程序将计算其面积： " << endl;
	double r;
	cin >> r;
	cout << "圆面积： " << circleAire(r) << endl;
	return 0;
}