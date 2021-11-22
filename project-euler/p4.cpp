#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    int original = num;
    int temp =0;
    while(num){
        temp = temp*10 + num%10;
        num/=10;   
    }
    return temp == original;
}
int main(){
    int temp;
    int n = 999,m = 999;
    for(int i=n;i>900;i--){
        for(int j=m;j>900;j--){
            temp = i* j;
            if(isPrime(temp))
            {
                cout<<temp<<endl;
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
}