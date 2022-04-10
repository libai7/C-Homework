/*
*FileName:   T6_32.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算成绩绩点。
*/
#include<iostream>
using namespace std;
int qualityPoints(double x)
{
	if (x >= 90) { return 4; }
	else if (x >= 80) { return 3; }
	else if (x >= 70) { return 2; }
	else if (x >= 60) { return 1; }
	else { return 0; }
}
int main()
{
	cout << "请输入成绩(0-100之内)： " ;
	double x=0; cin >> x;
	cout << "绩点： " << qualityPoints(x) << endl;
	return 0;
}