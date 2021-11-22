#include<bits/stdc++.h>
using namespace std;


int lcsRecursive(const string & a , const string & b,int n,int m,int count){

    if(n == 0 || m == 0){
        return count;
    }
    if(a[n] == b[m]){
        count = lcsRecursive(a,b,n,m,count + 1);
    }

    count = max(count , max(lcsRecursive(a,b,n,m,0), lcsRecursive(a,b,n,m,0))); 

    return count;
    
}

// int lcsTopDown(const string & a ,const string & b,int n , int m ,int dp[][10]){

//     if(n == 0 || m == 0){
//         return dp[n][m];
//     }

//     if(dp[n-1][m-1] != -1 ){
//         return dp[n-1][m-1];
//     }

//     if(a[n-1] == b[m-1]){
//         dp[n-1][m-1] = 1 + lcsRecursive(a,b,n-1,m-1,dp);
//     }

//     dp[n][m] = max(dp[n][m] , max(lcsRecursive(a,b,n-1,m,0), lcsRecursive(a,b,n,m-1,0))); 


//     return dp[n][m];
// }


string lcs(string a , string b , int n ,int m){

    int dp[10][10];
    memset(dp,0,sizeof(dp));

    int maxLen = 0;
    int endingIndex = 0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<m;j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;

                if(dp[i][j] > maxLen){
                    maxLen = dp[i][j];
                    endingIndex = i;
                }
            }

        }
    }

    return a.substr(endingIndex - maxLen ,maxLen);
}
int main()
{
    int dp[10][10];
    memset(dp, -1 , sizeof(dp));
    string a = "abcdxyz";
    string b = "dxyzabcd";
    int count = 0;
    // cout<<"Longest Common Substring Recursive : "<<lcsRecursive(a,b,a.size(),b.size(),count);
    cout<<"Longest Common Substring Memoized : "<<lcs(a,b,a.size(),b.size());


}