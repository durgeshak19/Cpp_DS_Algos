#include<bits/stdc++.h>
using namespace std;

void printx(vector<int>& A)
{
    for(int n:A)
        cout<<n<<" ";
    cout<<endl;
}
void binary(int n,vector<int> &A)
{
    if(n<1)
        printx(A);
    else{
        A[n-1] = 0;
        binary(n-1, A);
        A[n-1] = 1;
        binary(n-1,A);
    }
}

int main()
{
    int n = 3;
    vector<int> v(3);
    binary(n,v);

}