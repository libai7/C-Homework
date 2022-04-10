/*
*FileName:   T6_34.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 25th,2022
*College:    School of Computer Science and Information Engineering
*Function:   猜数字游戏。
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
	int n=-1;
	cin >> n;
	while (n != num)
	{
		if (n < num) { cout << "Too low. Try again." << endl; cin >> n; }
		else { cout << "Too high. Try again" << endl; cin >> n; }
	}
	cout << "Excellent! Your guessed the number!" << endl;
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