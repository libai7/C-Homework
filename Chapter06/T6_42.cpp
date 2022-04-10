/*
*FileName:   T6_42.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 28th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算两点之间的距离。
*/
#include<iostream>
#include<cmath>
using namespace std;
double distance(double a, double b, double c, double d)
{
	return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}
int main()
{
	double a, b, c, d;
	cout << "请输入第一个点的坐标： " << endl;
	cin >> a >> b;
	cout << "请输入第二个点的坐标： " << endl;
	cin >> c >> d;
	cout << "距离： " << distance(a, b, c, d) << endl;
	return 0;
}