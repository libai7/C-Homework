/*
*FileName:   T6_03.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ������ѧ�⺯����
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	cout << fixed << setprecision(6);
	cout << "sqrt(9.0)= " << sqrt(9.0) << endl;//ƽ��������
	cout << "exp(2.0)= " << exp(1.0) << endl;//e`n�η�
	cout << "log(2.718282)= " << log(2.718282) << endl;//ln(x)
	cout << "log10(100.0)= " << log10(100.0) << endl;//log10(x)
	cout << "fabs(-9.99)= " << fabs(-9.99) << endl;//����ֵ
	cout << "ceil(9.1)= " << ceil(9.1) << endl;//����ȡ��
	cout << "floor(9.1)= " << floor(9.1) << endl;//����ȡ��
	cout << "pow(2,3)= " << pow(2, 3) << endl;//2~3�η�
	cout << "fmod(2.6,1.2)= " << fmod(2.6, 1.2) << endl;//����������
	cout << "sin(0)= " << sin(0) << endl;//����ֵ
	cout << "cos(0)= " << cos(0) << endl;//����ֵ
	cout << "tan(0)= " << tan(0) << endl;//����ֵ
	return 0;
}