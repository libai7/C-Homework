/*
*FileName:   T5_29.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算复利396年。
*/
#include<iostream>
using namespace std;
int main()
{
	double m = 24.0;
	for (double i = 0.05; i <= 0.10; i += 0.01)
	{
		cout << "利率：" << i << endl;
		for (int y = 1; y <= 396; y++)
		{
			m *= (1.0 + i);
		}
		cout << "到今年为止存为： " << m << endl;
	}
	return 0;
}