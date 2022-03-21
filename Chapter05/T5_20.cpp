/*
*FileName:   T5_20.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   求毕达哥拉斯的500以内的三元组。
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