#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
/* Stock price problem changes to  maxSubarray sum problem 
if we transform the given array to reflect the changes 
such that new array is A[i] = arr[i] -arr[i-1]
that way we way saximum subarray would give the starting date 
and ending date to buy and sell stock 

Pseudo code 
FIND-MAX-CROSSING-SUBARRAY(A,low,mid,high)
    left-sum = INT_MIN
    sum = 0
    for i = mid to low
        sum = sum + A[i]
        if sum > left-sum
            left-sum = sum
            max-left = i

    right-sum = INT_MIN
    sum =0
    for j = mid +1 to high 
        sum = sum+A[j]
        if sum > right-sum
            right-sum = sum
            max-right = j

    return (max-left,max-right,left-sum + right-sum)

FIND-MAXIMUM-SUBARRAY(A,low,high)
    if low == high
        return (low,high,A[low]) //base case only one element
    else
        mid = (low+high)/2

    (left-low,left-high,left-sum)=FIND-MAXIMUM-SUBARRAY(A,low,mid)

    (right-low,right-high,right-sum)=FIND-MAXIMUM-SUBARRAY(A,mid+1,high)

    (cross-low,cross-high,cross-sum)=FIND-MAX-CROSSING-SUBARRAY(A,low,mid,high)

    if left-sum >= right-sum and left-sum>=cross-sum
        return (left-low,left-high,left-sum)

    elseif right-sum >= left-sum and right-sum >= cross-sum
        return (right-low, right-high, right-sum)
    else
        return (cross-low, cross-high, cross-sum)
*/

void printArray(vector<int> &A){
    int n = A.size();
    FOR(i,0,n)
    cout<<A[i]<<" ";
    cout<<endl;
}
/*
void maxSubArraySum(vector<int> &A)
{

}*/
int main(){
    
    vector<int> A={10,11,7,10,6};
    printArray(A);
   // maxSubArraySum(A);
    
}