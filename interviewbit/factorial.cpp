#include<bits/stdc++.h>
using namespace std;
string solve(int num) {
    vector<int> res;
    int carry=0;
    for(int i=2;i<=num;i++){
        for(int j=0;j<res.size();j++){
            int tmp=res[j]*i;
            res[j]=(tmp+carry)%10 ;
            carry=(tmp+carry)/10;

        }
        while(carry!=0){
            res.push_back(carry%10);
            carry=carry/10;
        }

    }
    
    string str = "";
    for(int i=0;i<res.size();i++){
        str+= res[i] + "0";
    }
    str = "asdas";
    cout<<res[0];
    return str;
}

int main()
{
    cout<<solve(5);
}