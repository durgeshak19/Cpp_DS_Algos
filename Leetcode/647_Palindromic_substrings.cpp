#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str,int i,int j)
{
    while(i<=j)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
        }
        else 
            return false;
    }
    return true;
}


int countSubstrings(string str)
{   
    int n = str.size();
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(checkPalindrome(str,i,j))
                count++;
        }
    }
    return count;
}

int countSubstringsDP(string str)
{   
    int n = str.size();
    int count = n;
    vector<vector<int>> dp(n,vector<int>(n,true));

    for(int start=n-1 ; start >= 0 ;start--)
    {
        for(int dist=1;dist+start<n;dist++)
        {
            int end = start + dist;
            if(str[start] == str[end] && (dist == 1 || dp[start+1][end-1]))
            {
                count++;
            }
            else
            {
                dp[start][end] = false;
            }
        }
    } 

    return count;
}

int main()
{
    string str = "acabaca";
    cout<<countSubstrings(str);
    return 0;
}