#include<bits/stdc++.h>
using namespace std;


int edit_distance(string &arr1 , string &arr2 , int i , int j)
{
    if(i == 0 )
        return j;
    if(j==0)
        return i;
    
    if(arr1[i-1] == arr2[j-1]){
        return edit_distance(arr1,arr2,i-1,j-1);
    }
    else{
        return(
        1 + min({
            edit_distance(arr1,arr2,i-1,j), // insert 
            edit_distance(arr1,arr2,i,j-1), // remove
            edit_distance(arr1,arr2,i-1,j-1) // replace
        }));
    }
  
    return 0;
}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    string arr1 = "sunday";
    string arr2 = "saturday";
    cout<<edit_distance(arr1,arr2,arr1.size(),arr2.size());
}