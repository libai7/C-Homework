/*
*FileName:   T6_39.cpp
*Author:     ʷ����
*E-mail:     208237042@qq.com
*Date:       2022.4.7
*College:    School of Computer Science and Information Engineering
*Function:   ��ŵ���ĵ����汾��
*/
#include<iostream>
#include<string>
#include<stack>    //ջ 
using namespace std;
//�ƶ����̴�ӡ����
void print(int num, string from, string to) 
{
    cout << "Move " << num << " from " << from << " to " << to << endl;
}

int main()
{
    //����������ջ
    stack<int> l, m, r;
    int num;
   // �����������
        cin >> num;
    //��ʼ���������е������η�����ߵ�ջ
    for (int i = 0; i < num; i++)
        l.push(num - i);
    //flagΪfalse��ʾ��ߺ��м�֮���й��ƶ����м���ұ�֮��û�й��ƶ�
    //��һ���ƶ�����������ߺ��м䣬��flag��ʼ��Ϊtrue
    bool flag = true;
    //��¼�ƶ�����
    int sum = 0;
    while (r.size() < num) {
        //����ߺ��м�÷��������ƶ�
        if (flag)
        {
            //�м�ջΪ�գ������ջ��С���м�ջ��ʱ����߳�ջ
            if (m.empty() || (!l.empty() && l.top() < m.top())) {
                m.push(l.top());
                l.pop();
                print(m.top(), "L", "M");
            }
            else {
                l.push(m.top());
                m.pop();
                print(l.top(), "M", "L");
            }
            flag = false;
        }
        else {
            if (r.empty() || (!r.empty() && m.top() < r.top())) {
                r.push(m.top());
                m.pop();
                print(r.top(), "M", "R");
            }
            else {
                m.push(r.top());
                r.pop();
                print(m.top(), "R", "M");
            }
            flag = true;
        }
        sum++;
    }
    cout << "total number of movement is " << sum << endl;
    return 0;
}