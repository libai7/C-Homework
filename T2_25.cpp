/*
*FileName:   T2_25.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �жϵ�һ�����Ƿ��ǵڶ������ı�����
*/
#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cout << "���������������� " << endl;
	cin >> n1 >> n2;
	if (n1 % n2 == 0)cout << n1 << "��" << n2 << "�ı���" << endl;
	else cout<< n1 << "����" << n2 << "�ı���" << endl;
	return 0;
}