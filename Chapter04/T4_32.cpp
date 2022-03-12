/*
*FileName:   T4_32.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   判断输入的三个非零实数，判断其是否可以构成三角形的三个边。
*/
#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三个非零实数，程序将判断其是否可以构成三角形的三条边。" << endl;
	cin >> a >> b >> c;
	if(a<=0||b<=0||c<=0) { cout << a << " " << b << " " << c << "不可以构成三角形三条边。" << endl; }
	if ((a + b > c) && (b + c > a) && (a + c > b)) { cout << a<<" " << b << " " << c << "可以构成三角形三条边。" << endl; }
	else{cout<< a << " " << b << " " << c << "不可以构成三角形三条边。" << endl;}
	return 0;
}