/*
*FileName:   T6_14.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   数的特定舍入。
*/
#include<iostream>
#include<iomanip>
using namespace std;

//精确到整数函数
void roundToInteger(double n)
{
	cout << "整数： " << floor(n + 0.5) << endl;
}

//精确到十分位函数
void roundToTenths(double n)
{
	cout << "十分位： " << floor(n * 10 + 0.5) / 10 << endl;
}

//精确到百分位函数
void roundToHundresths(double n)
{
	cout << "百分位： " << floor(n * 100 + 0.5) / 100 << endl;
}

//精确到千分位函数
void roundToThousandths(double n)
{
	cout << "千分位： " << floor(n * 1000 + 0.5) / 1000 << endl;
}

int main()
{
	cout << "请输入一个数，程序将对其进行精确(输入0时终止)： " << endl;
	double n;
	while (1)
	{
		cin >> n;
		if (!n)break;
		cout << "原数： " << n << endl;
		roundToInteger(n);
		roundToTenths(n);
		roundToHundresths(n);
		roundToThousandths(n);
	}
	return 0;
}