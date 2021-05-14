#include<bits/stdc++.h>
using namespace std;

int updateBits(int n ,int m,int i,int j)
{
    int allOnes = ~0;
    int left = allOnes <<j+1;
    int right = ((1<<i) - 1);

    int mask = left | right;
    int n_cleared = n & mask ;
    int m_shifted = m<<i;
    return n_cleared | m_shifted ;
}

int updateBits1(int n , int m ,int i, int j)
{
    m = m<<j+1;
    int mask = j-i+1;
    mask = mask<<i;
    n = n | mask;
    n = n & m;
    return n;
}

int main()
{
    int res = updateBits(0b10000000000, 0b10011, 2, 6);
    cout<< (res)<<endl;

    int result = updateBits1(0b10000000000, 0b10011, 2, 6);
    cout<< (result);
}