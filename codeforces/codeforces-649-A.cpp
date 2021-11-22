#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t; 
    cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       ll arr[n];
       for(ll i =0;i<n;i++){
           cin>>arr[i];
       }
       ll index1 = -1 , index2 = -1; 
       for(ll i =0;i<n;i++){
           if(arr[i]%k == 0)
           {
               index1 = i;
               break;
           }
       }

        for(ll i =n-1;i>=0;i--){
           if(arr[i]%k == 0)
           {
               index2 = i;
               break;
           }
        }
        if(index1 == -1)
        cout<<"-1\n";
        else cout<<index2-index1 + 1<<endl;

    }
}