#include<iostream>
using namespace std;
typedef long long ll;

// int main(){
//     ll n;
//     cin>>n;
//     ll sum =0;
//     ll arr[n-1];
//     for(ll i=0;i<n-1;i++){
//         cin>>arr[i];
//         sum += arr[i];
//     }
//     cout<<n*(n+1)/2 - sum;   
// }

int main(){
    long long n;
    cin>>n;

    long long sum = n*(n+1)/2;
    n--;
    while(n){
        int x;
        cin>>x;
        sum -= x; 
        n--;
    }
    cout<<sum;

}