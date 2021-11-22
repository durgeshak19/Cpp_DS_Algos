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

    vector<pair<ll,ll>> v;

    for(ll i =0;i<n;i++){
        ll a ,b;
        cin>>a>>b;
        v.push_back({b,a});
    }

    sort(v.begin(),v.end());

        // for(ll i =0;i<n;i++){
        
        //     cout<<v[i].first << " "<<v[i].second<<endl;
        // }

    ll curr = v[0].first;
    ll ans = 1;
    for(ll i=1;i<n;i++){
        if(v[i].second >= curr){
            curr = v[i].first;
            ans++;
        }
    }
    cout<<ans;

}