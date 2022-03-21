/*
*FileName:   T5_12.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   打印如下所示图形。
*/
#include<iostream>
using namespace std;
int main()
{
	//图形a
	for(int i=0;i<10;i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "\n\n\n";
	//图形b
	for (int i = 10; i>0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "\n\n\n";
	//图形c
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j <10; j++)
		{
			if (j < 9- i) { cout << " "; }
			else { cout << "*"; }
		}
		cout << endl;
	}
	cout << "\n\n\n";
	//图形d
	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j >= 0; j--)
		{
			if (i >= j) { cout << "*"; }
			else { cout << " "; }
		}
		cout << endl;
	}
	return 0;
}