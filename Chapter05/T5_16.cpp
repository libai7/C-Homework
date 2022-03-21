/*
*FileName:   T5_16.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 20th,2022
*College:    School of Computer Science and Information Engineering
*Function:   复利计算。
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int amount, principal = 100000;
	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	for (int i = 1; i <= 10; i++)
	{
		amount = principal *( (double)pow(1.05, i));
		cout << setw(4)<< setfill(' ') << i << setw(21)<< setfill(' ') << amount / 100 << ".";
		cout<< setw(2) << setfill('0') << amount % 100 << endl;
	}
	return 0;
}