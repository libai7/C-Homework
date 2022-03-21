/*
*FileName:   T5_18.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       Mar 20th,2022
*College:    School of Computer Science and Information Engineering
*Function:   1~256进制表。
*/
#include<iostream>
using namespace std;
int main()
{
	int i, j,t, f;
	cout << "dec\tbin\t\toct\thex\t\n";
	for (i = 1; i < 257; i++)
	{
		cout << dec << i << "\t";//输出十进制数
		t = i;
		f = 0;//高为输出1标志
		for (j = 256; j > 0; j /= 2)
		{
			if (t >= j)
			{
				cout << 1;
				f = 1;
				t -= j;
			}
			else if (f) { cout << 0; }//高位输出1后方可输出0；
		}
		if (i < 128)cout << "\t";
		cout <<"\t"<< oct << i << "\t" << hex << i << endl;
	}
	
	return 0;
}