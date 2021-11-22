#include<bits/stdc++.h>
using namespace std;



bool isValid(string &str){

    stack<char> stk;
    for(char &c:str){
        if(c=='(' || c == '[' || c== '{'){
            stk.push(c);
        }
        else{

            if(stk.empty()) return false;
            if(c == ')' && stk.top() != '(') return false;
            if(c == ']' && stk.top() != '[') return false;
            if(c == '}' && stk.top() != '{') return false;
        stk.pop();
    
        }
    }
}
//   string s = "2+3*5-9/3*(6-4/(3-1))";
int infixEvaluation(string str){

    stack<char> operato;
    stack<int> operand ; 
    
    for(auto &c:str){

        if(isdigit(c)){
            operand.push(c - '0');
        }
        else if(c == '+' || c=='-' || c=='/' || c=='*'){
            operato.push(c);
        }
        else{
            while(!operato.empty()){
                int val1 = operand.top();
                operand.pop();
                int val2 = operand.top();
                operand.pop();

                char c = operato.top();
                operato.pop();
                if(c == '+') operand.push(val2 + val1);
                else if(c == '-') operand.push(val2-val1);
                else if(c == '*') operand.push(val2*val1);
                else if(c == '/') operand.push(val2/val1);
            }
        }
    }
    return operand.top();
}




// Dynamic array implementation stack
class DynArrayStack{

    public:
    int top;
    int capacity;
    int *array;
};


DynArrayStack* createStack(){
    DynArrayStack * S = new DynArrayStack;

    S->top = -1;
    S->capacity = 1;
    S->array = new int[S->capacity];
    if(S->array == NULL){
        return NULL;
    }
    return S;
}




int isFullStack(DynArrayStack* S){
    return S->top == S->capacity -1;
}

void DoubleStack(DynArrayStack* S){

    S->capacity *= 2;
    S->array = (int*)realloc(S->array , S->capacity * sizeof(int));
}


void push(DynArrayStack * S ,int val){
    
    if(isFullStack(S)){
        DoubleStack(S);
    }
    S->array[++S->top] == val;
}


int isEmptyStack(DynArrayStack * S){
    return S->top == -1;
}

int top(DynArrayStack * S){
    
    if(isEmptyStack(S)){
        return -1;
    }
    return S->array[S->top]; 
}

int pop(DynArrayStack * S){
    if(isEmptyStack(S)){
        return INT64_MAX;
    }
    return S->array[S->top--];
}

void deleteStack(DynArrayStack * S){
    if(S){
        if(S->array){
            free(S->array);
        }
            free(S);

    }
}
// //////////////////////////////////////////////////////


