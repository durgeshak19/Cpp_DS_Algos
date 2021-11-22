#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int> &arr, int n){

    if(n == 1)
        return 0;
    int res = INT_MAX;
    for(int i=n-2;i>=0;i--){
        if(arr[i] + i >= n-1){
            int sub_res = minJumps(arr , i+1);
            if(sub_res != INT_MAX){
                res = min(sub_res +1 , res);
            }        
        }
        
    }
    return res;
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);   
	freopen("output.txt", "w", stdout);
#endif

    vector<int> v = { 1, 3, 6, 3, 2,3, 6, 8, 9, 5 };
    cout<<minJumps(v, v.size());
}