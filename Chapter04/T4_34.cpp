/*
*FileName:   T4_34.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   1.������Ǹ������Ľ׳ˡ�2.����e��3.����e~x��
*/
#include<iostream>
using namespace std;
int main()
{
	//1.��Ǹ������Ľ׳�
	unsigned long long n, x=1,n1;
	cout << "������һ�������������򽫼���������Ľ׳�" << endl;
	cin >> n;
	n1 = n;
	while (n > 0)
	{
		x = x * n;
		n--;
	}
	cout << n1 << "�Ľ׳�Ϊ�� " << x << endl;
	//2.����e��ֵ��
	cout << "��������Ҫȷ��e�ľ��ȣ� " << endl;
	int accuracy, 
		i = 1, i1; double e = 1.0,x1;
	cin >> accuracy;
	while (i <= accuracy)
	{
		i1 = i;
		x1 = 1.0;
		while (i1 > 0)
		{
			x1 = x1 * i1;
			i1--;
		}
		e=e+1/x1;
		i++;
	}
	cout << "e����ֵΪ�� " << e << endl;
	//����e~x��ֵ
	cout << "����һ����num�����򽫼���e��num�η�" << endl;
	double e_x = 1.0; int num, i_ = 1;
	cin >> num;
	while (i_ <= num)
	{
		x1 = 1.0;
		int i_1 = i_;
		while (i_1 > 0)
		{
			x1 = x1 * i_1;//��Ӧ�׳�
			i_1--;
		}
		int j_ = 1,num_=1;
		while (j_ <= i_)
		{
			num_ *= num;
			j_++;
		}
		e_x = e_x + num_/ x1;
		i_++;
	}
	cout << "e~"<<num<<"=" << e_x << endl;
	return 0;
}