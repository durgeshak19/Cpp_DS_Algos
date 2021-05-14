#include<bits/stdc++.h>
using namespace std;

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
        int a,b,c,sum=0;
        cin>>a>>b>>c;
        sum = a+b+c;
        int rem = sum%9;
        if(rem == 0)
        {
            rem =sum/ 9; 
            if(rem<=min({a,b,c}))
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
            cout<<"No\n";
    }

}