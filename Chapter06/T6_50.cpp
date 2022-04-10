/*
*FileName:   T6_50.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 29th,2022
*College:    School of Computer Science and Information Engineering
*Function:   值传递与引用传递测试。
*/
#include<iostream>
using namespace std;

//值传递函数
double tripleByValue(double n)
{
	n = 3 * n;
	return n;
}

//引用传递函数
double tripleByReference(double& n)
{
	n = 3 * n;
	return n;
}
int main()
{
	double count1 = 1.1;
	cout << "值传递前： " << "count1=" << count1 << endl;
	cout << "值传递返回值:  " << tripleByValue(count1) << endl;
	cout << "值传递后： " << "count1=" << count1 << endl;
	cout << endl;
	double count2 = 1.1;
	cout << "引用传递前： " << "count2=" << count2 << endl;
	cout << "引用传递返回值： " << tripleByReference(count2) << endl;
	cout << "引用传递后： " << "count2=" << count2 << endl;
	return 0;
}