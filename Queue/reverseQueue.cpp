#include<bits/stdc++.h>
void reverseQueue(queue<int> &q)
{
    stack<int> s;
    while(!q.empty())
        s.push(q.pop());
    
    while(!s.empty())
        q.push(s.pop());
}