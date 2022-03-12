/*
*FileName:   T2_19.cpp
*Author:     Jianyu Shi
*E-mail:     208237042@qq.com
*Date:       Mar 4th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算输入3个整数的和，平均值，乘积，最小值和最大值。
*/#include<iostream>
using namespace std;
int main()
{
	cout << "请输入三个整数" << endl;
	int a, b, c; cin >> a >> b >> c;
	cout << "和：" << a + b + c << endl;
	cout << "平均数:" << (double)((a + b + c) / 3.0) << endl;
	cout << "乘积：" << a * b * c << endl;
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
	cout << "最小值：" << arr[0] << endl;
	cout << "最大值：" << arr[2] << endl;
	return 0;
}