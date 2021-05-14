#include<bits/stdc++.h>
using namespace std;


class Stack
{
    public:
    stack<int> stk;
    int mn = INT_MAX;
    void push(int data)
    {
        stk.push(data);
        if(data < mn)
            mn = data;
    }

    int top()
    {
        return stk.top();
    }
    void pop()
    {
        
    }

    int getMin()
    {
        return mn;
    }

    bool isEmpty()
    {   return stk.empty();}

};
int main()
{

}