/*
*FileName:   T6_61.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       2022.4.10
*College:    School of Computer Science and Information Engineering
*Function:   计算机辅助教学:问题分类。
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int test1()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " times " << n2 << "?" << endl;
	return n1 * n2;
}
int test2()
{
	unsigned int n1 = rand() % 100;
	unsigned int n2 = rand() % 100;
	cout << "how much is " << n1 << " times " << n2 << "?" << endl;
	return n1 * n2;
}
int test3()
{
	unsigned int n1 = rand() % 1000;
	unsigned int n2 = rand() % 1000;
	cout << "how much is " << n1 << " times " << n2 << "?" << endl;
	return n1 * n2;
}
int test11()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " divide " << n2 << "?" << endl;
	return n1 / n2;
}
int test12()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " divide " << n2 << "?" << endl;
	return n1 / n2;
}
int test13()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " divide " << n2 << "?" << endl;
	return n1 / n2;
}
int test21()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " add " << n2 << "?" << endl;
	return n1 + n2;
}
int test22()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " add " << n2 << "?" << endl;
	return n1 + n2;
}
int test23()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " add " << n2 << "?" << endl;
	return n1 + n2;
}
int test31()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " subtract " << n2 << "?" << endl;
	return n1 - n2;
}
int test32()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " subtract " << n2 << "?" << endl;
	return n1 - n2;
}
int test33()
{
	unsigned int n1 = rand() % 10;
	unsigned int n2 = rand() % 10;
	cout << "how much is " << n1 << " subtract " << n2 << "?" << endl;
	return n1 - n2;
}
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int n, x, i = 0, j = 0,o;
	cout << "请选择运算： 1.加法 2.减法 3.乘法 4.除法(余数自动舍去) 5.随机" << endl;
	cin >> o;
	cout << "请输入难度等级（1，2，3）： " << endl;
	int op;
	cin >> op;
	while (1)
	{
		i = 0;
		while (i < 10)
		{
			switch (o)
			{
			case 1:
			{switch (op)
			{
			case 1:
				x = test21();
				break;
			case 2:
				x = test22();
				break;
			default:
				x = test23();
			}}break;
			case 2:
			{switch (op)
			{
			case 1:
				x = test31();
				break;
			case 2:
				x = test32();
				break;
			default:
				x = test33();
			}}break;
			case 3:
			{switch (op)
			{
			case 1:
				x = test1();
				break;
			case 2:
				x = test2();
				break;
			default:
				x = test3();
			}}break;
			default:
			{switch (op)
			{
			case 1:
				x = test11();
				break;
			case 2:
				x = test12();
				break;
			default:
				x = test13();
			}}break;
			}
			while (i < 10)
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