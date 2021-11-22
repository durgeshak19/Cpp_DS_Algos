#include<bits/stdc++.h>
using namespace std;

bool isPrime(const int &x)
{
    int i;
    bool flag = 0;
    for(i=2; i<=x/2; i+=1) {
       if(x%i==0) {
          flag=true;
          break;
       }
    }
    return !flag;
}

void sumOfPrimes(vector<int> &arr){
    int sum = 0;
    int one =0;
    for(int i=0;i<arr.size();i++){
        if(isPrime(arr[i])){
            sum += arr[i];
        }
        if(arr[i] == 1){//checking one is not prime
            one = 1;
        }
    }
    cout<<sum - one<<endl;
}

int main(){
    vector<int> arr1 = {1,14,5,7};
    vector<int> arr2 = {2,10,13,9};
    sumOfPrimes(arr1);
    sumOfPrimes(arr2);
}