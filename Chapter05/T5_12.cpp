/*
*FileName:   T5_12.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��ӡ������ʾͼ�Ρ�
*/
#include<iostream>
using namespace std;
int main()
{
	//ͼ��a
	for(int i=0;i<10;i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "\n\n\n";
	//ͼ��b
	for (int i = 10; i>0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "\n\n\n";
	//ͼ��c
	for (int i = 9; i >= 0; i--)
	{
		for (int j = 0; j <10; j++)
		{
			if (j < 9- i) { cout << " "; }
			else { cout << "*"; }
		}
		cout << endl;
	}
	cout << "\n\n\n";
	//ͼ��d
	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j >= 0; j--)
		{
			if (i >= j) { cout << "*"; }
			else { cout << " "; }
		}
		cout << endl;
	}
	return 0;
}