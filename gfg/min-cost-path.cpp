#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{0,1} ,{1,0} , {1,1}};

int min_cost_path(vector<vector<int>> &mat, int i , int j)
{

    if( i== 0 || j == 0){

        return mat[i][j];
    }
    else 
    return mat[i][j] + min({ min_cost_path(mat, i-1,j-1),min_cost_path(mat, i,j-1),min_cost_path(mat, i-1,j)});
    return 0;
}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    vector<vector<int>> v = { { 1, 2, 3 },
                              { 4, 8, 2 },
                              { 1, 5, 3 } };

    cout<<min_cost_path(v,2,2);
}