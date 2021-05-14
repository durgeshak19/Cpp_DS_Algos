#include<bits/stdc++.h>
using namespace std;

int isArraySorted(vector<int> &A ,int n)
{
    if(n == 1)
        return 1;
    return A[n-1] < A[n-2] ? 0 :isArraySorted(A,n-1); 
}
int main()
{
    vector<int> A = { 1,2,3,4,5,6};

    vector<int> B = { 1,22,3,4,5,6};
    
    cout<<isArraySorted(A,6);
    cout<<endl;
    cout<<isArraySorted(B,6);
}