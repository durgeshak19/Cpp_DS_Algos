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
        int n;
        cin>>n;
        int x = 0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            x^=i;
        }
        x^=n;
        // cout<<x<<endl;
        int y;
        y = arr[0];
        for(int i=1;i<n;i++){
            y^=arr[i];
        }
        
        cout<<(y^x)<<endl;
    }
}