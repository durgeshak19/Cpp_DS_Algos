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

    ll n ,m ;
    cin>>n>>m;

    ll a[n];    
    ll b[m];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }

    // ll res[m] ;?
    ll res;
    bool isSold[n]= {false};

    ll i= 0;
    ll j=0;
    ll index = -1;
    ll mx = INT_MIN;
    while(j<m){

        for(i=0;i<n;i++){
            if(isSold[i]){
                continue;
            }
            else if(a[i] <= b[j] && a[i] > mx){
                index = i;
                mx = a[i];
            }
            
        }
        if(index != -1){
            isSold[index] = true;
            res = a[index];
        }
        else{
            res = -1;
        }
        index = -1;
        cout<<res<<"\n";

        j++;
        mx = INT_MIN;
    }

    // for(ll i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // for(ll i=0;i<n;i++){
    //     cout<<isSold[i]<<" ";
    // }
    // // cout<<endl;
    // for(ll i=0;i<m;i++){
    //     cout<<res[i]<<"\n";
    // }

}   