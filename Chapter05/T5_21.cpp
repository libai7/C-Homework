/*
*FileName:   T5_21.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ���㲻ͬԱ���Ĳ�ͬнˮ��
*/
#include<iostream>
using namespace std;
int main()
{	
	int x;//���ʴ���
	while (1)
	{
		cout << "�����빤�ʴ���(����������0)�� ";
		double m = 0.0;
		cin >> x;
		if (x == 0) { break; }//����0ʱ��������
		switch (x)
		{
		case(1):
			cout << "�����뾭��Ĺ̶��ܹ��ʣ� ";
			cin >> m;
			cout << "������ܹ���Ϊ�� $" << m << endl;
			break;
		case(2):
			cout << "������Сʱ��ÿСʱ�Ĺ��ʣ�";
			double m1;
			cin >> m1;
			cout << "������Сʱ���ܹ���ʱ���� ";
			double h;
			cin >> h;
			if (h <= 40) { m = m1 * h; }
			else { m = m1 * 40 + (h - 40) * m1 * 1.5; }
			cout << "Сʱ���ܹ���Ϊ�� $" << m << endl;
			break;
		case(3):
			cout << "������Ӷ�𹤱�������ë���� ";
			double m2;
			cin >> m2;
			m = 250 + 0.057 * m2;
			cout << "Ӷ�𹤱��ܹ���Ϊ�� $" << m << endl;
			break;
		case(4):
			cout << "������Ƽ��������Ĳ�Ʒ�Ĺ̶��� ";
			double m3;
			cin >> m3;
			cout << "����������� ";
			int num;
			cin >> num;
			m = m3 * num;
			cout << "�Ƽ����ܹ���Ϊ��$" << m << endl;
			break;
		default:
			cout << "���ʴ����������" << endl;
		}
	}
	return 0;
}