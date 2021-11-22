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

        for(ll i=0;i<n;i++)
            cin>>arr[i];
        bool sum = 0;

        for(ll i=1;i<n;i++){
            if(arr[i-1] <= arr[i]){
                sum = 1;
            }
        }
        cout<<(sum? "YES" : "NO" )<<"\n" ;
    }

}