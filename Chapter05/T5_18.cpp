/*
*FileName:   T5_18.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 20th,2022
*College:    School of Computer Science and Information Engineering
*Function:   1~256���Ʊ�
*/
#include<iostream>
using namespace std;
int main()
{
	int i, j,t, f;
	cout << "dec\tbin\t\toct\thex\t\n";
	for (i = 1; i < 257; i++)
	{
		cout << dec << i << "\t";//���ʮ������
		t = i;
		f = 0;//��Ϊ���1��־
		for (j = 256; j > 0; j /= 2)
		{
			if (t >= j)
			{
				cout << 1;
				f = 1;
				t -= j;
			}
			else if (f) { cout << 0; }//��λ���1�󷽿����0��
		}
		if (i < 128)cout << "\t";
		cout <<"\t"<< oct << i << "\t" << hex << i << endl;
	}
	
	return 0;
}