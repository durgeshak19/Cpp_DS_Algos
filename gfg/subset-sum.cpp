#include<bits/stdc++.h>
using namespace std;


void printSubset(vector<int> & arr , int n ){
     for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n ";
}


void subsetSum(vector<int> &arr , vector<int> &res , int target_sum ,int i, int j , int sum){

    if(target_sum == sum){
        printSubset(res , i);
        subsetSum(arr, res, target_sum , i-1 , j+1, sum - arr[j]);
        return;
    }

    else{
        for(int k=j;k<  arr.size();i++){
            res[i] = arr[k];
            subsetSum(arr, res, target_sum,i+1,j+1,sum + arr[i]);
        }
    }

}
int main(){ 

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);   
	freopen("output.txt", "w", stdout);
#endif
    vector<int> res(100);
    vector<int> arr = { 10, 7, 5, 18, 12, 20, 15 };
    subsetSum(arr, res, 35 ,0,0,0);
}