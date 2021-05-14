#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

void printArray(vector<int> &A,int a,int b)
{
    cout<<"Continuos Subarray : ";
    FOR(i,a,b+1)
    cout<<A[i]<<" ";
    cout<<endl;
}
pair<int,int> continuousSubarray(vector<int>& nums) 
{

    int j=0, k=0, l=0;
    FOR(i,0,nums.size()-1)
    {
        if(l==0 && nums[i]>nums[i+1])
        {
            j=i ;
            k=i+1 ;
            l=1; 
        }
        else if(nums[i]>nums[i+1]) 
            k=i+1;
    }
    if(k==0&&j==0)
        return make_pair(0,0);
    int b =  *min_element(nums.begin()+j,nums.begin()+k+1);  
    
    FOR(i,0,j) 
        if(nums[i]>b) 
        {
            j=i ;
            break;
        }
    int a= *max_element(nums.begin()+j,nums.begin()+k+1);
    for(int i=nums.size()-1;i>k;i--)
        if(nums[i]<a)
        { 
            k=i ;
            break;
        }
        
    return make_pair(j,k);
        
}

int main()
{
    vector<int> nums1 = {1,2,3,0,4,6};
    vector<int> nums2 = {1,3,2,7,5,6,4,8};
    pair<int,int> p ;
    p = continuousSubarray(nums1);
   // cout<<p.first<<endl;
    //cout<<p.second<<endl;
    printArray(nums1,p.first,p.second);
    p=continuousSubarray(nums2);
    printArray(nums2,p.first,p.second);
    return 0;
}