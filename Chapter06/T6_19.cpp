/*
*FileName:   T6_19.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   返回三角形的斜边长。
*/ 
#include<iostream>
#include<cmath>
using namespace std;
double hypotenuse(double a, double b)
{
	return sqrt(a * a + b * b);
}
int main()
{
	cout << "请输入两个正实数做为三角形的两条直角边，程序将输出其对应斜边值： " << endl;
	double x, y;
	cin >> x >> y;
	cout << "斜边： " << hypotenuse(x, y) << endl;
	return 0;
}