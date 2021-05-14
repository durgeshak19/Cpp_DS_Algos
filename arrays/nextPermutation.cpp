#include<bits/stdc++.h>
using namespace std;

template<class T>
void printx(vector<T> &v)
{
    // cout<<v.size();
    for(auto s:v)
        cout<<s<<"\n";
        
}
void nextPermutation(vector<int>& nums)
{
    int n = nums.size() - 1;
    int k,i;
    for( k = n-1;k >=0 ;k--)
    {
        if(nums[k] < nums[k+1])
            break;
    }
    
    if(k<0)
        reverse(nums.begin(),nums.end());
    
    else{
        for( i=n ;i>k;i--)
        {
            if(nums[i] > nums[k]){
                swap(nums[i] , nums[k]);
                break;
            }
        }
        reverse(nums.begin() + k+ 1,nums.end());
    }
}


int main()
{
    vector<int> v = { 2,3,6,5,4,1};
    nextPermutation(v);
    printx(v);
}