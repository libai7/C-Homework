/*
*FileName:   T6_38.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ��ŵ�����⡣
*/
#include<iostream>
using namespace std;
//int f = 0;
void Move(int n, char A, char B, char C)//��A�ƶ���C��B��Ϊ����
{
	if (1 == n) { cout << A << "->" << C << endl; } //f++; }//Բ��ֻ��һ����ʱ��ֻ�轫A�ƶ���C
	else
	{
		Move(n - 1,A,C,B);//��n-1��Բ�̴�A�ƶ���B��C��Ϊ����
		cout << A << "->" << C << endl;// f++;//��A�������Բ���ƶ���C
		Move(n - 1, B,A,C);//��n-1��Բ�̴�B���ƶ���C��A��Ϊ����
	}
}
int main()
{
	int n;
	cout << "�����뺺ŵ����Բ������ " << endl;
	cin >> n;
	char a='A', b='B', c='C';
	Move(n, a, b, c);
	//cout << f << endl;
	return 0;
}