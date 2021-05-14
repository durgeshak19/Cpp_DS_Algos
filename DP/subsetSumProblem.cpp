#include<bits/stdc++.h>
#define FOR(i,a,b) for(auto i=a;i<=b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define ll long long
#define ull unsigned long long
#define elif else if
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.(tie)(NULL); cout.tie(NULL);

using namespace std;
bool dp[10][10]={true};

/*
bool subsetSum(int arr[],int sum,int n)
{
    if(sum == 0)
        return true;
    if(n==0)
        return false;
    
    if(arr[n-1]<=sum)
        return subsetSum(arr,sum-arr[n-1],n-1) || subsetSum(arr,sum,n-1);
   
    else if(arr[n-1]>sum)
        return subsetSum(arr,sum,n-1);

    return false;
}
*/

/*
bool subsetSumMemoized(int arr[],int sum,int n)
{
    if(sum ==0)
        return true;
    if(n==0)
        return false;
    
    if(dp[n][sum] == true)
        return true;
    
    if(arr[n-1]<=sum)
        dp[n][sum] = subsetSumMemoized(arr,sum-arr[n-1],n-1) || subsetSumMemoized(arr,sum,n-1);

    elif(arr[n-1]>sum)
        dp[n][sum] = subsetSumMemoized(arr,sum,n-1);

    return dp[n][sum];

}
*/


bool subsetSumDP(int arr[],int sum,int n)
{
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
        dp[i][0] =true;
    
    for(int i=1;i<=sum;i++)
        dp[0][i] =false;


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j>=arr[i-1])
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];

            elif(arr[n-1]>sum)
                dp[i][j] = dp[i-1][j];
            
        }
    }

    return dp[n][sum];
}




int main()
{   
    
    int sum =8,n=6;
    for(int i=0;i<=sum+1;i++)
        dp[0][i] =false;

    for(int i=0;i<=n+1;i++)
        dp[i][0] =true;

    int arr[]= {3,34,4,12,5,2};
    
    
    if(subsetSumDP(arr,sum,n))
        cout<<"\n Found Subset Sum";
    else 
        cout<<"\n No Subset Sum";
    return 0;
}