#include<bits/stdc++.h>
using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>>& points) 
{
    int n = points.size();
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        v[i] = points[i][0];
    }
    sort(v.begin(),v.end());
    int mx = INT_MIN;
    for(int i=0;i<n-1;i++)
        mx = max(mx, v[i+1] - v[i]);

    return mx;  
}

int main()
{
    vector<vector<int>> v = {{3,1},{9,0} ,{1,0} ,{1,4},{5,3},{8,8}};

    vector<vector<int>> v2 = {{8,7},{9,9},{7,4},{9,7}};
    cout<<maxWidthOfVerticalArea(v)<<endl;
    cout<<maxWidthOfVerticalArea(v2)<<endl;

}