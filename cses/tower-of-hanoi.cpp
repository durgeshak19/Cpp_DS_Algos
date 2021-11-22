#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

void towerOfHanoi(int src ,int aux , int dest ,int n){

    if(n==0){
            return;
    }

    towerOfHanoi(src,dest,aux,n-1);
    cout<<src<<" "<<dest<<"\n";
    towerOfHanoi(aux,src,dest,n-1);

}


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    int n ;
    cin>>n;
    cout<<(1<<n)-1<<"\n";
    towerOfHanoi(1,2,3, n);
}