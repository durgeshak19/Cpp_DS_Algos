#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n ==1 || n == 2 )
        return 1;
    else 
        return fibonacci(n-1) + fibonacci(n-2); 
}
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);   
	freopen("output.txt", "w", stdout);
#endif

    cout<<fibonacci(9);

}