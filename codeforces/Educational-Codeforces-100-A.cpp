#include<iostream>
using namespace std;


int main(){
    int t; 
    cin>>t;
    while(t--){
        
        int a,b,c;
        cin>>a>>b>>c;

        int num = (a + b + c);
        int div = num/9;
        if(num%9 != 0 || a<div||b<div||c<div )  cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}