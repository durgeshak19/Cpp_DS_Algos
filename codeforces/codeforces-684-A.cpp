#include<iostream>
using namespace std;


int main(){
    int t; 
    cin>>t;
    while(t--){
        
        int n , k;
        cin>>n>>k;
        string str = "abc";
        string res = "";
        int a = n/3;
        int b = n%3;
        for(int i=0;i<a;i++){
            res +=str;
        }

        for(int i=0;i<b;i++){
            res +=str[i];
        }
        cout<<res<<endl;
    }

}