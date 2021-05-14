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
        string str;
        cin>>str;

        if(str.size()%2 == 1 || str[str.size()-1] =='(' || str[0] ==')')
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
}