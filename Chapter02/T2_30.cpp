/*
*FileName:   T2_30.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 10th,2022
*College:    School of Computer Science and Information Engineering
*Function:   显示用户的身体质量指数BMI。
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "BMI<18.2:偏瘦     18.5<=BMI<=24.9:正常       25<=BMI<=29.9:偏重         BMI>30:特重" << endl;
	cout << "请输入您的体重（千克）和身高（米），程序将显示您的BMI值。" << endl;
	double w, h,bmi;
	cin >> w >>h;
	bmi = w / h / h;
	cout <<"您的BMI： "<< bmi << endl;
	return 0;
}