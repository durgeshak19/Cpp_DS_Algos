#include<bits/stdc++.h>
using namespace std;


int countPathrecursive(int n,vector<int>& dp)
{
    if(n < 0)
        return 0;
    else if(n == 0)
        return 1;
    else if(dp[n] >-1)
        return dp[n];
    else
        dp[n] =  countPathrecursive(n-1,dp) +countPathrecursive(n-2,dp) +countPathrecursive(n-3,dp) ;
   
    return dp[n] ; 
}


int main()
{
    int n = 7;
    vector<int> dp(n+1,-1); 
    cout<<countPathrecursive(n,dp);

}