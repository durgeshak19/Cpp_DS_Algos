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

long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
        return b; 
    else if (b == 0) 
        return a; 
    if (a < b) 
        return gcd(a, b % a); 
    else
        return gcd(b, a % b); 
} 
  

void solve()
{
    double number ;
    cin>>number;
    double intVal = floor(number); 
  
    // Fetch fractional part of the decimal 
    double fVal = number - intVal; 
    intVal = (long long) floor(number);
    // Consider precision value to 
    // convert fractional part to 
    // integral equivalent 
    const long pVal = 1000000000; 
  
    // Calculate GCD of integral 
    // equivalent of fractional 
    // part and precision value 
    long long gcdVal 
        = gcd(round(fVal * pVal), pVal); 
  
    // Calculate num and deno 
    long long num 
        = round(fVal * pVal) / gcdVal; 
    long long deno = pVal / gcdVal; 
    cout<<intVal<<" ";
    // Print the fraction 
    cout << (num)
         << "/" << deno << endl;
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