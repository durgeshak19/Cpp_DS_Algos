#include<bits/stdc++.h>
using namespace std;

int arr[10000]; 
string addBase14(string num1, string num2){

    int n = num1.size();
    int m = num2.size();

    string res = "";
    map<int,char> mp;
    mp[11] = 'A';
    mp[12] = 'B';
    mp[13] = 'C';
    mp[14] = 'D';
    while(n >=0 && m>=0){
        
    }
}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    string num1 = "12A";
    string num2 = "CD3";
    cout<<addBase14(num1 , num2);
}