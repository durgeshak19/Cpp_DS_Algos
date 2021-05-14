 //#pragma GCC optimize("Ofast")
 //#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
 //#pragma GCC optimize("unroll-loops")
 
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp>
  #include <ext/pb_ds/tree_policy.hpp>
 
  using namespace std;
  using namespace __gnu_pbds;
 
 
    struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
    };
 
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
  typedef tree<int, null_type, less<int>, rb_tree_tag, 
             tree_order_statistics_node_update> 
    newset;
 
 
  #define ll            long long
  #define int           long long
  #define pb            push_back
  #define ppb           pop_back
  #define si            set <ll>
  #define endl          '\n'
  #define F             first
  #define S             second
  #define mii           map<ll ,ll >
  #define umap          unordered_map<long long, long long, custom_hash>
  #define msi           map<string,ll >
  #define rep(i,a,b)    for(ll  i=a;i<b;i++)
  #define all(v)        v.begin(),v.end()
  #define pii           pair<ll ,ll >
  #define vi            vector<ll >
  #define vii           vector<pair<ll , ll > >
  #define sz(x)         (ll )x.size()
  #define sl(x)          (ll )x.length()
  #define mp            make_pair
  #define sp(n)         setprecision(n)<<fixed
  #define spl           " "
  #define mod            998244353
  #define ios            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  const ll hell = (ll)1e9 + 7;
  //const ll inf = 3223372036854775807;
  const double PI = 3.14159265;
 
      
      #define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
      template <typename Arg1>
      void __f(const char* name, Arg1&& arg1){
          std::cerr << name << " : " << arg1 << endl;
      }
      template <typename Arg1, typename... Args>
      void __f(const char* names, Arg1&& arg1, Args&&... args){
          const char* comma = strchr(names + 1, ',');std::cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
      }
 
 
/*-------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};          // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};          // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};   // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1};   // Knights Move
/*------------------------------------------------*/
 
  //#define abc   cin
  //#define qwe   cout
 
  ll power(ll base,ll exp,ll m) {
    ll res=1;
    while(exp>0) {
      if(exp%2==1) res=((res%m)*(base%m));
        base=((base%m)*(base%m));
        exp/=2;}
    return res%m;}
  ll modInverse(ll a, ll m) {   
    return power(a, m-2,m);}
 
 
  //..............Code Begins Here................//
  const ll N = 1e5 + 5;
  ll n,k;
 
  int solve()
  {
    cin>>n;
    ll r[n];
    rep(i,0,n)
      cin>>r[i];
    ll m;
    cin>>m;
    ll b[m];
    rep(i,0,m)
      cin>>b[i];
    ll s=0,ma=0;
    rep(i,0,n)
      {
        s+=r[i];
        ma=max(ma,s);
       }
    ll s2=0,ma2=0;
    rep(i,0,m)
      {
        s2+=b[i];
        ma2=max(ma2,s2);
       }
      cout<<ma+ma2<<endl;
 
  return 0;
  }
 
       
  signed main(){
 
    ios
    
   int test=1;   
 
    cin>>test;
 
    while(test--){
      solve();}
       //   cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;} 