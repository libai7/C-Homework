/*
*FileName:   T6_32.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       Mar 27th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ����ɼ����㡣
*/
#include<iostream>
using namespace std;
int qualityPoints(double x)
{
	if (x >= 90) { return 4; }
	else if (x >= 80) { return 3; }
	else if (x >= 70) { return 2; }
	else if (x >= 60) { return 1; }
	else { return 0; }
}
int main()
{
	cout << "������ɼ�(0-100֮��)�� " ;
	double x=0; cin >> x;
	cout << "���㣺 " << qualityPoints(x) << endl;
	return 0;
}