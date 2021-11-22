#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

void stringPermutations(string str, int j,  int n){

    if(j== n){
        cout<<str<<"\n";
        return;
    }

    for(int i=j;i<n;i++){
        swap(str[i] ,str[j]);
        if(str[i] != str[j] &&i!=j)
            stringPermutations(str,j+1,n);
        swap(str[i] ,str[j]);
    }
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    string str;
    cin>>str;
    cout<<tgamma(str.size() + 1)<<"\n";

    stringPermutations(str,0,str.size());

    // string str = "123";
    // cout<<str[2];
}