#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{0,1} ,{1,0} , {1,1}};

int knapsack_0_1(vector<int> & wt, vector<int> &val, int n , int W) 
{
 
    // Base Case
    if (n == 0 || W == 0)
        return 0;
 
    if (wt[n - 1] > W)
        return knapsack_0_1( wt, val, n - 1,W);
 
    else
        return max(
            val[n - 1]
                + knapsack_0_1(wt , val , n -1 ,W - wt[n - 1]),
            knapsack_0_1( wt, val, n - 1, W));
}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    vector<int> wt = { 100 ,60 ,120};
    vector<int> val = {20,10,30};
    vector<vector<int>> arr(wt.size()) ;

    for(int i=0;i<wt.size();i++){
        arr[i].push_back(wt[i] / val[i]);
        arr[i].push_back(wt[i]);
        arr[i].push_back(val[i]);
    } 

    sort(arr.begin(), arr.end());

    for(int i=0;i<wt.size();i++){
        wt[i] = arr[i][1];
        val[i] = arr[i][2];
        cout<<val[i]<<" "<<wt[i]<<endl;

    } 

    int W= 50;
    cout<<knapsack_0_1(wt ,val,val.size(), W);

}