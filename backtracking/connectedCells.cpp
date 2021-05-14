#include<bits/stdc++.h>
using namespace std;

// Finding the length of connected cells of 1s (regions) in an matrix of 0s and
// 1s: Given a matrix, each of which may be 1 or 0. The filled cells that are connected form a
// region. Two cells are said to be connected if they are adjacent to each other horizontally,
// vertically or diagonally. There may be several regions in the matrix. How do you find the
// largest region (in terms of number of cells) in the matrix?
void printx(vector<int>& A)
{
    for(int n:A)
        cout<<n<<" ";
    cout<<endl;

}


int getVal(vector<vector<int>> &A, int i ,int j ,int R, int C)
{
    if(i<0 || i>= R || j<0 || j>=C)
        return 0;
    else
        return A[i][j];
}


void  findMaxBlock(vector<vector<int>> &A, int i,int j,int R,int C,int size ,vector<vector<bool>> &cntArr,int &maxSize)
{
    if(i >= R || j>=C)
        return ;
    cntArr[i][j] = true;
    size++;

    if(size>maxSize)
        maxSize = size;
    
    vector<vector<int>> direction = {{-1,-1} , {-1,0} ,{0,-1},{1,1} ,{1,0} ,{0,1} ,{1,-1} ,{-1,1}};

    for(int k = 0;k<8;k++)
    {
        int newi = i+direction[k][0];
        int newj = j+direction[k][1];

        int val = getVal(A,newi,newj,R,C);

        if(val > 0 &&(cntArr[newi][newj] == false))
        {
            findMaxBlock(A,newi,newj,R,C,size,cntArr,maxSize);
        }

    }
    // cntArr[i][j] == false;
}

int getMaxOnes(vector<vector<int>> &A , int R , int C)
{
    int maxSize = 0;
    int size = 0;
    vector<vector<bool>> cntArr(R,vector<bool>(C));

    for(int i = 0 ;i<R; i++ ){
        for(int j = 0; j<C; j++){
            if(A[i][j] == 1 && cntArr[i][j] == false)
                findMaxBlock(A,i,j,R,C,0,cntArr,maxSize);
        }
    } 
    return maxSize;
}
int main()
{
    
    vector<vector<int>> A = {{1,1,0,0,0} , {0,1,1,0,0} ,{0,0,1,0,1} ,{1,0,0,0,1} ,{0,1,0,1,1}};
    int n = A.size();
    int m = A[0].size();

    cout<<getMaxOnes(A,n,m);

}