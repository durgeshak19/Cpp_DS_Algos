#include<bits/stdc++.h>
using namespace std;


int lcs(string &arr1 , string &arr2 , int i , int j)
{
    if(i == 0 || j == 0)
        return 0;
    
    if(arr1[i] == arr2[j])
        return 1 + lcs(arr1,arr2,i-1,j-1);
    
    else return max(lcs(arr1, arr2, i-1,j) , lcs(arr1,arr2, i,j-1)); 

    return 0;
}


int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    string arr1 = "AGGTAB"; 
    string arr2 = "GXTXAYB"; 
    
    cout<<lcs(arr1, arr2 , arr1.size() , arr2.size());
}