/*
*FileName:   T6_36.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   递归的求幂计算。
*/
#include<iostream>
using namespace std;
double power(double b, int e)
{
	if (1 == e) { return b; }
	b = b * power(b, e - 1);
}
int main()
{
	cout << "请输入实数a，正整数b，程序将求a的b次幂： " << endl;
	double a;
	int b;
	cin >> a >> b;
	cout << a<<"的"<<b<<"次幂： " << power(a, b) << endl;
	return 0;
}