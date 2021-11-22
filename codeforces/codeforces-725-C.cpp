#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; 
    cin>>t;
    while(t--){

        int n , l ,r;
        cin>>n>>l>>r;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count = 0;

        sort(arr.begin(),arr.end());

        for(int i=0;i<n;i++){
            
        }
        cout<<count<<endl;
    }
}