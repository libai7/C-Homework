/*
*FileName:   T6_37.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   쳲��������зǵݹ����ǰn��Fibonacci�������涨��0����0����һ����1��
*/
#include<iostream>
using namespace std;
unsigned long fibonacci(unsigned long n)
{
	if (0 == n || 1 == n) { return n; }
	unsigned arr[2] = { 0,1 };
	for (int i = 2; i <= n; i++)
	{
		arr[i % 2] = arr[0] + arr[1];
		if (i == n)return arr[i % 2];
	}

}
int main()
{
	cout << "�����ѯǰ����쳲��������� " << endl;
	int n; cin >> n;
	cout << "ǰ" << n << "��쳲��������� " << endl;
	for (int i = 0; i <= n; i++)
	{
		cout << fibonacci(i) << "\t";
	}
	return 0;
}