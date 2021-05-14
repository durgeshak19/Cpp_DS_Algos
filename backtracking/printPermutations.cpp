#include<bits/stdc++.h>
using namespace std;
void printx(vector<string> &v)
{
    // cout<<v.size();
    for(auto s:v)
        cout<<s<<"\n";
        
}
void helper(string &str , vector<string> &res , int n)
{
    if( n == str.size()){
            // cout<<"--------pushed---------------\n\n";
        res.push_back(str);}
    else{
        for(int i = n ;i<str.size();i++)
        {
        
            // cout<<"First swap n : "<<n<<" to i : "<<i<<"\n";
            swap(str[n] , str[i]);
            helper(str,res,n+1);
            // cout<<"second swap n : "<<n<<" to i : "<<i<<"\n";
            // swap(str[n] , str[i]);
        }
    }
    
}
void printPermutation(string &ip)
{
    vector<string> res;
    int n=0;
    helper(ip , res, n);
    printx(res);
}



int main()
{
    string str = "112";
    // int n = str.size();
    printPermutation(str);
    
}