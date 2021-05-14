#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c == '^')
        return 3;
    else if (c=='*' || c=='/')
    {
        return 2;
    }
    else if (c=='+' || c=='-')
    {
        return 1;
    }
    return -1;
}

void infixToPostfix(string str)
{
    stack<char> s;
    string res;
    s.push('N');
    for(auto &c:str)
    {
        if((c >='a' && c<='z') || (c >='A' && c<='Z'))
            res+=c;
        
        else if (c=='(')
        {
            s.push(c);
        }
        else if (c==')')
        {
            while(s.top() != 'N' && s.top() != '('){
                 res += s.top();
                 s.pop();
            }

            if(s.top() == '(')
                s.pop();
        }
        else
        {
            while(s.top() != 'N' && prec(c) <= prec(s.top())){ 
                res += s.top(); 
                s.pop();          
            } 
            s.push(c); 
        }
    }
    while(s.top() != 'N') 
    { 
        res += s.top(); 
        s.pop(); 
         
    } 
      
    cout << res << endl; 
}


int evaluatePostfix(string str)
{
    stack<int> s;
    int res;
    
    for(auto &c:str)
    {
        if(isdigit(c))
            s.push(c-'0');
        else
        {
            int val1 = s.top();
            s.pop();
            int val2 = s.top();
            s.pop();
            if(c == '+')
                s.push(val2 + val1);
            
            else if(c == '-')
                s.push(val2 - val1);

            else if(c == '*')
                s.push(val2 * val1);
            else if(c == '/')
                s.push(val2 / val1);
        }
        
    }
    res = s.top();
    return res;
}

