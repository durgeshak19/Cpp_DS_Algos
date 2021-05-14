#include<bits/stdc++.h>
using namespace std;
#define ll double //
void calcBMI(ll pounds ,ll inches)
{
    ll BMI =(ll)(pounds/pow(inches,2))*703;
    cout<<setprecision(16)<<"\nBody Mass Index is "<<BMI;
}
int main()
{
    ll pounds = 452;
    ll inches = 72;
//    cin>>pound>>inches;
    calcBMI(pounds,inches);
}