/*
*FileName:   T2_30.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��ʾ�û�����������ָ��BMI��
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "BMI<18.2:ƫ��     18.5<=BMI<=24.9:����       25<=BMI<=29.9:ƫ��         BMI>30:����" << endl;
	cout << "�������������أ�ǧ�ˣ�����ߣ��ף���������ʾ����BMIֵ��" << endl;
	double w, h,bmi;
	cin >> w >>h;
	bmi = w / h / h;
	cout <<"����BMI�� "<< bmi << endl;
	return 0;
}