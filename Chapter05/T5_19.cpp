/*
*FileName:   T5_19.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   求PI的值。
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double PI=0,a;
	for (int i = 1; i <= 1000; i++)
	{
		cout << i << "\t";
		a = pow(-1, i + 1)*4.0 / (2*i-1);
		PI += a;
		cout << PI << endl;
	}
	return 0;
}