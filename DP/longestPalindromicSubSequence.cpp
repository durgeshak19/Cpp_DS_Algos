#include<bits/stdc++.h>
using namespace std;


int lps(string str , int i ,int j){

    if(i>j){
        return  0;
    }

    if(i == j){
        return 1;
    }

    if(str[i] == str[j] ){
        return lps(str, i+1 , j-1 ) + 2;
    }

    return max(lps(str,i,j-1) , lps(str,i+1,j));
}


int main(){

    string str = "sasfafsars";
    cout<<lps(str, 0 ,str.size()-1);

}