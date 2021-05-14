#include<bits/stdc++.h>
using namespace std;

int LIS(vector<int> &arr , int n)
{
    if(n==1)
        return 1;

    if(arr[n-1] > arr[n-2])
        return 1 + LIS(arr,n-1);
    else
        LIS(arr,n-1);

}