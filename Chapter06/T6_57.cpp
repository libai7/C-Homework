/*
*FileName:   T6_57.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       2022.4.10
*College:    School of Computer Science and Information Engineering
*Function:   计算机辅助教学。
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int test()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " times " << n2 << "?"<<endl;
	return n1 * n2;
}
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int n,x;
	while (1)
	{
		x = test();
		while (1)
		{
			cin >> n;
			if (x == n)
			{
				cout << "Very good!" << endl;
				break;
			}
			else cout << "No.Please try again." << endl;
		}
	}
	return 0;
}