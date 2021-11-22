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
    stack<int> stk;
    vector<int> res(n);
    res[0] =1;
    for(int i=1;i<n;i++){

        while(!stk.empty() && v[stk.top()] <= v[i]  ){
            stk.pop();
        }

        res[i] = (stk.empty() ? (i+1) : i-stk.top());
        stk.push(v[i]);
    }
    
}




int main()
{
    vector<int> v ={100,80,60,70,60,75,85};
    stockSpan(v);
}