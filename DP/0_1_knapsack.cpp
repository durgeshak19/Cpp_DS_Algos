#include<bits/stdc++.h>
using namespace std;

int knapsackRecursive(vector<int> wt,vector<int> val,int W,int n)
{

    if(W==0 || n==0)
        return 0;
    if(wt[n-1]<=W)
        return max(knapsackRecursive(wt,val,W-val[n-1],n-1),knapsackRecursive(wt,val,W,n-1));

    else if(wt[n-1]>W)
        return knapsackRecursive(wt,val,W,n-1);

    return 0;
}

int knapsackTopDown(vector<int> wt,vector<int> val,int W,int n , int dp[][200])
{

    if(n==0 || W==0 )
        return 0;
    
    if(dp[n][W] !=-1)
        return dp[n][W];
    if(wt[n-1]<=W)
        dp[n][W] = max(knapsackTopDown(wt,val,W-val[n-1],n-1,dp),knapsackTopDown(wt,val,W,n-1,dp));

    else if(wt[n-1]>W)
        dp[n][W] =  knapsackTopDown(wt,val,W,n-1,dp);
    
    return dp[n][W];
    
}

int knapsackDP(vector<int> wt,vector<int> val,int W,int n)
{
    int dp[n+2][W+2];
    for(int i=0;i<n+1;i++)
        dp[i][0] =0;

    for(int i=0;i<W+1;i++)
        dp[0][i] =0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(wt[i-1] <= W)
                dp[i][j] = max(dp[i-1][j-val[n-1]],dp[i-1][j]);
            else if(wt[i-1]>W)
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][W];
}

int main()
{  
    vector<int> val = { 60, 100, 120 }; 
    vector<int> wt = { 10, 20, 30 }; 
    int W = 50; 
    int n= val.size();
    int dp[200][200];
    memset(dp,-1,sizeof(dp));

    cout<<knapsackRecursive(wt,val,W,n)<<endl; 
    cout<<knapsackTopDown(wt,val,W,n,dp)<<endl; 
    cout<<knapsackDP(wt,val,W,n)<<endl; 
    return 0; 
}
