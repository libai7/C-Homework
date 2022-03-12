/*
*FileName:   T2_20.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   跟据输入圆的半径，求出圆的直径，周长，和面积。
*/
#include<iostream>
using namespace std;
int main()
{
	int r; double p = 3.14159;
	cout << "请输入一个整数做为圆的半径： " << endl;
	cin >> r;
	cout << "直径： " << 2 * r << endl;
	cout << "周长： " << 2 * p * r << endl;
	cout << "面积： " << p * r * r << endl;
	return 0;
}