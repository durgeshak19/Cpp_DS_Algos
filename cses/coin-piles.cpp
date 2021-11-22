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

    ll t;
    cin>>t;
    while(t--){

        ll a , b;

        if(2*a < b || 2*b<a)
            cout<<"NO\n";

        else if((a+b) %3 == 0 ){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}