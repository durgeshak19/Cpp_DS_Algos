#include<bits/stdc++.h>
using namespace std;

int main(){
  
    long long N = 600851475143;
    long long i;
    for( i=3;i<=N;i+=2){
        
        if(N % i == 0){
            while(N%i == 0){
                N /=i;
            }
        }
        if(N == 1) break;
    }
    cout<<i;

}