/*
*FileName:   T4_20.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 9th,2022
*College:    School of Computer Science and Information Engineering
*Function:   ȷ���û��������Ч�ԣ���������ֵ����1��2����ô�����һֱѭ��ֱ���û�����һ����ȷ��ֵΪֹ��
*/
#include<iostream>
using namespace std;
int main()
{
	unsigned int passes = 0;//number of passes
	unsigned int failures = 0;//number of failures
	unsigned int studentCounter = 1;//student couner
	while (studentCounter <= 10)
	{
		cout << "Enter result(1=pass,2=fail): ";
		int result = 0;
		cin >> result;
		if (result == 1) { passes++; studentCounter++;}
		else if (result == 2) { failures++; studentCounter++; }
		else { cout << "�����������������롣" << endl; }
	}
	cout << "Passed" << passes << "\nFailed" << failures << endl;

	return 0;
}