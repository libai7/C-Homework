/*
*FileName:   T5_15.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算一组成绩的平均成绩。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一组成绩（A B C D F），输入0终止程序： ";
	char a;
	double sum = 0,  i = 0; 
	while (cin>>a)
	{
		int n = -1;
		if ((int)a == 65){n = 4;}
		else if ((int)a == 66) { n = 3; }
		else if ((int)a == 67) { n = 2; }
		else if ((int)a == 68) { n = 1; }
		else if ((int)a == 70) { n = 0; }
		else if (a == '0') { break; }
		else cout << "输入有误！请重新输入： " << endl;
		if (n == 4 || n == 3 || n == 2 || n == 1 || n == 0)
		{
			sum += n, i++;
		}
	}
	cout << "平均成绩： " << sum / i << endl;
	return 0;
}