/*
*FileName:   T2_17.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   一行依次输入1~4。
*/
#include<iostream>
using namespace std;
int main()
{
	//用一个流插入运算符在一行依次输出1~4。
	cout << "1 2 3 4" << endl;;
	//1条语句，4个流插入符号依次输出1~4。
	cout << "1 " << "2 " << "3 " << "4 " << endl;
	//使用四条语句输出1~4。
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4 ";
	return 0;
}