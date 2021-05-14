#include<bits/stdc++.h>
using namespace std;


//two contiguous members must not be selected
//let M[i] denotes max sum from 1 to i
// while computing M[i] decison is to select ith element or not
//max{A[i] + M[i-2],M[i-1]} i>2
//A[1] i== 1
//max{A[1] ,A[2]} i==2
int skipValueContiguousSum(vector<int> &A)
{
    int n = A.size();
    int M[n+1];
    M[0] = A[0];
    M[1] = (A[0] > A[1]? A[0] : A[1]);
    for(int i= 2;i<n;i++)
        M[i] = max(M[i-2] + A[i], M[i-1]);
    return M[n-1];
}


// skipping 3 elements

// M(i) = A[i] + A[i-1] + M[i-3];
// A[i] + M[i-2]
// M[i-1]

int main()
{

}
