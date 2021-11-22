#include<bits/stdc++.h>
using namespace std;

int lbs(vector<int> &arr ,int i, int j){


    if( i == j) return 0;

    int count = 0 ;
    int mx = INT_MAX;
    for(int k=0; k<j;k++){
        count += lis(arr, i , k) + lds(arr , k+1 , j);
        mx = max(count , mx); 
    }
    return mx;
}   

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {1, 5, 8, 9, 10, 17, 17, 20};
    cout<<lbs(arr ,0, arr.size());

}