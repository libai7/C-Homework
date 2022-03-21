/*
*FileName:   T5_24.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   打印用户输入1~19奇数的对应菱形。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入数字1~19之间的一个奇数： ";
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		if (i <= num/2+1)
		{
			for (int j = 1; j <= num; j++)
			{
				if (i + j <( num/2+2)) { cout << " "; }
				else if (i + j == (num/2+2))
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
			for (int j = 1; j <= num; j++)
			{
				if (i - j > (num/2)) { cout << " "; }
				else if (i - j == (num/2))
				{
					for (int k = 1; k <= (num - i) * 2 + 1; k++)
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