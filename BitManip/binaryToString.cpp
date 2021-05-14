#include<bits/stdc++.h>
using namespace std;

string binaryToString(double num)
{
    string s = "";
    s.append(".");
    while(num>0)
    {
        if(s.length() >= 32)
            return "error";
        double r = num * 2;
        if(r>1)
        {
            s.append("1");
            num = r-1;
        }
        else
        {
            s.append("0");
            num = r;
        }
        
    }
    return s;
}

int main()
{
    double num = 0.72;
    cout<<binaryToString(num)<<endl;
}