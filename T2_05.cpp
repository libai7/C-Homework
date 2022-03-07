/*
*FileName:   T2_05.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算显示三个整数的成绩。
*/
#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int result = 0;//定义初始值为0；
	cout << "Enter three integers: " << endl;//提示用户输入三个整数。
	cin >> x >> y >> z;//读取输入的三个整数。
	result = x * y * z;
	cout << "The product is " << result << endl;//打印结果。
	return 0;
}