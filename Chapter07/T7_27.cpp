/*
*FileName:   T7_27.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       2022.4.16
*College:    School of Computer Science and Information Engineering
*Function:   ��������˿ɸѡ��������array�����ӡ2~999֮���������
*/
#include<iostream>
using namespace std;

void test(int arr[],int i)
{
	if (arr[i])
	{
		for (int j = 2*i; j < 1000; j += i)
		{
			arr[j] = 0;
		}
	}
}

int main()
{
	int arr[1000];
	for (int i = 0; i < 1000; ++i)
	{
		arr[i] = 1;
	}
	for (int i = 2; i < 1000; i++)
	{
		if (arr[i])test(arr, i);
	}
	cout << "2--999������:" << endl;
	for (int i = 2; i < 1000; i++)
	{
		if (arr[i])cout <<i<< "\n";
	}
	return 0;
}