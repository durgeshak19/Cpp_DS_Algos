#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//sort a stack in increasing order using pop push top empty

void sorting(stack<int> &stk)
{
    int data , min;
    stack<int> t;
    while(!stk.empty())
    {
        data = stk.top();
        stk.pop();
        t.push(data);
    }

    while(!t.empty()){
        min = t.top();
        t.pop();
        while(!stk.empty() && stk.top() > min)
        {
            data = stk.top();
            stk.pop();
            t.push(data);
        }
        stk.push(min);
    }
}

int main(){
    stack<int> stk;
    stk.push(3);
    stk.push(1);
    stk.push(2);
    stk.push(2);
    stk.push(4);
    stk.push(-4);
    stk.push(-6);
    stk.push(6);
    stk.push(9);

    sorting(stk);
    while(!stk.empty()){
        int data;
        data = stk.top();
        stk.pop();
        cout<<data<<endl;
    }
    return 0;
}



