#include<bits/stdc++.h>
using namespace std;


void minToYears(int n)
{
    //1 day = 24hrs 1hr = 60 min 1year = 24*60*365
    
    int hours = n/60;
    int days = hours/24;
    int years = days/365;
    int remainingDays = days%365;
    cout<<"\n"<<n<<" minutes is approximately "<<years<<" years and "<<remainingDays<<" days"<<endl;
}
int main()
{   
    int n;
    n=3456789; 
    //cin>>n;
    minToYears(n);
    return 0;
}