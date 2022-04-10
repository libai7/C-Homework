/*
*FileName:   T6_59.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       2022.4.10
*College:    School of Computer Science and Information Engineering
*Function:   计算机辅助教学:监控学生表现。
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int test()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " times " << n2 << "?" << endl;
	return n1 * n2;
}
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int n, x,i=0,j=0;
	while (1)
	{
		i = 0;
		while (i < 10)
		{
			x = test();
			while (i<10)
			{
				unsigned int n3 = 1 + rand() % 4;
				cin >> n;
				if (x == n)
				{
					switch (n3)
					{
					case 1:
						cout << "Very good!" << endl;
						break;
					case 2:
						cout << "Excellent!" << endl;
						break;
					case 3:
						cout << "Nice work!" << endl;
						break;
					default:
						cout << "Keep up the good woek!" << endl;
					}
					j++;
					i++;
					break;
				}
				else
				{
					switch (n3)
					{
					case 1:
						cout << "No. Please try again." << endl;
						break;
					case 2:
						cout << "Wrong. Try once more." << endl;
						break;
					case 3:
						cout << "Don't give up!" << endl;
						break;
					default:
						cout << "No. Keep trying." << endl;
					}
				}
				i++;
			}
		}
		if (j > 7)
		{
			cout << "Congratulations, you are ready to go to the next level!" << endl;
		}
		else
		{
			cout << "Please ask your teacher for extra help." << endl;
		}
		system("pause");
		system("cls");
	}
	return 0;
}