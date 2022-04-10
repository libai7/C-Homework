/*
*FileName:   T6_55.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       2022.4.7
*College:    School of Computer Science and Information Engineering
*Function:   掷双骰子游戏的改进。
*/
#include<iostream>
#include<random>
#include<ctime>
using namespace std;
//掷双骰子函数
unsigned int rollDice()
{
	default_random_engine engine(static_cast<unsigned int>(time(0)));
	uniform_int_distribution<unsigned int>randomINT(1, 6);
	unsigned int die1 = randomINT(engine);
	unsigned int die2 = randomINT(engine);
	cout << "Player rolled " << die1 << " + " << die2 << " = " << die1 + die2 << endl;
	return die1 + die2;
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	enum Status { CONTINUE, WON, LOST };
	unsigned int myPoint = 0;
	Status gameStatus = CONTINUE;
	unsigned int sumOfDice = rollDice();
	switch (sumOfDice)
	{
	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;
	default:
		gameStatus = CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is " << myPoint << endl;
	}
	while (CONTINUE == gameStatus)
	{
		sumOfDice = rollDice();
		if (sumOfDice == myPoint) { gameStatus = WON; }
		else if (7 == sumOfDice) { gameStatus = LOST; }
	}
	if (WON == gameStatus) { cout << "Player wins" << endl; }
	else { cout << "Player loses" << endl; }
	return 0;
}