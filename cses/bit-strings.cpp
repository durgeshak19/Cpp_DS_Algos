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

    ll n;
    cin>>n;
    ll res = 1;
    for(ll i=1;i<=n;i++){
        res *= 2;
        res %= 1000000007;
    }
    cout<< res;

}