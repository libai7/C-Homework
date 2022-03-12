/*
*FileName:   T4_19.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 8th,2022
*College:    School of Computer Science and Information Engineering
*Function:   打印用户输入十个数中最大的两位数。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入十个数字: " << endl;
	double n, i=0, l1, l2;
	cin >> n; l1 = n, l2 = n;
	while (i < 9)
	{
		cin >> n;
		if (n > l2 && n < l1) { l2 = n; }
		if (n > l1) { l2 = l1; l1 = n; }
		
		i++;
	}
	cout << "最大的两个数是： "<<l1 << "  " <<l2<< endl;
	return 0;
}