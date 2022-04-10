/*
*FileName:   T6_38.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   汉诺塔问题。
*/
#include<iostream>
using namespace std;
//int f = 0;
void Move(int n, char A, char B, char C)//把A移动到C，B做为辅助
{
	if (1 == n) { cout << A << "->" << C << endl; } //f++; }//圆盘只有一个的时候，只需将A移动到C
	else
	{
		Move(n - 1,A,C,B);//把n-1个圆盘从A移动到B，C做为辅助
		cout << A << "->" << C << endl;// f++;//把A最下面的圆盘移动到C
		Move(n - 1, B,A,C);//把n-1个圆盘从B上移动到C，A做为辅助
	}
}
int main()
{
	int n;
	cout << "请输入汉诺塔的圆盘数： " << endl;
	cin >> n;
	char a='A', b='B', c='C';
	Move(n, a, b, c);
	//cout << f << endl;
	return 0;
}