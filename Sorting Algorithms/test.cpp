#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

int main(){
    vector<int> A={10,11,7,10,6};

    int mx = INT_MIN;
    int n =A.size();
    FOR(i,0,n-1)
        FOR(j,i+1,n)
            mx=max(mx,A[j] - A[i]);
     cout<<mx;
}