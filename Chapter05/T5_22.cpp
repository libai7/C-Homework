/*
*FileName:   T5_22.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 21th,2022
*College:    School of Computer Science and Information Engineering
*Function:   验证德摩根定理。
*/
#include<iostream>
using namespace std;
int main()
{
	double x = 0.0, y=0.0, i=0.0, g=0.0, a=0.0, b=0.0,j=0.0;
	//1.  !(x<5)&&!(y>=7) ~ !(x<5||y>7)
	if (((!(x < 5) && !(y >= 7)) == (!(x < 5 || y>7)))) { cout << "!(x<5)&&!(y>=7) ~ !(x<5||y>7)" << "  True" << endl; }
	//2.  !(a==b)||!(g!=5) ~ !((a==b)&&(g!=5))
	if (((!(a == b) || !(g != 5)) == (!((a == b) && (g != 5))))) { cout << "!(a==b)||!(g!=5) ~ !((a==b)&&(g!=5))" << "  True" << endl; }
	//3.  !((x<=8)&&(y>4)) ~ !(x<=8)||!(y>4)
	if (((!((x <= 8) && (y > 4))) == (!(x <= 8) || !(y > 4)))) { cout << " !((x<=8)&&(y>4)) ~ !(x<=8)||!(y>4)" << "  True" << endl; }
	//4.  !((i>4)||(j<=6)) ~ !(i>4)&&!(j<=6)
	if (((!((i > 4) || (j <= 6))) == (!(i > 4) && !(j <= 6)))) { cout << "!((i>4)||(j<=6)) ~ !(i>4)&&!(j<=6)" << "  True" << endl; }
	return 0;
}