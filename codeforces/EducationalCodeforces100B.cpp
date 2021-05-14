#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define ll long long
#define FOR(a,b) for(ll i=a;i<b;i++)

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
        ll n;
        cin>>n;
        ll sum=0,cnt =0;
        ll arr[n];
        FOR(0,n)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(i&2)
                cnt += arr[i] -1;
        }
        if(2*cnt > sum)
        {
            FOR(0,n)
            {
                if(i%2)
                    cout<<"1 ";
                else
                    cout<<arr[i]<<" ";
            }
            cout<<endl;

        }

        else
        {
            
            FOR(0,n)
            {
                if(i%2)
                    cout<<arr[i]<<" ";
                else
                    cout<<"1 ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

}