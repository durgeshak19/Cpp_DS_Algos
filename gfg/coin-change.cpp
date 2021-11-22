#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{0,1} ,{1,0} , {1,1}};

int coin_change(vector<int> & arr , int i,int sum){

    if(sum == 0){
        return 1;
    }
    if(i < 0) return 0;
    if(sum<0 && i>=1) return 0;

    return coin_change(arr,i,sum-arr[i]) + coin_change(arr,i-1,sum);
    
}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    vector<int> arr = {1, 2, 3};
    int sum = 4;

    cout<<coin_change(arr, arr.size()-1,sum);

}