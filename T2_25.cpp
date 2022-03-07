/*
*FileName:   T2_25.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   判断第一大数是否是第二个数的倍数。
*/
#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cout << "请输入两个整数： " << endl;
	cin >> n1 >> n2;
	if (n1 % n2 == 0)cout << n1 << "是" << n2 << "的倍数" << endl;
	else cout<< n1 << "不是" << n2 << "的倍数" << endl;
	return 0;
}