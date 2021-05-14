#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mp(a,b) make_pair(a,b)
#define vi vector<int>
#define mii map<int,int>
#define mpi map<pair<int,int>,int>
#define vp vector<pair<int,int> >
#define pb(a) push_back(a)
#define fr(i,n) for(i=0;i<n;i++)
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
    int n,k,i;
    cin>>n>>k;

    vector<int> a(n);
    pii p[n];

    fr(i,n)
        cin>>a[i];
    
    fr(i,n)
    {
        if(i)
        {
            p[i].F = max((p[i-1].F) + 1 -k, a[i]);
            p[i].S = min(a[i]+k-1,(p[i-1].S) + k-1);

            if(p[i].F > p[i].S)
            {
                cout<<"NO"<<endl;
                return;
            }
            else
                p[i] = mp(a[i] , a[i]);
        }
    }

    if(p[i-1].F > a[i-1])
    {
        cout<<"NO"<<endl;
        return ;
    }

    cout<<"YES"<<endl;
}

signed main()
{

#ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
  
#endif 
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}