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
        string str;
        cin>>str;

        string res="";
        res += str[0]; 
        res += str[1];

        for(int i=3;i<str.size();i+=2){
            res += str[i];    
        }
        
        cout<<res<<endl;

    }
}