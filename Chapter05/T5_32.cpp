/*
*FileName:   T5_.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算facebook用户何时达到25亿。2012年10月10亿
*/
#include<iostream>
using namespace std;
int main()
{
	int j;
	double n ;
	for (double i = 0.02; i <= 0.05; i += 0.01)
	{
		n = 10.0;
		cout << "月增长率为" << i << "时： ";
		for ( j = 1; n < 25; j++)
		{
			n = n * (1.0 + i);
		}
		cout << j<< "个月后可到达25亿。" << endl;
	}
	return 0;
}