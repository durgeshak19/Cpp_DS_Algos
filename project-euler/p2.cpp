#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int a = 1;
  int b = 2;
  int sum =0;
  int temp = 1;
  while(b<4000000){
      if(b %2 == 0){
          sum +=b;
      }
      temp = b;
      b = a+b;
      a = temp;
  }
cout<<sum;
}