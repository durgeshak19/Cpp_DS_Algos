#include<bits/stdc++.h>
using namespace std;
vector<char> res;

int digitroot(int n)
{
    if(n<10)
        return n;
    
    int sum = 0;
    while(n)
    {
        sum += n%10;
        n/=10;
    }
    return digitroot(sum);
}

int main()
{
    int n = 1969;
    
        cout<<digitroot(n)<<endl;
}