#include<bits/stdc++.h>
#define ll long long
#define UL unsigned long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define elif else if
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define mp(a,b) make_pair(a,b)
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
int main(){
    fastio
    int n1,n2;
    cin>>n1>>n2;
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i+=1)
        cin>>a1[i];
    for(int i=0;i<n2;i+=1)
        cin>>a2[i];
    int med = (n1+n2)/2;
    // cout<<med<<endl;
    n1-=1,n2-=1;
    while(n1>=0 && n2>=0 && med>0){
        if(a1[n1]<a2[n2]){
            n1--;
        }
        else
            n2--;
        med--;
    }
    while(n1>=0 && med>0)
        n1--;
    while(n2>=0 && med>0)
        n2--;
    if(n1>=0 && n2>=0){
        cout<<min(a1[n1],a2[n2])<<endl;
    }
    else if(n1>=0)
        cout<<a1[n1]<<endl;
    else
        cout<<a2[n2]<<endl;
}