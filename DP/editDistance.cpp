#include<bits/stdc++.h>
using namespace std;

int min(int a,int b ,int c)
{
    return min(min(a,b),c);
}
int editDistanceRecursive(string a,string b,int n,int m)
{
    if(n==0)
        return m;
    else if(m==0) 
        return n;
    
    if(a[n-1] == b[m-1])
        return editDistanceRecursive(a,b,n-1,m-1);
    else
        return 1 + min(editDistanceRecursive(a,b,n,m-1),
        editDistanceRecursive(a,b,n-1,m),editDistanceRecursive(a,b,n-1,m-1));
}

int editDistanceTopDown(string a,string b , int n ,int m,int dp[][10])
{
    if(n==0)
        return m;
    if(m==0)
        return n;
    if(dp[n-1][m-1] != -1)
        return dp[n-1][m-1];
    

    if(a[n-1] == b[m-1])
        dp[n-1][m-1] = editDistanceTopDown(a,b,n-1,m-1,dp);
    else
        dp[n-1][m-1] = 1 + min(editDistanceTopDown(a,b,n,m-1,dp),
        editDistanceTopDown(a,b,n-1,m,dp),editDistanceTopDown(a,b,n-1,m-1,dp));
    return dp[n-1][m-1];
}

void printEditDistance(string a,string b,int n,int m,int dp[][10])
{   
    int i=n;
    int j=m;
    string str="";
    while(i> 0 && j>0)
    {
        if(a[i-1] == b[j-1])
        {
            str += (a[i-1]);
            i--,j--;
        }
        else if(dp[i][j] == dp[i-1][j-1] + 1)
        {
            str += a[--i];
            --j;            
        }
        
        else if(dp[i][j] == dp[i-1][j] + 1)
        {
            str += a[--i];
                        
        }

        else if(dp[i][j] == dp[i][j-1] + 1)
        {
            str += a[--j];
                
        }
    }
    reverse(str.begin(),str.end());
    cout<<str<<endl;

}
int editDistanceDp(string a,string b,int n , int m)
{
    int dp[10][10];
    for(int i=0;i<=n;i++)
        dp[i][0] = i;
    
    for(int j=0;j<=m;j++)
        dp[0][j] = j;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
            {
                dp[i][j] = 1 + min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
            }
            
        }
    }

    printEditDistance(a,b,n,m,dp);
    return dp[n][m];
}
int main()
{
    string a = "sunday";
    string b = "saturday";

    int n = a.length();
    int m = b.length();

    int dp[10][10];
    memset(dp,-1,sizeof(dp));
    cout<<editDistanceRecursive(a,b,n,m)<<endl;
    cout<<editDistanceTopDown(a,b,n,m,dp)<<endl;
    cout<<editDistanceDp(a,b,n,m)<<endl; 
    return 0;
}