/*
*FileName:   T6_50.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 29th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ֵ���������ô��ݲ��ԡ�
*/
#include<iostream>
using namespace std;

//ֵ���ݺ���
double tripleByValue(double n)
{
	n = 3 * n;
	return n;
}

//���ô��ݺ���
double tripleByReference(double& n)
{
	n = 3 * n;
	return n;
}
int main()
{
	double count1 = 1.1;
	cout << "ֵ����ǰ�� " << "count1=" << count1 << endl;
	cout << "ֵ���ݷ���ֵ:  " << tripleByValue(count1) << endl;
	cout << "ֵ���ݺ� " << "count1=" << count1 << endl;
	cout << endl;
	double count2 = 1.1;
	cout << "���ô���ǰ�� " << "count2=" << count2 << endl;
	cout << "���ô��ݷ���ֵ�� " << tripleByReference(count2) << endl;
	cout << "���ô��ݺ� " << "count2=" << count2 << endl;
	return 0;
}