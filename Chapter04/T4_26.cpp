/*
*FileName:   T4_26.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ����һ��5λ�����ж����Ƿ�Ϊ��������
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������һ����λ��������" << endl;
	int num,num1=0,num2;
	cin >> num;
	num2 = num;
	while (num)
	{
		num1 = num1 * 10 + num % 10;
		num /= 10;
	}
	if (num1 == num2) { cout << num2 << "�ǻ�����" << endl; }
	else { cout << num2 << "���ǻ�����" << endl; }
	return 0;
}