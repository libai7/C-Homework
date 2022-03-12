/*
*FileName:   T4_17.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 8th,2022
*College:    School of Computer Science and Information Engineering
*Function:   打印用户输入是个数中最大的数。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "Enter 10 numbers: " << endl;
	double counter = 1, number, largest;
	cin >> number;
	largest = number;
	while (counter < 10)
	{
		cin >> number;
		if (number > largest) { largest = number; }
		counter++;
	}
	cout << "Largest number: " << largest;
	return 0;
}