#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{0,1} ,{1,0} , {1,1}};

int binomial_coeff(int n , int k){

    if( k == 0 || n == k) return 1;

    return binomial_coeff(n-1 , k-1) + binomial_coeff(n-1 , k);
    return 0;
}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    int n = 5;
    int k =  2;
    cout<<binomial_coeff(n , k);
}