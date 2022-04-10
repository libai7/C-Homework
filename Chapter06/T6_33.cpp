/*
*FileName:   T6_33.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   模拟抛硬币，看正反两面出现的概率。
*/
#include<iostream>
#include<cstdlib>
using namespace std;
int flip()
{
	return rand()% 2;
}
int main()
{
	for (int i = 0; i < 100; i++)
	{
		if (flip()) { cout << "Head" << endl; }
		else { cout << "Tail" << endl; }
	}
	return 0;
}