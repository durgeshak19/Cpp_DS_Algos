#include<bits/stdc++.h>
using namespace std;


int multiple_of_3(int n){

    int oddCount = 0;
    int evenCount = 0;
    if(n<0) n = -n;
    if(n == 0) return 1;
    if(n == 1) return 0;

    while(n){
        if(n & 1)   oddCount++;
        if(n & 2)   evenCount++;
        n = n>>2;
    }
    return multiple_of_3(abs(oddCount - evenCount));
}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

}