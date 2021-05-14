#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
    for(auto n:v)
        cout<<n<<" ";

}

void nextSmallerToLeft(vector<int> &v)
{
    int n = v.size();
    stack<int> stk;
    vector<int> res;
    for(int i=0; i<n ;i++)
    {
        int ele = v[i];
        if(stk.empty())
            res.push_back(-1);
        else if(stk.top() < ele)
            res.push_back(stk.top());
        else if(stk.top()> ele)
        {
            while(!stk.empty() && stk.top() > ele)
                stk.pop();
            if(stk.empty())
                res.push_back(-1);
            else    res.push_back(stk.top());
        }
        stk.push(ele);
    }
    // reverse(res.begin(),res.end());
    print(res);
}

int main()
{
    vector<int> v ={4,5,2,10,8};
    nextSmallerToLeft(v);
}