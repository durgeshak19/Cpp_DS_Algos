#include<bits/stdc++.h>
using namespace std;

int infixEvaluation(string str)
{
    stack<char> operato;
    stack<int> operand;

    for(auto &c:str)
    {
        if(isdigit(c))
            operand.push(c-'0');
        else if(c== '+' ||c== '*' ||c== '-' ||c== '/')
            operato.push(c);
        else
        {            
            while(!operato.empty()){
                int val1 = operand.top();
                operand.pop();
                int val2 = operand.top();
                operand.pop();
                char c = operato.top();
                operato.pop();
                if(c == '+')
                    operand.push(val2 + val1);
                
                else if(c == '-')
                    operand.push(val2 - val1);

                else if(c == '*')
                    operand.push(val2 * val1);
                else if(c == '/')
                    operand.push(val2 / val1);
            }
        }
            
    }
    return operand.top();
}

int main()
{
    string s = "2+3*5-9/3*(6-4/(3-1))";
    cout<<infixEvaluation(s);

}