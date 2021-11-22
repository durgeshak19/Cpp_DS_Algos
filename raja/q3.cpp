#include<bits/stdc++.h>
using namespace std;

set<int> fib;

void generateFibonacci(){

    int a = 0, b =1;
    int temp = 0;
    for(int i=0;i<100;i++){
        fib.insert(a+b);
        temp = b ;
        b = b+ a;
        a = temp;
    }
}

void query(int x){
    auto pos = fib.find(x);

    if(pos != fib.end()){
        cout<<x<<endl;
    }
    else{
        auto it = fib.lower_bound(x);
        int sum = 0;
        for(auto i = it;i!=fib.begin();i--){
            if(*i %2 == 0){
                sum += *i;
            }

        }
        cout<<sum;
    }
    
}

int main(){

    generateFibonacci();
    // for(auto c: fib){
    //     cout<<c;
    // }

    int query1 = 21;
    int query2 = 20;
    query(query1);     
    query(query1);     
}