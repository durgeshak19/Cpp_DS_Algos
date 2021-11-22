#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     ll sum = 0 ,diff = 0 ,n ;
//     cin>>n;
//     ll arr[n] ;
//     cin>>arr[0];
    
//     for(ll i=1;i<n;i++){
//         cin>>arr[i];
//         if(arr[i]<arr[i-1]){
//             diff = arr[i-1] - arr[i];
//             arr[i] += diff;
//             sum += diff; 
//         }
//     }

//     cout<<sum;
// }


int main(){

    ll n;   
    cin>>n;
    ll x;
    cin>>x;
    ll curr_max = x;
    ll count = 0;
    for(int i=1;i<n-1;i++){
        cin>>x ;
        if(curr_max > x)
            count += curr_max - x;
        else{
            curr_max = x;
        }
        
    }
    cin>>x;
    if(curr_max > x){
            count += curr_max - x;

    }

    cout<<count;



}














