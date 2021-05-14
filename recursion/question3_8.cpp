#include<bits/stdc++.h>
using namespace std;


int G(int n, int a ,int b)
{
    if(n == 0)
        return a;
    else
        return G(n-1,b,a+b);
}

void F()
{
    int N = 10;
    for(int i=0;i<N;i++)
        cout<<G(i,0,1)<<endl;
}
int main()
{
    F();
}