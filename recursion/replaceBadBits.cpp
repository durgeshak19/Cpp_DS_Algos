#include<bits/stdc++.h>
using namespace std;
// 
// Given a string pattern of 0s, 1s, and ?s (wildcards), generate all 0-1 strings that
// match this pattern. Sample Input: 1?00?101 Sample Output: 10000101, 10001101,
// 11000101, 11001101
void printx(vector<int>& A)
{
    for(int n:A)
        cout<<n<<" ";
    cout<<endl;
}
void binary(int n,vector<int> A)
{
    if(n==A.size())
        printx(A);
    else if(A[n] == -1){
        A[n] = 0;
        binary(n+1, A);
        A[n] = 1;
        binary(n+1,A);
    }
    else binary(n+1,A);
}

int main()
{
    
    vector<int> v = {1,-1,0,0,-1,1,0,1};
    int n = v.size();
    binary(0,v);

}