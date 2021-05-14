#include<bits/stdc++.h>
using namespace std;

struct Point
{
    int x , y;
    Point(int a,int b): x(a) ,y(b){}
};
bool helper(vector<vector<bool>> &maze ,int R, int C, vector<Point>& res)
{
    if(C<0 || R<0 || !maze[R][C])
        return false;

    bool isAtOrigin = (R == 0) & (C ==0); 
    if(isAtOrigin || helper(maze,R-1,C,res) || helper(maze,R,C-1,res) )
    {
        Point p(R,C);
        res.push_back(p);
        return true;
    }
    return false;
}
vector<Point> getPath(vector<vector<bool>> &maze)
{
    int R = maze.size();
    int C = maze[0].size();
    vector<Point> res;
    if(R == 0 || C == 0 )
        return res;
    if(helper(maze,R-1,C-1,res))
        return res;
    return res;
}

