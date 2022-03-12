/*
*FileName:   T4_18.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 8th,2022
*College:    School of Computer Science and Information Engineering
*Function:   打印如下表格。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "N\t" << "10*N\t" << "100*N\t" << "1000*N\t" << endl;
	int n = 1;
	while (n < 6)
	{
		cout << n << "\t" << 10 * n << "\t" << 100 * n << "\t" << 1000 * n << "\t\n";
		n++;
	}
	return 0;
}