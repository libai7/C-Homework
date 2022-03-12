/*
*FileName:   T4_15.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 8th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算并显示员工的收入。200+销售毛利的9%。
*/
#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		cout << "Enter sales in dollars (-1 to end): ";
		double n;
		cin >> n;
		if (n == -1) { break; }
		cout << "Salary is: $" << 200 + n * 0.09 << endl;
	}
	return 0;
}