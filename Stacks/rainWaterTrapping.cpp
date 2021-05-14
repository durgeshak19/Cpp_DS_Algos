#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
    for(auto n: v)
        cout<<n<<" ";
    cout<<"\n";
}

vector<int> greatestToRight(vector<int> &v)
{
    int n = v.size();
    vector<int> res(n);
    res[n-1] = v[n-1];
    for(int i = n-2 ;i>=0 ;i--)
        res[i] = max(res[i+1] , v[i]);
    return res;
}


vector<int> greatestToLeft(vector<int> &v)
{
    int n = v.size();

    vector<int> res(n);
    res[0] = v[0];
    for(int i=1;i<n;i++)
    {
        res[i] = max(res[i-1] , v[i]);
    }
    return res;
    
    
}

void rainWaterTrapping(vector<int> &v)
{
    // total area = sum (min ( max to the right , max to the left) - height column)

    vector<int> max_right = greatestToRight(v);
    vector<int> max_left = greatestToLeft(v);

    int sum = 0;

    int n = v.size();
    for(int i= 0;i<n;i++)
    {
        sum += min(max_right[i] , max_left[i]) - v[i];
    }
    cout<<sum<<"\n";

}


int main()
{
    vector<int> v ={3,0,0,2,0,4};
    rainWaterTrapping(v);
}