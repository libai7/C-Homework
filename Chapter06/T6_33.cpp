/*
*FileName:   T6_33.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ģ����Ӳ�ң�������������ֵĸ��ʡ�
*/
#include<iostream>
#include<cstdlib>
using namespace std;
int flip()
{
	return rand()% 2;
}
int main()
{
	for (int i = 0; i < 100; i++)
	{
		if (flip()) { cout << "Head" << endl; }
		else { cout << "Tail" << endl; }
	}
	return 0;
}