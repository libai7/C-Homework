/*
*FileName:   T4_20.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 9th,2022
*College:    School of Computer Science and Information Engineering
*Function:   确认用户输入的有效性，如果输入的值不是1或2，那么程序就一直循环直到用户输入一个正确的值为止。
*/
#include<iostream>
using namespace std;
int main()
{
	unsigned int passes = 0;//number of passes
	unsigned int failures = 0;//number of failures
	unsigned int studentCounter = 1;//student couner
	while (studentCounter <= 10)
	{
		cout << "Enter result(1=pass,2=fail): ";
		int result = 0;
		cin >> result;
		if (result == 1) { passes++; studentCounter++;}
		else if (result == 2) { failures++; studentCounter++; }
		else { cout << "输入有误，请重新输入。" << endl; }
	}
	cout << "Passed" << passes << "\nFailed" << failures << endl;

	return 0;
}