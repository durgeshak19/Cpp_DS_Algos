#include<iostream>
using namespace std;

void reverseString(string &str ,int i=0 ){
    
    int n = str.size();
    if(i == n/2)
        return;
    swap(str[i] , str[n-i-1]);
    reverseString(str, i+1);

}

int main(){

}