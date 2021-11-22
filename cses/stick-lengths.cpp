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
    ll n ;
    cin>>n;

    ll arr[n];
    ll sum =0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr , arr +n);
    ll median = arr[n/2];
    for(ll i=0;i<n;i++){
        sum += abs(arr[i] - median);
    }
    
    cout<<sum;

}