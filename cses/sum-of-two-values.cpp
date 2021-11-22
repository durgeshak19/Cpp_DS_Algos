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
    ll n , k;
    cin>>n>>k;

    vector<pair<int,int>> v;

    ll a;
    for(ll i=0;i<n;i++){
        cin>>a;
        v.push_back({a,i+1});
    }

    sort(v.begin(),v.end());

    ll i=0,j=n-1;   
    while(i<j){
        ll x = v[i].first + v[j].first ;
        if (x == k){
            cout<<v[i].second<<" "<<v[j].second;
            return 0;
        }
        else if(x>k){
            j--;
        }
        else i++;
    }

    cout<<"IMPOSSIBLE";



}