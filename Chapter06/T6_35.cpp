/*
*FileName:   T6_35.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 27h,2022
*College:    School of Computer Science and Information Engineering
*Function:   猜数字游戏改进版。
*/
#include<iostream>
#include<cstdlib>
using namespace std;
void game()
{
	cout << "I have a number between 1 and 1000." << endl;
	cout << "Can you guess my number？" << endl;
	cout << "Please type your first guess." << endl;
	int num = rand() % 1000;
	int n = -1;
	int count = 1;//计数器
	cin >> n;
	while (n != num)
	{
		if (n < num) { cout << "Too low. Try again." << endl; cin >> n; count++; }
		else { cout << "Too high. Try again" << endl; cin >> n; count++; }
	}
	cout << "Excellent! Your guessed the number!" << endl;
	if(count<10)
	{
		cout << "Either you know the secret or you got lucky!" << endl;
	}
	else if (10 == count)
	{
		cout << "Ahah! you know the secret!" << endl;
	}
	else
	{
		cout << "You should be able to better!" << endl;
	}
}
int main()
{
	while (1)
	{
		char a;
		game();
		cout << "Would you like to play again( y or n )?" << endl;
		cin >> a;
		if ('n' == a) { break; }
	}
	return 0;
}