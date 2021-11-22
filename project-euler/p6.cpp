#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=100;
    unsigned long squareOfSum = pow((n *(n+1)/2),2);
    unsigned long sumOfSquares = (n*(n+1) * (2*n+1))/6;

    cout<<squareOfSum - sumOfSquares;

}