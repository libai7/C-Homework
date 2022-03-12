/*
*FileName:   T4_34.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   1.求输入非负整数的阶乘。2.估算e。3.估算e~x。
*/
#include<iostream>
using namespace std;
int main()
{
	//1.求非负整数的阶乘
	unsigned long long n, x=1,n1;
	cout << "请输入一个正整数，程序将计算这个数的阶乘" << endl;
	cin >> n;
	n1 = n;
	while (n > 0)
	{
		x = x * n;
		n--;
	}
	cout << n1 << "的阶乘为： " << x << endl;
	//2.估算e的值。
	cout << "请输入想要确定e的精度： " << endl;
	int accuracy, 
		i = 1, i1; double e = 1.0,x1;
	cin >> accuracy;
	while (i <= accuracy)
	{
		i1 = i;
		x1 = 1.0;
		while (i1 > 0)
		{
			x1 = x1 * i1;
			i1--;
		}
		e=e+1/x1;
		i++;
	}
	cout << "e的数值为： " << e << endl;
	//估算e~x的值
	cout << "输入一个数num，程序将计算e的num次方" << endl;
	double e_x = 1.0; int num, i_ = 1;
	cin >> num;
	while (i_ <= num)
	{
		x1 = 1.0;
		int i_1 = i_;
		while (i_1 > 0)
		{
			x1 = x1 * i_1;//对应阶乘
			i_1--;
		}
		int j_ = 1,num_=1;
		while (j_ <= i_)
		{
			num_ *= num;
			j_++;
		}
		e_x = e_x + num_/ x1;
		i_++;
	}
	cout << "e~"<<num<<"=" << e_x << endl;
	return 0;
}