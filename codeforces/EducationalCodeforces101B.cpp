#include<bits/stdc++.h>
using namespace std;
#define FOR(a,b) for(int i=a;i<b;i++)
#define arrInsert(m)  int m ;cin>>m;vector<int> b(m);FOR(0,m) cin>>b[i];

int main()
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
        int n, m;

        cin>>n;
        vector<int> r(n);
        FOR(0,n)
            cin>>r[i];

        cin>>m;
        vector<int> b(m);
        FOR(0,m)
            cin>>b[i];

        int x =0, mx =0 ;

        FOR(0,n)
        {
            x+=r[i];
            mx=max(mx,x);
        }


        int y = 0, my =0;
        FOR(0,m)
        {
            y+=b[i];
            my=max(my,y);
        }

        cout<<mx+my<<endl;
    }
}