#include<bits/stdc++.h>
#define elif else if
using namespace std;

void printArr(vector<int> &v)
{
    for(auto num:v)
        cout<<num<<"    ";
    cout<<endl;
}

// int rodCut(vector<int>& price, int n)
// {
//     if (n == 0)
//         return 0;
 
//     int maxValue = INT_MIN;
 
//      for (int i = 1; i <= n; i++)
//     {
//         int cost = price[i-1] + rodCut(price, n - i);
 
//         if (cost > maxValue)
//             maxValue = cost;
//     }
 
//     return maxValue;
// }

// int rodCutHelper(vector<int>& price,int n,vector<int> dp)
// {
//     if(dp[n]>0)
//         return dp[n];
    
//     int max_val;
//     if(n==0)
//         max_val = 0;
//     else
//     { 
//         max_val= INT_MIN;

//         for(int i=1;i<=n;i++)
//         {
//             int cost = price[i-1] + rodCutHelper(price,n-i,dp);
//             if(cost > max_val)
//                 max_val= cost;
//         }
//     }

//     dp[n] = max_val;
    
//     return dp[n];
// }
// int rodCutDP(vector<int> &price,int n)
// {   
//     vector<int>v(n,0);
//     return rodCutHelper(price,n,v);
    
// }

// vector<int> rodCutBottomUp(vector<int>& price,int n)
// {
//     vector<int> dp(n+1,0);

//     for(int i=1;i<=n;i++)
//     {
//         int max_val = INT_MIN;
//         for(int j=1;j<=i;j++)
//         {
//             max_val = max(max_val , price[j-1] + dp[i-j]);
//         }
//         dp[i] = max_val;
//     }
//     return dp;
// }

// pair<vector<int>,vector<int>> extRodCutBottomUp(vector<int> &price,int n)
// {
//     vector<int> dp(n+1,0);
//     vector<int> s(n+1,0);

//     for(int i=1;i<=n;i++)
//     {
//         int max_val = INT_MIN;
//         for(int j=1;j<=i;j++)
//         {
            
//             if(max_val<price[j-1]+dp[i-j])
//             {
//                 max_val = price[j-1] + dp[i-j];
//                 s[j] = i;
//             }
//         }
//         dp[i] = max_val;
//     }
//     return make_pair(dp,s);
// }

// void printExtended(vector<int> &price,int n)
// {
//     pair<vector<int>,vector<int>> p=extRodCutBottomUp(price,n);
//    while(n>0)
//    {
//        cout<<p.second[n]<<"     ";
//         n-=p.second[n];
//    }
// }

int cutRod(vector<int> &arr, int n)
{
    if(n ==0 )
        return 0;
    int sum = -1;
    for(int i=0;i<n;i++)
        sum += max(sum, arr[i] + cutRod(arr, n-i-1));
    return sum;
}


int main()
{

    vector<int>v = {1,5,8,9,20,17,20};
    //vector<int>dp(v.size(),INT_MAX);
    // vector<int> res = cutRod(v,v.size());
    cout<<cutRod(v,v.size());
    //printArr(res);
    // printExtended(v,v.size());
    //cout<<rodCutDP(v,v.size());
   
}
