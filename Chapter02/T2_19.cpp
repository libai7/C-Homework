/*
*FileName:   T2_19.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��������3�������ĺͣ�ƽ��ֵ���˻�����Сֵ�����ֵ��
*/#include<iostream>
using namespace std;
int main()
{
	cout << "��������������" << endl;
	int a, b, c; cin >> a >> b >> c;
	cout << "�ͣ�" << a + b + c << endl;
	cout << "ƽ����:" << (double)((a + b + c) / 3.0) << endl;
	cout << "�˻���" << a * b * c << endl;
	int arr[] = { a,b,c };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0,temp; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "��Сֵ��" << arr[0] << endl;
	cout << "���ֵ��" << arr[2] << endl;
	return 0;
}