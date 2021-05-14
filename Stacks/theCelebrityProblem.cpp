#include<bits/stdc++.h>
using namespace std;
//multiple solution other than stack
void celebrity(vector<vector<int>> &mat)
{
    stack<int> stk;

    int celebrity;
    int n = mat.size();
    for(int i = 0;i<n ;i++)
        stk.push(i);

    int A = stk.top();
    stk.pop();
    int B = stk.top();
    stk.pop();

    while(!stk.empty())
    {
        if(mat[A][B]){
            int A = stk.top();
            stk.pop();
        }
        else
        {
            int B = stk.top();
            stk.pop();
        }
    }

    if(stk.empty()){
        cout<<"No Celebrity";
        return ;
    }
    celebrity = stk.top();
    stk.pop();

    if(mat[celebrity][B])
    {
        celebrity = B;
    }
    if(mat[celebrity][A])
        celebrity = A;

    for(int i=0 ; i<n ;i++)
    {
        if(i!=celebrity && (mat[celebrity][i] || mat[i][celebrity]))
            cout<<"No Celebrity";
    }
    cout<<"Celebrity : "<<celebrity + 1;

}
int main()
{
    vector<vector<int>> mat = {{0,0,1,0}, {0,0,1,0}, {0,0,0,0} , {0,0,1,0}};
    celebrity(mat);
}