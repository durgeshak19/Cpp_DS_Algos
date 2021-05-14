#include<bits/stdc++.h>
using namespace std;
// #define int long long int
#define mp(a,b) make_pair(a,b)
#define vi vector<int>
#define mii map<int,int>
#define mpi map<pair<int,int>,int>
#define vp vector<pair<int,int> >
#define pb(a) push_back(a)
#define fr(i,a,n) for(int i=a;i<n;i++)
#define rep(i,a,n) for(i=a;i<n;i++)
#define F first
#define S second
#define endl "\n"
#define fast std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define dom 998244353
#define pi 3.14159265
#define sl(a) (int)a.length()
#define sz(a) (int)a.size()
#define all(a) a.begin(),a.end()
#define pii pair<int,int> 

void solve()
{ 
    int n,k,i,j,s,w,c,u[179],a;
    
    for(cin>>n>>k;i<k;i++){
    for(j=0,c=0,cin>>a;c<=a%(n-i);j++)
    w=(s+j)%n,c+=!u[w];
    cout<<w+1<<" ";
    u[w]=1;
    s=(w+1)%n;
    }
    
}

signed main()
{
#ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
  
#endif 
    // int t;
    // cin>>t;
    // while(t--)
    {
        solve();   
    }

    return 0;
} 