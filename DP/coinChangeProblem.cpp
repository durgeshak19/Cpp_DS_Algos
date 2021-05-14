#include<bits/stdc++.h>
#define elif else if
using namespace std;

/*
int minCoins(int *arr,int n,int sum)
{
    if(sum<=0)
        return 0;
    
    int res =INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<=sum)
        {
            int temp = minCoins(arr,n,sum-arr[i]);

            if(temp+1<res)
                res = temp +1;
        }

    }
    return res;
}
*/

int minCoins(int *arr,int n,int sum)
{
    int dp[sum+1];

    dp[0] = 0;

    for(int i=1;i<=sum;i++)
        dp[i] = INT_MAX;
    
    for(int i=1;i<=sum;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp = dp[i-arr[j]];
            if(temp!=INT_MAX && temp+1<dp[i])
                dp[i] =temp+1;
        }
    }
    return dp[sum];
}
int main()
{

    int arr[] = {1,5,6,9};
    int n =sizeof(arr)/sizeof(int);
    int sum =11;
    cout<<minCoins(arr,n,sum);
    return 0;
}