/*
*FileName:   T6_31.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �����Լ����
*/
#include<iostream>
#include<cmath>
using namespace std;
int gcd(int n1, int n2)
{
	if (0 == n1 || 0 == n2) { return 0 == n1 ? n2:n1; }
	n1 = fabs(n1), n2 = fabs(n2);//ȡ����ֵ
	int temp = n1;
	n1 = (n1 <= n2 ? n1 : n2);
	n2 = (temp > n2 ? temp : n2);
	for (int i = n1; i > 0; i--)
	{
		if (n1 % i == 0 && n2 % i == 0) { return i; }
	}
}
int main()
{
	int n1, n2;
	cout << "��������������������������������� " << endl;
	cin >> n1 >> n2;
	cout << "��������� " << gcd(n1, n2) << endl;
	return 0;
}