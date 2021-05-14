#include<bits/stdc++.h>
#include<stack>

void insertAtBottom(stack<char> &s,int val)
{
    int temp ;
    if(s.empty())
    {
        s.push
    }
}
void Reverse(stack<char> *s)
{
    int val ; 
    if(s.empty())
        return;
    val = s.pop();
    Reverse(s);
    insertAtBottom(s,val);
}
