#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, const int & val){
    int low = 0;
    int high = arr.size() -1 ;
    int mid;

    while(low<=high){
        mid = low + (high-low)/2;

        if(arr[mid] == val) return mid;
        else if(arr[mid] < val) return low = mid +1;
        else high = mid-1; 
    }
    return -1;
}



int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);   
	freopen("output.txt", "w", stdout);
#endif

    vector<int> v = {0,1,2,3,4,5,6,7,8,9 };
    vector<int> arr = {2,3,4,5,6};
    cout<<binarySearch(v,5);
    // int val = 8;
    // for(int i=0;i<=9;i++)
    
    //   cout<<i<<" = "<< binarySearch(v,i) <<" = "<<v[i]<<" = "<< binary_search(v.begin(),v.end(),i) <<"\n";
    // cout<<lowerBounds(v,val)<<"\n";
    // cout<<upperBounds(v,val)<<"\n";
}