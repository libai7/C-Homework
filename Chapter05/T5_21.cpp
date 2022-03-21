/*
*FileName:   T5_21.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   计算不同员工的不同薪水。
*/
#include<iostream>
using namespace std;
int main()
{	
	int x;//工资代码
	while (1)
	{
		cout << "请输入工资代码(结束请输入0)： ";
		double m = 0.0;
		cin >> x;
		if (x == 0) { break; }//输入0时结束程序
		switch (x)
		{
		case(1):
			cout << "请输入经理的固定周工资： ";
			cin >> m;
			cout << "经理的周工资为： $" << m << endl;
			break;
		case(2):
			cout << "请输入小时工每小时的工资：";
			double m1;
			cin >> m1;
			cout << "请输入小时工周工作时长： ";
			double h;
			cin >> h;
			if (h <= 40) { m = m1 * h; }
			else { m = m1 * 40 + (h - 40) * m1 * 1.5; }
			cout << "小时工周工资为： $" << m << endl;
			break;
		case(3):
			cout << "请输入佣金工本周销售毛利： ";
			double m2;
			cin >> m2;
			m = 250 + 0.057 * m2;
			cout << "佣金工本周工资为： $" << m << endl;
			break;
		case(4):
			cout << "请输入计件工生产的产品的固定金额： ";
			double m3;
			cin >> m3;
			cout << "请输入件数： ";
			int num;
			cin >> num;
			m = m3 * num;
			cout << "计件工周工资为：$" << m << endl;
			break;
		default:
			cout << "工资代码输入错误！" << endl;
		}
	}
	return 0;
}