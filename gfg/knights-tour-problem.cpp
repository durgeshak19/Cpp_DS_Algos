#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{1,2} ,{2,1}, {-1,2}, {-2,1}, {-1,-2}, {-2,-1}, {1,-2}, {2,-1}};
vector<vector<int>> pos(16 , vector<int>(16)) ;

bool isValid(int i , int j,int k){
    return (i>=1 && i<=k && j>=1 && j<=k && pos[i][j] == false);
}
void print(vector<vector<int>> &mat, int k){
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int knightsTour(vector<vector<int>> & res, int i ,int j , int n , int & count){

    if(i == n && j == n){
        return 1;
    }
    int flag = 0;

    for(int i=0;i<8;i++){
        int new_i = i+dir[i].first;
        int new_j = i+dir[i].second;
        if(isValid(new_i,new_j,n)){
            pos[new_i][new_j] = true;
            flag = knightsTour(res, new_i,new_j, n ,count);
        }
        if(flag == false){
            pos[new_i][new_j] = 0;
        }
    }

    return flag;
}

int knightsTourbackTrack(vector)
int main(){ 

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);   
	freopen("output.txt", "w", stdout);
#endif
    int k= 8;
    vector<vector<int>> res (k+1 , vector<int>(k+1));
    int i = 1;
    int j = 1;
    int count = 0;
    knightsTour(res , i ,j ,k,count );
    print(res,k+1);
}