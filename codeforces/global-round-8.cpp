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
        ll a,b,k;
        cin>>a>>b>>k;
        ll count = 0;
        if(a>k || b>k)
            return 0;
        while(max(a,b)<=k){
            if(a<b)
                a+=b;
            else    
                b+=a;

            count++;
        }
        cout<<count<<"\n";
    }
}