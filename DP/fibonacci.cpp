#include<bits/stdc++.h>
using namespace std;

//fibonacci top down

int fib(int n , vector<int> &dp)
{
    if(n==1 || n==2)
        return 1;
    if(dp[n]!=0)
        return dp[n];
    dp[n] = fib(n-1,dp) + fib(n-2,dp);
    return dp[n];
}
//fibonacci bottom up

int fibo(int n)
{   
    vector<int> dp(n+1);
    // vector<int>
    if(n==0 || n==1)
        return 1;
    
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<n;i++)
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n-1];
}

//efficient fibo
int fibon(int n)
{
    int a = 0,b=1;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = a+b;
        a= b;
        b= sum;
    }
    return sum; 
}
int main()
{   vector<int> dp(8);
    for(int i=1;i<7;i++)
    cout<<fibo(i)<<" ";
}