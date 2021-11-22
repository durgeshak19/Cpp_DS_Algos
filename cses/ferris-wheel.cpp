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

    ll n , x;
    cin>>n>>x;

    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr , arr + n);

    ll i= 0;
    ll j = n-1;
    ll count = 0;

    while(i<=j){
        if(arr[i] + arr[j] <= x){
            ++i,--j;
            ++count;
        }
        else{
            --j;
            count++;
        }
    }
    if(i==j){
        count++;
    }
    cout<<count ;
}