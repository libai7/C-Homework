/*
*FileName:   T6_12.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算车费。
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void ParkingFee(int p_num, double h, double &c)//计算打印车费的函数
{
	if (ceil(h) <= 3) { c = 2.0; }
	else
	{
		c = (ceil(h) - 3) * 0.5 + 2.0;
		if (c > 10) { c = 10.0; }
	}
	cout << p_num << "\t" <<fixed<<setprecision(1)<< h << "\t"<<setprecision(2) << c << endl;
}
int main()
{
	cout << "请依次三个客户的停车时长，程序将计算出停车费用。" << endl;
	double  h1,h2,h3, c=0.0;
	int n;
	cin >> h1 >> h2 >> h3;
	double num=0.0;
	double arr[] = { h1,h2,h3 };
	cout << "Car\t" << "Hours\t" << "Chrge" << endl;
	for (int i = 0; i < 3; i++)
	{
		n = i + 1;
		ParkingFee(n, arr[i], c);
		num += c;
	}
	cout << "Total\t" <<fixed<<setprecision(1)<< h1 + h2 + h3 << "\t"<<setprecision(2) << num;
	return 0;
}