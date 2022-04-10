/*
*FileName:   T6_03.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   调用数学库函数。
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	cout << fixed << setprecision(6);
	cout << "sqrt(9.0)= " << sqrt(9.0) << endl;//平方根函数
	cout << "exp(2.0)= " << exp(1.0) << endl;//e`n次方
	cout << "log(2.718282)= " << log(2.718282) << endl;//ln(x)
	cout << "log10(100.0)= " << log10(100.0) << endl;//log10(x)
	cout << "fabs(-9.99)= " << fabs(-9.99) << endl;//绝对值
	cout << "ceil(9.1)= " << ceil(9.1) << endl;//向上取整
	cout << "floor(9.1)= " << floor(9.1) << endl;//向下取整
	cout << "pow(2,3)= " << pow(2, 3) << endl;//2~3次方
	cout << "fmod(2.6,1.2)= " << fmod(2.6, 1.2) << endl;//浮点数余数
	cout << "sin(0)= " << sin(0) << endl;//正弦值
	cout << "cos(0)= " << cos(0) << endl;//余弦值
	cout << "tan(0)= " << tan(0) << endl;//正切值
	return 0;
}