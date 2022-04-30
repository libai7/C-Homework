/*
*FileName:   T7_26.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       2022.4.16
*College:    School of Computer Science and Information Engineering
*Function:   ��ʿѲ�����⣺���Ѳ�β��ԡ�
*/
#include<iostream>
#include<cmath>
int boa[8][8] = { 0 };
int i = 0;
using namespace std;
bool isOut(int x, int y)//�ж��Ƿ񳬹�����
{
    if (x >= 0 && x <= 7 && y >= 0 && y <= 7)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isVisited(int x, int y)//�ж��Ƿ񱻷��ʹ�
{
    if (boa[x][y] != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void move(int x, int y)
{
    if (64 == i)
        return;
    if (!(isOut(x, y)) && !(isVisited(x, y)))
    {
        i++;
        boa[x][y] = i;
        move(x + 2, y + 1);
        move(x + 1, y + 2);
        move(x - 1, y + 2);
        move(x - 2, y + 1);
        move(x - 2, y - 1);
        move(x - 1, y - 2);
        move(x + 1, y - 2);
        move(x + 2, y - 1);
        return;
    }
    else
    {
        return;
    }
}
int main()
{
    int x, y,m,n;
    cout << "��������ʼλ�ã��� �д�0��ʼ���м�ո������: " << endl;
    cin >> x >> y;
    move(x, y);
    for (int j = 0; j < 8; ++j)
    {
        for (int k = 0; k < 8; ++k)
        {
            cout << boa[j][k] << "\t";
            if (64 == boa[j][k]) { m = j, n = k; }
        }
        cout << endl;
    }
    if ((2 == fabs(m - x) && 1 == fabs(n - y)) || (1 == fabs(m - x) && (2 == fabs(n - y))))
        cout << "�Ƿ��Ѳ��" << endl;
    else cout << "���Ƿ��Ѳ��" << endl;
    return 0;

}