/*
*FileName:   T4_33.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   判断输入的三个非零实数，判断其是否可以构成直角三角形的三个边。
*/
#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三个非零实数，程序将判断其是否可以构成直角三角形的三条边。" << endl;
	cin >> a >> b >> c;
	if ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b)) { cout << a << " " << b << " " << c << "可以构成直角三角形三条边。" << endl; }
	else { cout << a << " " << b << " " << c << "不可以构成直角三角形三条边。" << endl; }
	return 0;
}