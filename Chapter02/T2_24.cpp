/*
*FileName:   T2_24.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   判断一个整数是奇数还是偶数。
* 
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个整数： " << endl;
	int num;
	cin >> num;
	if (num % 2 == 0)
	{
		cout << num << "是偶数" << endl;
	}
	else
	{ cout << num << "是奇数" << endl; }
	return 0;
}