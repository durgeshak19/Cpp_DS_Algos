#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int count =0 ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] %2 ==0 )
            count++;
    }
    int c =0 ;
    for(int i=0;i<n-1;i++){
        if(arr[i]%2 !=0){
            for(int j=i+1;i<n;j++){
                if(arr[i] %2!=0){
                    if(arr[i] %arr[j] ==0 || arr[j] %arr[i] == 0){
                        c++;
                    }
                }
            }
        }
    }
    int sum = 0;
    for(int i=1;i<count;i++){
        sum+=n-i;
    
    cout<<sum+c;
}
int main()
{   int t;
    cin>>t;
    while(t--){
        solve();
    }
}