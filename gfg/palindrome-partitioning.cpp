#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string String, int i, int j){
    while(i < j)
    {
      if(String[i] != String[j])
        return false; 
      i++;
      j--;
    }
    return true;
}
int minPalPartition(string &arr , int i , int j){

    if(i >= j && isPalindrome(arr , i , j))
        return 0;
    
    int res = INT_MAX;
    int count = 0;
    for(int k=i;k<j;k++){
        count = 1 + minPalPartition(arr , i ,k) +
                minPalPartition(arr , k+1 ,j);
    
        res = min(res, count);
    }
    return res;

}   

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

    string str = "ababbbabbababa";
    cout<<minPalPartition(str ,0, str.size()-1);

}