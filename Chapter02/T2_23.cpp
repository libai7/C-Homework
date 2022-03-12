/*
*FileName:   T2_22.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   输入5个整数，输出最大值和最小值。
*/
#include<iostream>
using namespace std;
int main()
{
	int min, max,n,n1;
	cout << "请输入5个整数： " << endl;
	cin >> n;
	min = n;
	max = n;
	for (int i = 0; i < 4; i++)
	{
		cin >> n1;
		if (n1 < min)
		{
			min = n1;
		}
		if (n1 > max)
		{
			max = n1;
		}
	}
	cout << "最大数： " << max << endl;
	cout << "最小数： " << min << endl;
	return 0;
}