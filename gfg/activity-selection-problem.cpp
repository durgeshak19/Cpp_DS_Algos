#include<bits/stdc++.h>
using namespace std;
// question : overlapping intervals select most which are not overlapping 
// sort by finishing time and select next activity when whose start time >= current end time 
void printMaxActivity(vector<int> &start , vector<int> &finish )
{
    int n = start.size();
    vector<pair<int,int>> v;
    for(int i =0 ;i<n;i++){
        v.push_back({finish[i] , start[i]});
    }


    // for(int i= 0;i<n;i++){
    //     cout<<v[0].second<<" "<<v[0].first<<"\n";
    // }
    sort(v.begin() , v.end());
    int curr = v[0].first;
    cout<<v[0].second<<" "<<v[0].first<<"\n";
    int count = 1;
    for(int i=1;i<n;i++){
        if(curr <= v[i].second){
            cout<<v[i].second<<" "<<v[i].first<<"\n";
            curr = v[i].first;
            count++;
        }
    }   
    cout<<count;
}
int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    // vector<int> start = {1,3,0,5,8,5};
    vector<int> start = {3,1,5,8,5,0};
    // vector<int> finish = {2,4,6,7,9,9};
    vector<int> finish = {4,2,7,9,9,6};
    
    printMaxActivity(start , finish );

}