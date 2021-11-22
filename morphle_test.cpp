#include<bits/stdc++.h>
using namespace std;

void utility(vector<string> & v , int n , int k , int i ,string &res){

    //after reaching the size n print the string and return
    if(i == n) {
        cout<<res<<endl;
        return; 
    }
    //loop to iterate over all the character of ith string and insert into result
    for(int j=0;j<k;j++){
        res.push_back(v[i][j]);
        //call to utility function to print next combination of character after choosing element from 
        //current ith string

        utility(v , n ,k ,i+1, res);
        
        //remove the last element inserted and  
        res.pop_back();
    }
}

void solve(vector<string> & v , int n , int k){

    string res = ""; //stores the result
    int i=0; // iterates over all the strings
    utility(v , n , k , i,res);
}

int main(){
    vector<string> v = {"ab" , "xy" , "mn"};

    int k=2;
    int n = v.size();
    solve(v , n ,k);
}