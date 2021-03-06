/*
*FileName:   T6_52.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       2022.4.8
*College:    School of Computer Science and Information Engineering
*Function:   找两个参数中的较大值。
*/
#include<iostream>
using namespace std;
double maximum(double x, double y)
{
	return x > y ? x : y;
}
int main()
{
	while (1)
	{
		cout << "输入两个参数，程序将寻找其较大值：" << endl;
		cout << "1.整数   2.字符   3.浮点数    0.退出程序    请您选择编号： " << endl;
		int o;
		cin >> o;
		if (0 == o) { break; }
		switch (o)
		{
		case 1:
		{
			cout << "请输入两个整数： " << endl;
			int n1, n2;
			cin >> n1 >> n2;
			(double)n1, (double)n2;
			cout << "较大数： " << (int)maximum(n1, n2) << endl;
		}
		break;
		case 2:
		{
			cout << "请输入两个字符： " << endl;
			char x, y;
			cin >> x >> y;
			(double)x, (double)y;
			cout << "较大数： " << (char)maximum(x, y) << endl;
		}
		break;
		case 3:
		{
			cout << "请输入两个浮点数： " << endl;
			double x, y;
			cin >> x >> y;
			cout << "较大数:  " << maximum(x, y) << endl;
		}
		break;
		default:
			cout << "输入有误，请重新输入！" << endl;
			break;
		}
	}
	return 0;
}