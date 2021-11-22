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
        ll n;
        cin>>n;
        ll arr[n];

        ll sum = 0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        ll avg = sum / n;
        ll flag = sum%n;
        if(flag > 0){
            cout<<"-1\n";
            continue;
        }
        
        ll count = 0;
        for(ll i=0;i<n;i++){
            if(arr[i] > avg){
                count++;
            }
        }
        cout<<count<<"\n";
        
        
    }
}