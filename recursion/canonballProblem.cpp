#include<bits/stdc++.h>
using namespace std;

// N(N+1)(2N+1)/6
int canonBall(int n)
{
    if(n==1 )
        return 1;
    return (n*n) + canonBall(n-1);
}
int main()
{
    cout<<" ";
    int n = 6;
    for(int i =1 ;i<n;i++)
        cout<<"Layer "<<i<<": "<< canonBall(i)<<"\n ";
}
