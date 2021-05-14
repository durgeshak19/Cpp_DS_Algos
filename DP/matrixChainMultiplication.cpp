#include<bits/stdc++.h>
using namespace std;


int MCMRecursive(vector<int> &v,int i,int j)
{
    if(i==j)
        return 0;

    int count =0;
    int min = INT_MAX;
    for(int k=i;k<j;k++)
    {

        count = MCMRecursive(v,i,k) + MCMRecursive(v,k+1,j) + v[i-1]*v[k]*v[j];

        if(count < min)
            min = count;
    }
    return min;
}

int MCMTopDown(vector<int> &v ,int i,int j,int dp[][100] )
{
    if(i==j)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    
    int count = 0;
    int dp[i][j] = 100000;
        for(int k=i;k<j;k++)
        {
            count  = MCMTopDown(v,i,k,dp) + MCMTopDown(v,k+1,j,dp) + v[i-1]*v[k]*v[j];
            if(dp[i][j]>count)
                dp[i][j] = count;
        }
   
    return dp[i][j];
}
int main()
{   
    vector<int> matrix = {1,2,3,4,3};

    cout<<MCMRecursive(matrix,1,matrix.size()-1);
    return 0;
}