#include<bits/stdc++.h>
using namespace std;


bool subsetSum(vector<int> &arr,int n , int sum){

    if(sum == 0){
        return true;
    }
    if(n == 0 && sum!=0){
        return false;
    }

    if(arr[n-1] > sum){
        return subsetSum(arr , n -1 , sum);
    }

    else 
    return subsetSum(arr , n-1 , sum - arr[n-1]) || subsetSum(arr, n-1, sum);

    // return false;
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {1, 5,12, 11, 5};
    int sum = 0;
    for(auto n : arr){
        sum += n;
    }
    if(sum%2 !=0){
        cout<< "false";
        return 0;
    }
    bool flag = subsetSum(arr , arr.size()-1 , sum/2);
    cout<<(flag?"true":"false");
}