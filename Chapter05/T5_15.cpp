/*
*FileName:   T5_15.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 13th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ����һ��ɼ���ƽ���ɼ���
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������һ��ɼ���A B C D F��������0��ֹ���� ";
	char a;
	double sum = 0,  i = 0; 
	while (cin>>a)
	{
		int n = -1;
		if ((int)a == 65){n = 4;}
		else if ((int)a == 66) { n = 3; }
		else if ((int)a == 67) { n = 2; }
		else if ((int)a == 68) { n = 1; }
		else if ((int)a == 70) { n = 0; }
		else if (a == '0') { break; }
		else cout << "�����������������룺 " << endl;
		if (n == 4 || n == 3 || n == 2 || n == 1 || n == 0)
		{
			sum += n, i++;
		}
	}
	cout << "ƽ���ɼ��� " << sum / i << endl;
	return 0;
}