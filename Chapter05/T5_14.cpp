/*
*FileName:   T5_14.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ���������۶
*/
#include<iostream>
using namespace std;
int main()
{
	int number,num,sign=0;//��Ʒ���,������
	double unit_price,sum=0.0;//��Ʒ����
	while (1)
	{
		cout << "�������Ʒ��ţ� ";
		cin >> number;
		if (number == 0) { break; }
		switch (number)
		{
		case 1:unit_price = 2.98; break;
		case 2:unit_price = 4.50; break;
		case 3:unit_price = 9.98; break;
		case 4:unit_price = 4.49; break;
		case 5:unit_price = 6.87; break;
		default:cout << "��Ʒ��������������������룡" << endl; sign = 1; break;
		}
		if (sign == 1)continue;
		cout << "������˲�Ʒ�������� ";
		cin >> num;
		sum = sum + num * unit_price;
		cout << "�����������һ����Ʒ������0�˳����򣩡�" << endl;
	}
	cout << "�����۶�Ϊ�� $" << sum << endl;
	return 0;
}