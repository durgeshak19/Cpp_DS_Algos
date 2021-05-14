#include<bits/stdc++.h>
using namespace std;


// Given a stack of integers, how do you check whether each successive pair of
// numbers in the stack is consecutive or not. The pairs can be increasing or decreasing, and
// if the stack has an odd number of elements, the element at the top is left out of a pair
int checkPairWiseOrder(stack<int> &s)
{
    queue<int> q;
    int pairWiseOrder = 1;
    while(!s.empty()){
        q.push(s.top());
        q.pop();
    }

    while(!q.empty()){
        s.push(q.front());
        s.pop();
    }
    while(!s.empty()){
        int n = s.top();
        s.pop();
        q.push(n);
        if(!s.empty()){
            int m = s.top();
            s.pop();
            q.push(m);
            if(abs(n-m)!=1)
                pairWiseOrder = 0;
        }
    }
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }   
    return pairWiseOrder;
}

int main()
{
    return 0;
}