/*
*FileName:   T6_10.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 23th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �ú���ʵ�ּ����û�������İ뾶�������
*/
#include<iostream>
const double PI = 3.14159;//����PIֵ
using namespace std;
double sphereVolume(double r)//�������Բ������ĺ���
{
	return 4.0 / 3.0 * PI * r * r * r;
}
int main()
{
	double r;
	cout << "������Բ��İ뾶�� ";
	cin >> r;
	cout << "����� " << sphereVolume(r) << endl;
	return 0;
}