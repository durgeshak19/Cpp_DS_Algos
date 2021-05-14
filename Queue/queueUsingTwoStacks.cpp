#include<bits/stdc++.h>


stack<int> s1;
stack<int> s2;

bool Enqueue(int val)
{
    s1.push(val);
    return true;
}

bool Dequeue(int &value){
    int data ;
    if(!s2.empty()){
        value = s2.top();
        s2.pop();
        return true;
    }

    while(!s1.empty())
    {
        data = s1.top();
        s1.pop();
        s2.push(data);
    }

    if(s2.empty())
        return false;
    value = s2.pop();
    s2.pop();
    return true; 
}

bool queuePeek(int &value)
{
    int data;
    while(!s1.empty())
    {
        data = s2.top();
        s2.pop();
        s1.push(data);
    }
    if(s2.empty())
        return false;
    value = s2.top();
    return true;
}

bool isQueueEmpty()
{
    return s1.empty() && s2.empty() ? true : false ;
}
