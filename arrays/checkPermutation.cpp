#include<bits/stdc++.h>
using namespace std;

bool checkPermutation(string &s , string &t)
{
    if(s.size() != t.size())
        return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for(int i=0;i<s.size();i++)
    {
        if(s[i] != t[i])
            return false;
    }
    return true;
} 

bool checkPermutations(string &s ,string &t)
{
    if(s.size() != t.size())
        return false;
    
    int arr[128] = {0};

    for(int i=0;i<s.size();i++)
    {   int c = (int)s[i];
        arr[c]++;
    }
    for(int i=0;i<s.size();i++)
    {   int c = (int) t[i];
        arr[c]--;
        if(arr[c]<0)
            return false;
    }
    return true;
}

int main()
{
    string s = "abcde";
    string t = "ebcca";
  cout<<checkPermutation(s,t)<<endl;
    cout<<checkPermutations(s,t)<<endl;
    return 0;
}