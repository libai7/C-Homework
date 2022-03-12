/*
*FileName:   T4_30.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   输入圆的半径，计算并打印直径、周长、和面积。
*/
#include<iostream>
using namespace std;
int main()
{
	double r,PI=3.14159;
	cout << "请输入圆的半径： " << endl;
	cin >> r;
	cout << "直径:  " << 2 * r << "\n周长： " << 2 * PI * r << "\n面积： " << PI * r * r << endl;
	return 0;
}