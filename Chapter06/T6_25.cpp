/*
*FileName:   T6_25.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 26th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算秒数。
*/
#include<iostream>
#include<cmath>
using namespace std;

int test(int a, int b, int c)
{
	return a * 3600 + b * 60 + c;
}
int main()
{
	cout << "请依次输入三个数表示第一时刻   时： 分： 秒： " << endl;
	int a, b, c;
	cin >> a >> b >> c;
	cout << "请依次输入三个数表示第二时刻   时： 分： 秒： " << endl;
	int x, y, z;
	cin >> x >> y >> z;
	cout << "相差秒数： " << fabs(test(a, b, c) - test(x, y, z)) << endl;
	return 0;
}