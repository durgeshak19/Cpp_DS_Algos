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

void solve()
{
    int n ;
    cin>>n;
    int count_5 = n/5;
    int cost =0; 
    cost += count_5*5;
  
    int count_3 = n/3;
    count_3 -= 2*(count_3 /10) ;
    cost += count_3*3;

    int count_2 =n/2;
    count_2 =count_2 - (count_5 / 2) - (count_3/2);
    cost += count_2*2;

    int count_1 = n-count_2-count_3-count_5;

    cost += count_1;
    cout<<cost<<endl;



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