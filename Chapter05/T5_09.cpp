/*
*FileName:   T5_09.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��ӡ��1��15�������ĳ˻���
*/
#include<iostream>
using namespace std;
int main()
{
	int c=1;
	for (int i = 1; i <= 15; i += 2)
	{
		c *= i;
	}
	cout << "1��15�������ĳ˻�Ϊ�� " << c << endl;
	return 0;
}