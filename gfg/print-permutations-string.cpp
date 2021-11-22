#include<bits/stdc++.h>
using namespace std;

void printPermutations(string & str,int i, int n){

    if(n==i){
        cout<<str<<"\n";
        return ;
    }
    for(int j=i;j<n;j++){
        swap(str[i],str[j]);
        printPermutations(str, i+1, n);
        swap(str[i],str[j]);   
    }

}
int main(){ 

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);   
	freopen("output.txt", "w", stdout);
#endif

    string str = "ABC";
    printPermutations(str,0, str.size());
}