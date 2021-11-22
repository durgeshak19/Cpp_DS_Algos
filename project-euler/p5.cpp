#include<bits/stdc++.h>
using namespace std;

int main(){
    // LCM of [1...20]
    // LCM * HCF = a * b;

    int lcm =1;

    for(int i=2;i<=20;i++){
        
        int a = i;
        int b = lcm;
        
        while(a!=0){
            int c = a;
            a = b%a;
            b = c;
        }
        lcm = i*(lcm/b);
    } 
    cout<<lcm;
}