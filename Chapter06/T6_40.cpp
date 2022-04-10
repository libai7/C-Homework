/*
*FileName:   T6_40.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   递归的可视化。
*/
#include<iostream>
using namespace std;
 
unsigned long factorial(unsigned number)
{
	if(number<=1)
	{
		cout << "1";
		return 1;
	}
	else
	{
		cout << number<<"*";
		return number * factorial(number - 1);
	}
}
int main()
{
	for (unsigned int counter = 0; counter <= 10; ++counter)
	{
		cout<<"=" << counter << "!=" << factorial(counter) << endl;
	}
	return 0;
}