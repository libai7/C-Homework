/*
*FileName:   T4_25.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   打印输入数字的对应边长的空心正方形。边长1~20.
*/
#include<iostream>
using namespace std;
int main()
{
	int x;//x为正方体边长。
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		if (i == 1 || i == x)
		{
			for (int j = 1; j <= x; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else
		{
			for (int j = 1; j <= x; j++)
			{
				if (j == 1 || j == x) { cout << "*"; }
				else { cout << " "; }

			}
			cout << endl;
		}
	}
	return 0;
}