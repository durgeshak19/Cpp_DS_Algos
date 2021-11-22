#include<bits/stdc++.h>
using namespace std;


void solve(){
    int s1[4];
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int index1 =0 ,index2=0;
    int n = 2;
    for(int i=0;i<4;i++){
        cin>>s1[i];
        if(max1 < s1[i]){
            max2 = max1;
            index2 = index1;
            max1 = s1[i];
            index1 = i;
        }        

    }
    if((index2 < n && index1>= n) ||(index1 < n && index2>= n))
    cout<<"YES";
    else cout<<"NO";
}
int main()
{   int t;
    cin>>t;
    while(t--){
        solve();
    }
}