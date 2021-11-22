#include<bits/stdc++.h>
using namespace std;

int lps(string &arr , int i , int j){

    if( i == j){
        return 0;
    }

    if(arr[i] == arr[j]){
        return 1 + lps(arr , i-1, j-1);
    }
    else{
        return max(lps(arr, i+1,j) , lps(arr ,i,j-1));
    }
    return 0;

}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    string str  = " frabcaefcaagrer";
    cout<<lps(str , 0 , str.size()-1);
}