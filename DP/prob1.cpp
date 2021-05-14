#include<bits/stdc++.h>
using namespace std;

// recursive
int func(int n)
{
    if(n == 0 || n==1)
        return 2;
    int sum  = 0;
    for(int i=1;i<n;i++)
        sum += 2*func(i)*func(i-1);

    return sum;
}

//memory efficient approach
int funct(int n)
{
    vector<int> v(n+1);
    v[0] = 2;
    v[1] = 2;

    for(int i=2;i<=n;i++)
    {
        v[i] =0;
        for(int j=1;j<i;j++)
            v[i] += 2*v[j]*v[j-1]; 
    }
    return v[n];
}

//more efficient approach
int funcx(int n)
{
    vector<int> v(n+1);
    v[0] = 2;
    v[1] = 2;
    v[2] = 2*v[1]*v[0];
    for(int i=3;i<=n;i++)
    {
        v[i] = v[i-1] +2*v[i-1]*v[i-2]; 
    }
    return v[n];
}

int main()
{
    for(int i=0;i<6;i++)
        cout<<func(i)<<" ";
    
    cout<<"\n-----\n ";
    for(int i=0;i<6;i++)
        cout<<funct(i)<<" ";
    
    cout<<"\n-----\n ";
    for(int i=0;i<6;i++)
        cout<<funcx(i)<<" ";
    
}