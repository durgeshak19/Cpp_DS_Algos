#include<bits/stdc++.h>
using namespace std;
#define int long long int
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

int solve(vector<int> &a)
{
    int n = a.size() ;
    vector<int> rightMax(n,0);
    for(int i=n-2 ; i>=0;i--)
    {
        int mx = max(rightMax[i+1] , a[i+1]);
        if(mx>a[i])
            rightMax[i] = mx;

    }
    int ans =0;
    set<int> s;
    s.insert(a[0]);
    fr(i,1,n-1)
    {
        s.insert(a[i]);
        if(rightMax[i]!=0)
        {
            auto itr = s.find(a[i]);
            if(itr!=s.begin())
            {
                ans = max(ans , (a[i] + (*(--itr)) +rightMax[i]));
            }

        }
    }
}

signed main()
{

#ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
  //  freopen("input.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    //freopen("output.txt", "w", stdout); 
  
#endif 
    //int t;
    //cin>>t;
    //while(t--)
    {   
        vector<int> a ={};
        solve(a);
    }

    return 0;
} 