#include<bits/stdc++.h>

//top down approach
int fact(int n,vector<int> &dp)
{
    if(n==1 || n==0)
        return 1;
    if(dp[n]!=0)    return dp[n];
    dp[n] = n*fact(n-1,dp);
    return dp[n];
}