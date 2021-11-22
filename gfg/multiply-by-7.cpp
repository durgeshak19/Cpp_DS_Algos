#include<bits/stdc++.h>
using namespace std;

int arr[10000]; 
bool isLucky(int n){

    static int counter = 2;
    if(counter > n) return 1;
    if(n % counter == 0) return 0;

    int next_pos = n - n/counter;
    counter++;
    return isLucky(next_pos);
    

}


int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    cout<<isLucky(13);

}