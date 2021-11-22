#include<bits/stdc++.h>
using namespace std;

void printx(vector<int>& v)
{
    for(auto n:v)
        cout<<n<<" ";
    cout<<"\n";
}

vector<int> nearestSmallestToLeft(vector<int> &v)
{
    int n = v.size();
    stack<pair<int,int>> stk;
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        int ele = v[i];

        if(stk.empty())
            res.push_back(-1);
        else if(stk.top().first >= ele ){
                res.push_back(stk.top().second);
        }
        else if(stk.top().first < ele)
        {
            while(!stk.empty() && stk.top().first > ele)
                stk.pop();
            
            if(stk.empty())
                res.push_back(-1);
            else
                res.push_back(stk.top().second);
        }

        stk.push({ele , i});
    }

    // for(int i =0 ;i<n;i++)
    //     res[i] = i - res[i];
    printx(res);
    return res;
}

vector<int> nearestSmallestToRight(vector<int> &v)
{
    int n = v.size();
    stack<pair<int,int>> stk;
    vector<int> res;

    for(int i=n-1;i>= 0 ;i--)
    {
        int ele = v[i];

        if(stk.empty())
            res.push_back(n);
        else if(stk.top().first >= ele)
            res.push_back(stk.top().second);
        else if(stk.top().first < ele)
        {
            while(!stk.empty() && stk.top().first > ele)
                stk.pop();
            if(stk.empty())
                res.push_back(i);
            else
                res.push_back(stk.top().second);
        }
        stk.push({ele , i });
    }

    reverse(res.begin(),res.end());
    // for(int i =0 ;i<n;i++)
    //     res[i] =  res[i] ;
    
    printx(res);
    return res;
}
void maxAreaHistogram(vector<int> &v)
{
    int n = v.size();
    //area = height * width;
    // height = min(nextSmallerToLeft , nextSmallerToRight)
    //width = position (NSR) - positon(NSL) 
    // area[i] =
    vector<int> right = nearestSmallestToRight(v);
    vector<int> left = nearestSmallestToLeft(v);
    
    
    vector<int> width(n);
    vector<int> area(n);
    int mx = INT_MIN;
    for(int i =0 ;i<n;i++){
        width[i] = right[i] - left[i]+1;
        area[i] = v[i] * width[i];
        mx = max(area[i] , mx);
    }

    cout<<mx;
}

int main()
{
    vector<int> v = {6,2,5,4,5,1,6};
    maxAreaHistogram(v);
}