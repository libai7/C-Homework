/*
*FileName:   T4_08.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ����x��y���ݡ�
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "������������x��y�����򽫼���x��y����:��" << endl;
	unsigned int x, y,power=1,i=1;
	cin >> x >> y;
	while (i <= y)
	{
		power *= x;
		i++;
	}
	cout << "x��y����:��" << power << endl;
	return 0;
}