#include<bits/stdc++.h>
using namespace std;

vector<char> mergeList(vector<char> &arr1, vector<char> &arr2) {

    int n = arr1.size();
    int m = arr2.size();

    vector<char> res(n+m);
    int i=0,j=0;
    while(i<n && j<m){
        res.push_back(arr1[i]);
        res.push_back(arr2[j]);
        i++;
        j++;
    }

    if(i<n){
        while(i<n){
            res.push_back(arr1[i]);
            i++;
        }
    }
    if(j<m){
        while(j<m){
            res.push_back(arr2[j]);
            j++;
        }
    }
    return res;
}

int main(){

    vector<char> arr1= {'1','2','3','4','5'};
    vector<char> arr2 = {'a','b','c'};
    vector<char> res = mergeList(arr1,arr2);
    for(int i=0;i<res.size();i++){
        cout<<res[i];
    }
}