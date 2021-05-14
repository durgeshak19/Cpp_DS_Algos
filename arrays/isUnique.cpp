#include<bits/stdc++.h>
using namespace std;

bool isUnique(string const &s)
{
    //assumption character set if fixed of size 128
    // O(n) or O(1) O(1):space complexity
    if(s.size()>128)
        return false; //if character set is fixed
    bool check[128] = {false};

    for(char c:s)
    {
        int a = (int)c;
        if(check[a] )
            return false;
        check[a] = true;
    }    
    return true;
}

bool is_unique(string const &s)
{   //assuming only lowercase alphabet
    int checker =0;
    for(char c:s)
    {
        int val = c - 'a';
        if((checker & (1<<val)) > 0)
            return false;
        checker |= (1<<val);
    }
    return true;
}

int main()
{

    string s = "abac";
    string a = "abcde";
    cout<<isUnique(s)<<endl;
    cout<<isUnique(a);
    
}