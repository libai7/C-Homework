/*
*FileName:   T2_16.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   用户输入两个实数，输出两数之和，积，差，商。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入任意两个数" << endl;
	double num1, num2;
	cin >> num1 >> num2;
	cout << "和：" << num1 + num2 << endl;
	cout << "积：" << num1 * num2 << endl;
	cout << "差：" << num1 - num2 << endl;
	cout << "商：" << num1 / num2 << endl;


	return 0;
}