int prec(char c){
    if(c == '^') return 3;
    else if(c == '*' || c =='/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return-1;
}
void infixToPostfix(string str){
    stack<char> s;
    string res;
    s.push('N');

    for(auto &c:str){
        if((c >= 'a' && c<='z') || (c>='A' && c<='Z' )){
            s.push(c);
        }
        else if(c =='(')  s.push(c);
        else if(c==')'){
            while(s.top() != 'N' && prec(c) <= prec(s.top())){
                res+=s.top();
                s.pop();
            }
            s.push(c);
        }
        else{
            while(s.top() != 'N' && prec(c) <= prec(s.top()) ){
                res+=s.top();
                s.pop();
            }
            s.push(c);
        }

    }

    cout<<res<<endl;
}


int postfixEvaluate(string str){
    stack<int> s;

    int res;

    for(auto &c:str){
        if(isdigit(c)){
            s.push(c-'0');
        }
        else{
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
///////////////////////////////////////////////////

vector<int> nearestSmallestToRight(vector<int> &v){

    stack<pair<int,int>> st;
    int  n = v.size();
    vector<int> res; 

    for(int i=v.size()-1 ;i>=0;i--){
        int ele = v[i];

        if(st.empty())  res.push_back(n);

        else if(st.top().first <= ele){
            res.push_back(st.top().second);
        }
        else if(st.top().first > ele){
            while(st.top().first > ele && !st.empty()){
                st.pop();
            }
            if(st.empty()) res.push_back(i);
            else res.push_back(st.top().second);
        }
        st.push({ele , i});

    }

    reverse(res.begin() , res.end());
    return res;

}

vector<int> nearestSmallestToLeft(vector<int> & v){

    int n = v.size();
    stack<pair<int,int>> stk;
    vector<int> res;

    for(int i=0;i<n;i++){
        int ele = v[i];

        if(stk.empty()){
            res.push_back(-1);
        }
        else if(stk.top().first < ele){
            res.push_back(stk.top().second);
        }
        else if(stk.top().first > ele){
            while(stk.top().first > ele && !stk.empty()){
                stk.pop();
            }

            if(stk.empty()){
                res.push_back(-1);
            }
            else res.push_back(stk.top().second);
        }
        stk.push({ele , i});
    }

    return res;

}

int maxAreaHistogram(vector<int> &v){
    int n = v.size();
    //area = width * height 
    // maximize area
    // whenever we found tower smaller than current on the left/ right 
    // we consdier length upto that point

    vector<int> right = nearestSmallestToRight(v);
    vector<int> left = nearestSmallestToLeft(v);
    //curr pos + right - left
    vector<int> area(n) ;

    int mx = INT_MIN;
    for(int i=0 ; i<n;i++){
        area[i] = v[i] * (right[i] - left[i] +1);
        mx = max(area[i] , mx);
    }
    return mx;
}
//////////////////////////////////////////////////////////////////////////

void maxAreaRectangularMatrix(vector<vector<int>> & mat){
    int R = mat.size();
    int C= mat[0].size();

    int mx = 0 ;
    vector<int> v(R);
    for(int i=0;i<C;i++){
        v[i] = mat[0][i];
    }

    mx = maxAreaHistogram(v);
    for(int i=1;i<R ; i<i++){
        for(int j=0;j<C;j++){
            if(mat[i][j] == 0)  v[j] = 0;
            else v[j] += mat[i][j];
        }
        mx = max(maxAreaHistogram(v) , mx);
        
    }

}
/////////////////////////////////////

class minStack{
    stack<int> data;
    stack<int> min;

    public:
    void push(int x){
        if(min.empty()){
            data.push(x);
            min.push(x);
        }
        else{
            data.push(x);
            if(x < min.top())
                min.push(x);
        }
    }

    void pop(){
        if(!min.empty()){
            if(min.top() == data.top())
                min.pop();
            data.pop();
        }
    }

    int top(){
        return data.top();
    }

    int getMin(){
        return min.top();
    }

};
////////////////////////////////////////////


class Queue{
    public:
    stack<int> stk1;
    stack<int> stk2;
    int top()
    {
        return stk1.top();
    }

    void push(int data){
        while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
        }
        stk1.push(data);
        while(!stk2.empty()){
            stk1.push(stk2.top());
            stk2.pop();
        }

    }
    void pop(){
        if(!stk1.empty()){
            stk1.pop();
        }
    }

    bool empty(){
        return stk1.empty();
    }

};

void stockSpan(vector<int> &v){
    int n = v.size();

    stack<pair<int,int>> stk;
    vector<int> res;
    for(int i=0;i<n;i++){

        int ele = v[i];
        if(stk.empty()) res.push_back(-1);
        else if(stk.top().first > ele)
            res.push_back(stk.top().second);
        else if(stk.top().first <= ele){
            while(stk.top().first <= ele && !stk.empty()){
                stk.pop();
                if(stk.empty())
                res.push_back(-1);
                else 
                    res.push_back(stk.top().second);
            }
        }

        stk.push({ele , i});
    }



}

int main()
{
    string str ="()({}{{{}}})";
    cout<<(bool)isValid(str);
    return 0;
}