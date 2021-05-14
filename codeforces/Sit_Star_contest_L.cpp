#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mp(a,b) make_pair(a,b)
#define vi vector<int>
#define mii map<int,int>
#define mpi map<pair<int,int>,int>
#define vp vector<pair<int,int> >
#define pb(a) push_back(a)
#define fr(i,n) for(int i=0;i<n;i++)
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

void generateAllBinaryStrings(int n, vector<int> &v, int i,vector<vector<int>> &ans) 
{ 
    if (i == n) { 
        if(v[n-1] == 2)
            ans.push_back(v);   
        return; 
    } 
  
    v[i] = 1; 
    generateAllBinaryStrings(n,v, i + 1,ans); 
    v[i] = 2; 
    generateAllBinaryStrings(n,v, i + 1,ans); 
} 
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    vector<vector<int>> ans;

    int x = pow(2,n);
    
    generateAllBinaryStrings(n,v,0,ans);
    
    
    int number = 0;
    for(int i=0;i<ans.size();i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            number = number*10 +ans[i][j];
        }
        if(x%number == 0)
            cout<< number<<endl;
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
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}