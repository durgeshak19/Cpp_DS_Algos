#include<bits/stdc++.h>
using namespace std;

//

//  0 0 0 
//  1 0 1
//  1 0 0
// all 8 directions it can  x and y
// 1 1 
// 0  1 1
//1
/// all the way down todepth
//  visited = 0 // not visited
// 1 = visited
// i + next_i , j+next_j
vector<vector<int>> dir = {{1,1}, {1,0},{0,1},{-1,-1},{-1,1} ,{1,-1},{-1,0} ,{0,-1}};

bool visited[100][100];
bool isSafe(vector<vector<int>> mat , int i ,int j ,int n ,int m){

    if(i>=0 && i<n && j>=0 && j<m && !visited[i][j] ){
        return true;
    } 
    return false;

}

void depth_first_search(vector<vector<int>> mat ,int i ,int j ,int n ,int m){

    visited[i][j] = 1;
    for(int w = 0;w<8;w++){
        if(isSafe(mat ,i+ dir[w][0] , j + dir[w][1], n , m) && mat[i][j]){
            depth_first_search(mat , i+ dir[w][0] , j + dir[w][1], n , m)       ;
        }
    }


}
int countIslands(vector<vector<int>> mat){

    int n = mat.size();
    int m = mat[0].size();

    memset(visited, 0 ,sizeof(visited));
    
    int c = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] && !visited[i][j]){
                depth_first_search(mat , i, j,n,m );
                c++;
            }
        }
    }
    return c;
}


int main(){

    vector<vector<int>> v = {{1,0,1} , {0,0,0} ,{0,0,0} };
    cout<<countIslands(v);
}