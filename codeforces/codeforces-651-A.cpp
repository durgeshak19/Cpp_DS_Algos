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
        if(n == 1){
            cout<<"1"<<endl;
        }
        else
        cout<< n/2<<endl;
    }
}