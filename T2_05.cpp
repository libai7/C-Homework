/*
*FileName:   T2_05.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ������ʾ���������ĳɼ���
*/
#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int result = 0;//�����ʼֵΪ0��
	cout << "Enter three integers: " << endl;//��ʾ�û���������������
	cin >> x >> y >> z;//��ȡ���������������
	result = x * y * z;
	cout << "The product is " << result << endl;//��ӡ�����
	return 0;
}