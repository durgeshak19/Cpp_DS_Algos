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

    ll n ,m ,k;
    cin>>n>>m>>k;

    ll a[n];
    ll b[m];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }

    sort(a ,a+n);
    sort(b , b+m);

    //if the apartmenet has been alloted dont allot it again
    //binary search from 1 next to the last value
    //find lower bound for max efficieny
    //if bs cant find move on to next element; 
    //keep count
    
    ll i=0, j=0 , count = 0;
    while( i<n && j<m){

        if(abs(a[i] - b[j]) <=k){
            ++i,++j;
            ++count;
        }
        else{
            if(a[i] - b[j] > k){
                ++j;
            }
            else{
                ++i;
            }
        }

    }
    cout<<count;
}