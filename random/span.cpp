#include<bits/stdc++.h>
using namespace std;

// {110, 120, 105, 100, 115, 125, 102};
//  0   1    2      3   4   5       6 
//  0  1     1      1  3    5        0      5
// 


vector<int> spanstock(vector<int> &arr){
    vector<int> res;
    int j =0;
    int n = arr.size()-1;
    for(int i = arr.size()-1 ;i>=0 ;i--){
        for( j = i-1;j>=0 ;j--){
            if(arr[j] > arr[i]){
                break;
            }
        }

                res.push_back(abs(i-j));         

    }
    reverse(res.begin() , res.end());
    return res;
}
vector<int> span(vector<int> &arr){
    vector<int> res;
    stack<int> stk;
    stk.push(1);
    int n = arr.size();
    for(int i=1;i<n;i++){
        while(!stk.empty() && arr[stk.top()] <= arr[i]){
            stk.pop();
        }
        //no element larger than current element
        if(stk.empty()){
            res.push_back(0);
            stk.push(i);
        }else 
        res.push_back(stk.top());
    }
    return res;
}

int main(){
    vector<int> v = {110, 120, 105, 100, 115, 125, 102};
    vector<int> res = spanstock(v);
    for(int i=0;i<v.size();i++){
        cout<<res[i]<<" ";
    }
    
}