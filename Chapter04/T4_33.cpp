/*
*FileName:   T4_33.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �ж��������������ʵ�����ж����Ƿ���Թ���ֱ�������ε������ߡ�
*/
#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "��������������ʵ���������ж����Ƿ���Թ���ֱ�������ε������ߡ�" << endl;
	cin >> a >> b >> c;
	if ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b)) { cout << a << " " << b << " " << c << "���Թ���ֱ�������������ߡ�" << endl; }
	else { cout << a << " " << b << " " << c << "�����Թ���ֱ�������������ߡ�" << endl; }
	return 0;
}