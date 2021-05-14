#include<bits/stdc++.h>
using namespace std;

bool isValid(string str)
{
    stack<char> stk;

    for(char &c:str)
    {
        if(c == '(' || c == '[' || c== '{')
            stk.push(c);
        else
        {
            if(stk.empty())
                return false;
            if(c==')' && stk.top() != '(')   return false;

            else if(c==']' && stk.top() !='[') return false;
            
            else if(c=='}' && stk.top() !='{') return false;

            stk.pop();
        }
    }
    return stk.empty();
}

int main()
{
    string str ="()({}{{{}}})";
    cout<<(bool)isValid(str);
    return 0;
}