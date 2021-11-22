#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{0,1} ,{1,0} , {1,1}};

int MCM(vector<int> & arr , int i,int j ){

    if(i == j)  return 0;
    int k;
    int mn = INT_MAX;
    int count;


    for(k = i ; k<j;k++){
        count = MCM(arr , i , k) + MCM(arr , k+1,j) +  arr[i-1] * arr[k] * arr[j];
    
        if(count<mn)    mn = count;
    }

    return mn;
}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = { 1, 2, 3, 4, 3 };
    cout<<MCM(arr, 0 , arr.size() -1);

}