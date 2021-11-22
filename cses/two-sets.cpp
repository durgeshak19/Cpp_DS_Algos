#include<iostream>
#include<vector>
using namespace std;
typedef long long ll; 

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    int n;
    cin>>n;
    int sum = n * (n+1) /2;

    twoSets(0,sum);
}