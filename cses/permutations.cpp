#include<iostream>
using namespace std;
typedef long long ll;
// int main(){

//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     ll n ;
//     cin>>n;

//     if(n==3 || n==2){
//         cout<<"NO SOLUTION";
//         return 0;
//     }

//     for(ll i=2;i<=n;i+=2){
//         cout<<i<<" ";
//     }
//     for(ll i=1;i<=n;i+=2){
//         cout<<i<<" ";
//     }

// }


int main(){

    ll n ;
    cin>>n;
    if(n == 3 || n==2) {cout<<"NO SOLUTION"; return 0;}

    for(ll i = 2;i<=n;i+=2) cout<<i<<" ";
    for(ll i = 1;i<=n;i+=2) cout<<i<<" ";

}