#include<iostream>

int bruteForceStringMatch(int T[] , int n , int P[],int m)
{
    for(int i=0;i<=n-m ;i++)
    {
        int j=0;
        while(j<m && P[j] == T[i+j])
            j +=1;
        if(j==m)
            return 1;
    }
    return 0;
}
