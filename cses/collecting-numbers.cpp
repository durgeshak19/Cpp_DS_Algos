#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int solve(int *arr , int i , int sum, int *dp){
    if(i < 0){
        return 0;
    }

    if(dp[sum] != -1){
        return dp[i];
    }
    dp[sum] = arr[i] + solve(arr , i-1,sum - arr[i] , dp);
    dp[sum] = solve(arr , i-1,sum , dp);

    return 0;
}
int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    ll n ;
    cin>>n;

    ll arr[n+1];
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
    }
    bool check[n] = {false};
    ll count =0;
    while(count<n){

        for(int i=0;i<n;i++){
            if(check[i] = false){
                
            }
        }


    }

}