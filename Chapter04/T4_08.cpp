/*
*FileName:   T4_08.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算x的y次幂。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入正整数x，y，程序将计算x的y次幂:　" << endl;
	unsigned int x, y,power=1,i=1;
	cin >> x >> y;
	while (i <= y)
	{
		power *= x;
		i++;
	}
	cout << "x的y次幂:　" << power << endl;
	return 0;
}