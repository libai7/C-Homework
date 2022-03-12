/*
*FileName:   T4_29.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   连续打印2的幂，2，4，8，16......(while循环不能终止)。
*/
#include<iostream>
using namespace std;
int main()
{
	unsigned long long num = 2;
	while (true)
	{
		cout << num << "\n";
		num *= 2;
	}
	return 0;
}