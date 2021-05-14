#include<bits/stdc++.h>
using namespace std;
#define mp makepair

void printx(vector<int> &v)
{
    for(auto n:v)
        cout<<n<<" ";
}

void stockSpan(vector<int>& v)
{
    int n = v.size();
    stack<pair<int,int>> stk;
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        int ele = v[i];

        if(stk.empty())
            res.push_back(-1);
        
        else if(stk.top().first > ele)
            res.push_back(stk.top().second);
        
        else if(stk.top().first <= ele)
        {
            while(stk.top().first<=ele && !stk.empty())
                stk.pop();
            if(stk.empty())
                res.push_back(-1);
            else
                res.push_back(stk.top().second);
        }
        
        stk.push({ele,i});
    }

    for(int i=0;i<n;i++)
    {
        res[i] = i- res[i]; 
    }
    printx(res);
}




int main()
{
    vector<int> v ={100,80,60,70,60,75,85};
    stockSpan(v);
}