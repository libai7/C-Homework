/*
*FileName:   T6_36.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �ݹ�����ݼ��㡣
*/
#include<iostream>
using namespace std;
double power(double b, int e)
{
	if (1 == e) { return b; }
	b = b * power(b, e - 1);
}
int main()
{
	cout << "������ʵ��a��������b��������a��b���ݣ� " << endl;
	double a;
	int b;
	cin >> a >> b;
	cout << a<<"��"<<b<<"���ݣ� " << power(a, b) << endl;
	return 0;
}