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

    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    ll curr_sum = arr[0]  ;
    ll max_sum = arr[0];

    for(ll i=1;i<n;i++){
        
        if(curr_sum <0){
            curr_sum = 0;
        }
        curr_sum = curr_sum +arr[i];
        max_sum = max(curr_sum,max_sum);
    }

    // if(max_sum < 0){
    //     cout<<"0";   
    // }
    cout<<max_sum;


}