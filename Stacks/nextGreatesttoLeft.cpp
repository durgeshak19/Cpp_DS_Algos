#include<bits/stdc++.h>
using namespace std;

void printx(vector<int> &v)
{
    for(auto n:v)
        cout<<n<<" ";
}

void nextGreatestLeft(vector<int>& v)
{
    int n = v.size();
    stack<int> stk;
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        int ele = v[i];
        if(stk.empty())
            res.push_back(-1);
        else if(stk.top()> ele)
            res.push_back(stk.top());
        else if(stk.top() < ele)
        {
            while(stk.top()<ele && !stk.empty())
                stk.pop();
            if(stk.empty())
                res.push_back(-1);
            else
                res.push_back(stk.top());
        }
        stk.push(ele);
    }
    printx(res);
}

int main()
{
    vector<int> v = {4,2,3,1};
    nextGreatestLeft(v);
}