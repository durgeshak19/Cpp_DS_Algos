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

//1 2 3 4 7
//3 2 7 4 1 = 17
    ll n ;
    cin>>n;
    ll mn = 10000; 
    ll arr[n];
    ll sum = 0;

    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr, arr+n);

    ll i =0;
    ll j = n-1;

    ll mn1 = 1000000007;
    ll mn2 = 1000000007;
    ll rem1 = 0;
    ll rem2 = 0;
    
    while(i<j){

        ll res1 = sum - arr[i];
        ll res2 = sum - arr[j];

        rem1 += arr[i];
        rem2 += arr[j];

        mn1 = min(mn1, abs(res1 - rem1));
        mn2 = min(mn2, abs(rem2 - res2));

    }

    cout<<sum;


}