#include<bits/stdc++.h>
using namespace std;


// int LCSrecursive(string a, string b ,int n,int m)
// {
//     if(n==0 || m==0)
//         return 0;
//     if(a[n-1] == b[m-1])
//         return 1 + LCSrecursive(a,b,n-1,m-1);
//     else
//         return max(LCSrecursive(a,b,n-1,m),LCSrecursive(a,b,n,m-1));

// }

// int LCSTopDown(string a,string b,int n,int m , int dp[][10])
// {
//     if(n==0 || m==0)
//         return 0;
//     if(dp[n-1][m-1] !=-1)
//         return dp[n-1][m-1];
//     if(a[n-1] == b[m-1])
//         dp[n-1][m-1] =  1 + LCSTopDown(a,b,n-1,m-1,dp);
//     else
//         dp[n-1][m-1] = max(LCSTopDown(a,b,n-1,m,dp) , LCSTopDown(a,b,n,m-1,dp));
//     return dp[n-1][m-1];
// }

// void LCSDp(string a,string b,int n , int m)
// {
//     int dp[n+1][m+1];  
//     int i,j;
//     for(i=0;i<=n;i++)
//     {
//         for(j=0;j<=m;j++)
//         {
//             if(i==0 || j==0)
//                 dp[i][j] = 0;
//             else if(a[i-1] == b[j-1])
//                 dp[i][j] = 1 + dp[i-1][j-1];
//             else
//                 dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
//         }
//     }
//     int index = dp[n][m];
//     char lcs[index +1];
//     lcs[index] = '\0';
//     i=n,j=m;
//     while(i>0 && j>0)
//     {
//         if(a[i-1] == b[j-1])
//         {
//             lcs[--index] = a[i-1];
//             i--,j--;
//         }
//         else if(dp[i-1][j] > dp[i][j-1])
//             i--;
//         else
//             j--;
//     }
//     cout<<"LCS of string : "<<a<<"\nand string : "<<b<<" is\n"<<lcs<<" with size "<<dp[n][m]<<endl;
// }



int LCSrecursive(string a , string b ,int n , int m){
    if(n<= 0  || m<=0){
        return 0;
    }
    if(a[n-1] == b[m-1]){
        return 1 + LCSrecursive(a,b,n-1,m-1);
    }
    else{
        return max(LCSrecursive(a,b,n-1,m) , LCSrecursive(a,b,n,m-1));
    }
    return 0;
}


int LCSTopDown(string a,string b,int n,int m ,int dp[][10]){
    if(n<=0 || m<=0){
        return 0;
    }

    if(dp[n][m] >=0 ){
        return dp[n][m];
    }    
    
    if(a[n-1] == b[m-1]){
        dp[n][m] =  1 + LCSrecursive(a,b,n-1,m-1);
    }
    else{
        dp[n][m] =  max(LCSrecursive(a,b,n-1,m) , LCSrecursive(a,b,n,m-1));
    }
    return dp[n][m];
    
}

void LCSDp(string a,string b ,int n ,int m)
{
    int dp[10][10];
    memset(dp,0,sizeof(dp));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
            
        }
    }
    cout<< dp[n][m];
}
int main()
{
//     string a = "AGGTAB";
//     string b = "GXTXAYB";
    string a = "ABCBDAB";
    string b = "BDCABA";


    int dp[10][10];
    memset(dp,-1,sizeof(dp));

    // cout<<"LCS Recursive : "<<LCSrecursive(a,b,a.size(),b.size())<<endl;
    

    // cout<<"LCS Top Down : "<<LCSTopDown(a,b,a.size(),b.size(),dp)<<endl;
   
    cout<<"LCS Bottom Up ->\n";
    LCSDp(a,b,a.size(),b.size());
    


    
    return 0;
}