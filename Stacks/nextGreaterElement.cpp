#include<bits/stdc++.h>
using namespace std;


void printx(vector<int> &v)
{
    for(auto n: v)
        cout<<n<<" ";
}
void nextGreatestElement(vector<int>& v)
{
    int n = v.size();
    vector<int> res;

    stack<int> stk;

    for(int i=n-1;i>=0;i--)
    {
        int ele = v[i];

        if(stk.empty()){
            res.push_back(-1);
        }
        else if(stk.top() > ele)
            res.push_back(stk.top());
        else if(stk.top() < ele )
        {
            while(!stk.empty() && stk.top() < ele)
                stk.pop();
            if(stk.empty())
                res.push_back(-1);
            else
                res.push_back(stk.top());
        }
        stk.push(ele);

    }
    reverse(res.begin(),res.end());
    printx(res);
}

int main()
{
    vector<int> v = { 1,3,2,4};
    nextGreatestElement(v); 
}