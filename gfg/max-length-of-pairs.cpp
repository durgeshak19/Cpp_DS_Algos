#include<bits/stdc++.h>
using namespace std;

int maxChainLength(vector<pair<int,int>> & arr,int i ,int n){
    if(i  < 0){ return 0;}
    if(n <= 1){
        return 0;
    }
    if( arr[n-1].first > arr[i-1].second){
        return 1 + maxChainLength(arr ,i-1 ,  n-1);
    }

    else{
        return max(maxChainLength(arr, i-1 , n) , maxChainLength(arr, i-1, n-1));
    }
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);   
	freopen("output.txt", "w", stdout);
#endif

    vector<pair<int, int>> arr = { {5, 24}, {15, 25}, {27, 40}, {50, 60} };
    // vector<pair<int, int>> arr = {{5, 24}, {39, 60}, {15, 28}, {27, 40}, {50, 90} };

    cout<<maxChainLength(arr ,arr.size()-1, arr.size());

}