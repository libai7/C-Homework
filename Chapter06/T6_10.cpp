/*
*FileName:   T6_10.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   用函数实现计算用户输入球的半径的体积。
*/
#include<iostream>
const double PI = 3.14159;//定义PI值
using namespace std;
double sphereVolume(double r)//定义计算圆球体积的函数
{
	return 4.0 / 3.0 * PI * r * r * r;
}
int main()
{
	double r;
	cout << "请输入圆球的半径： ";
	cin >> r;
	cout << "体积： " << sphereVolume(r) << endl;
	return 0;
}