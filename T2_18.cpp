/*
*FileName:   T2_18.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �Ƚ����������Ĵ�С��
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "��������������" << endl;
	int a, b;
	cin >> a >> b;
	if (a > b)cout << a << " is large.";
	else if (a < b)cout << b << " is large.";
	else cout << "These numbers are equal.";
	return 0;
}