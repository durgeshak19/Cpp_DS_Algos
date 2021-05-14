#include<bits/stdc++.h>
using namespace std;

class Queue
{
    public:
    //int val;
    stack<int> stk1;
    stack<int> stk2;
    int top()
    {
        return stk1.top();
    }

    void push(int data)
    {
        while(!stk1.empty())
        {
            stk2.push(stk1.top());
            stk1.pop();
        }

        stk1.push(data);
        while(!stk2.empty())
        {
            stk1.push(stk2.top());
            stk2.pop();
        }
    }

    void pop()
    {
        if(!stk1.empty())
            stk1.pop();
    }
    bool empty(){
        return stk1.empty();
    }
};

int main()
{
    Queue q ;
    q.push(1);
    q.push(2);
    q.pop();
    q.push(3);
    cout<<q.top();//   q.pop();
    q.push(4);
    q.push(5);
    q.pop();

    while(!q.empty())
    {
        cout<<q.top();
        q.pop();
    }

}