/*
*FileName:   T6_39.cpp
*Author:     史建宇
*E-mail:     208237042@qq.com
*Date:       2022.4.7
*College:    School of Computer Science and Information Engineering
*Function:   汉诺塔的迭代版本。
*/
#include<iostream>
#include<string>
#include<stack>    //栈 
using namespace std;
//移动过程打印函数
void print(int num, string from, string to) 
{
    cout << "Move " << num << " from " << from << " to " << to << endl;
}

int main()
{
    //左中右三个栈
    stack<int> l, m, r;
    int num;
   // 输入碟子数量
        cin >> num;
    //初始化，将所有碟子依次放入左边的栈
    for (int i = 0; i < num; i++)
        l.push(num - i);
    //flag为false表示左边和中间之间有过移动，中间和右边之间没有过移动
    //第一次移动定发生在左边和中间，故flag初始化为true
    bool flag = true;
    //记录移动次数
    int sum = 0;
    while (r.size() < num) {
        //若左边和中间该发生碟子移动
        if (flag)
        {
            //中间栈为空，或左边栈顶小于中间栈顶时，左边出栈
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