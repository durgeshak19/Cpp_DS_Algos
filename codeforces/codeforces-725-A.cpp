#include<bits/stdc++.h>
using namespace std;
// typedef long long int;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; 
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int arr[n];
        int mn = 1000, mx = -1000;
        int mni = 0, mxi =0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i =0;i<n;i++){

            if(mn>arr[i]){
                mn = arr[i];
                mni = i;
            }

            else if(mx<arr[i]){
                mx = arr[i];
                mxi = i;
            }
        }
        int side = min({mni,mxi,n-mni-1,n-mxi-1}) + 1;
        int sidemin = min({mni,n-mni-1}) + 1;
        int sidemax = min({mxi,n-mxi-1}) + 1;
        int res = min({sidemax,sidemin}) ;
        int val = abs(mxi-mni);
        int x = min (res,val);
        cout<<x + side<<endl;       
    }
}