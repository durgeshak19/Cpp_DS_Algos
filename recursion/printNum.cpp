#include<bits/stdc++.h>
using namespace std;
vector<char> res;

string printNum(int n)
{
    if(n<10)
        return to_string(n);
    return  printNum(n/10) + to_string(n%10);
}

int main()
{
    int n = 9876531;
    string str = printNum(n);
        cout<<str<<endl;
}