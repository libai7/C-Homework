/*
*FileName:   T5_14.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算总销售额。
*/
#include<iostream>
using namespace std;
int main()
{
	int number,num,sign=0;//产品编号,销售量
	double unit_price,sum=0.0;//产品单价
	while (1)
	{
		cout << "请输入产品编号： ";
		cin >> number;
		if (number == 0) { break; }
		switch (number)
		{
		case 1:unit_price = 2.98; break;
		case 2:unit_price = 4.50; break;
		case 3:unit_price = 9.98; break;
		case 4:unit_price = 4.49; break;
		case 5:unit_price = 6.87; break;
		default:cout << "产品编号输入有误，请重新输入！" << endl; sign = 1; break;
		}
		if (sign == 1)continue;
		cout << "请输入此产品销售量： ";
		cin >> num;
		sum = sum + num * unit_price;
		cout << "请继续输入下一个产品（输入0退出程序）。" << endl;
	}
	cout << "总销售额为： $" << sum << endl;
	return 0;
}