#include<bits/stdc++.h>
using namespace std;

int rodCutMaxProfit(vector<int> &prices , int n){

    if(n <= 0){
        return 0;
    }
    int mx = INT_MIN;

    for(int i=0;i<n;i++)
    mx = max(prices[i] +rodCutMaxProfit(prices , n-i-1 ),mx) ;
    return mx;
}   

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {1, 5, 8, 9, 10, 17, 17, 20};
    cout<<rodCutMaxProfit(arr , arr.size());

}