#include<bits/stdc++.h>
using namespace std;
//careermonk-> camonk
void removeAdjacent(string &str)
{
    int stkptr = -1;
    int i=0,n= str.size();
    while(i<n)
    {
        if(stkptr == -1  || str[stkptr] != str[i]){
            stkptr++;
            str[stkptr] = str[i];
        }
        else{
            while(i<n && str[stkptr] == str[i])
                i++;
            stkptr--;
        }
    }    
    str[stkptr+1] ='\0';
    cout<<str;
}
int main()
{
    string s = "careermonk";
    removeAdjacent(s);
}