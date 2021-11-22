#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    ll n;
    cin>>n;
    ll res = 0;
    ll count2=0;
    ll count5=0;
    ll dp[n+1] = {0};
    
    for(ll j = 2;j<=n;j++){
        ll i =j;
        
        while(i!=0){
            if(dp[i]>=0){

            }
            if(i%2 == 0){
                count2++;
                i/=2;
            }
            if(i%5 == 0){
                count5++;
                i/=5;
            }
            i--;
        }
    }

    cout<<min(count2,count5);

}