/*
*FileName:   T5_20.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��ϴ����˹��500���ڵ���Ԫ�顣
*/
#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 500; i++)
	{
		for (int j = i; j <= 500; j++)
		{
			for (int k = j; k <= 500; k++)
			{
				if(i*i+j*j==k*k)
					{cout<<i<<" "<<j<<" "<<k<<endl;}
			}
		}
	}
	return 0;
}