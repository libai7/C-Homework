/*
*FileName:   T6_19.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ���������ε�б�߳���
*/ 
#include<iostream>
#include<cmath>
using namespace std;
double hypotenuse(double a, double b)
{
	return sqrt(a * a + b * b);
}
int main()
{
	cout << "������������ʵ����Ϊ�����ε�����ֱ�Ǳߣ�����������Ӧб��ֵ�� " << endl;
	double x, y;
	cin >> x >> y;
	cout << "б�ߣ� " << hypotenuse(x, y) << endl;
	return 0;
}