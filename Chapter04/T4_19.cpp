/*
*FileName:   T4_19.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 8th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��ӡ�û�����ʮ������������λ����
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������ʮ������: " << endl;
	double n, i=0, l1, l2;
	cin >> n; l1 = n, l2 = n;
	while (i < 9)
	{
		cin >> n;
		if (n > l2 && n < l1) { l2 = n; }
		if (n > l1) { l2 = l1; l1 = n; }
		
		i++;
	}
	cout << "�����������ǣ� "<<l1 << "  " <<l2<< endl;
	return 0;
}