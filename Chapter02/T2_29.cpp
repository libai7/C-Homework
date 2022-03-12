/*
*FileName:   T2_29.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   输出0~10的平方和立方表。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "integer\t" << "squre\t" << "cube\t" << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << i << "\t" << i * i << "\t" <<i*i*i<<"\t" << endl;
	}
	return 0;
}