/*
*FileName:   T5_13.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   �����û��������ִ�ӡ*��
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "����������5������(1~30֮�������)����" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		for (int j = 0; j < num; j++)
		{
			cout << "*";
		}
		cout <<endl;
	}
	return 0;
}