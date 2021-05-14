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

void solve(vector<int> &a , int n)
{
    int s = a.size() ;
    if(n>s)
        cout<<"-1";    
    int sum =0;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int mx = sum;
    int j=n-1;
    for(int i=s-1;i>s-n-1 ;i--)
    {
        mx = max(mx,sum-a[j] +a[i]);
        sum = sum - a[j] +a[i];
        j--;
    }
  cout<<mx;
    
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
        vector<int> a ={-533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322, -667, 673, -336, 141, 711, -747, -132, 547, 644, -338, -243, -963, -141, -277, 741, 529, -222, -684, 35 };
        solve(a,48);
    }

    return 0;
} 