/*
*FileName:   T5_23.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:	 打印*号菱形。
*/
#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		if (i <= 5)
		{
			for (int j = 1; j <= 9; j++)
			{
				if (i + j < 6) { cout << " "; }
				else if (i + j == 6)
				{
					for (int k = 1; k <= 2 * i - 1; k++)
					{
						cout << "*";
						j++;
					}
				}
				else { cout << " "; }
			}
		}
		else
		{
			for (int j = 1; j <= 9; j++)
			{
				if (i - j > 4) { cout << " "; }
				else if (i - j == 4)
				{
					for (int k = 1; k <= (9 - i) * 2 + 1; k++)
					{
						cout << "*";
						j++;
					}
				}
				else { cout << " "; }
			}
		}
	cout << endl;
	}
	return 0;
}
