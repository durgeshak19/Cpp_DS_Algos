#include<iostream>
using namespace std;
typedef long long ll; 
int main(){

ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    ll n ;
    cin>>n; 
   for(ll i =1;i<=n;i++){
       ll totalPos = (i*i -1)*(i*i)/2;
       ll attackPos = 4*(i-1)*(i-2);
       cout<<totalPos - attackPos<<"\n";
   }
    return 0;
}