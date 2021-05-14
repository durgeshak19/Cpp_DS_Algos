#include<bits/stdc++.h>
using namespace std;


// no of BST with n nodes  
// 0 1 2 3 4 
// 1 2 3 4 5

// 3 as the root;
// i-1 left subtree 
// n-i on right subtree

// C(i-1) * C(n-i)


int catalanNumbers(int n)
{
    if(n==0)
        return 1;
    int count = 0;
    for(int i=1;i<=n;i++)
        count = catalanNumbers(i-1) * catalanNumbers(n-i);
    return count;
}
// dp 2 = c0*c1 + c1*c0
int catalanDP(int n,vector<int> &dp)
{
    if(dp[n] != 1)
        return dp[n];
    dp[n] = 0;
    for(int i=1;i<=n;i++)
        dp[i] += dp[i-1] * dp[n-i];
    return dp[n];
}

