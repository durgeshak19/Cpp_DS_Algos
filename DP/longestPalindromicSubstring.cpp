#include<bits/stdc++.h>
using namespace std;



void LPSBruteForce(string a , int n){
    int maxLen = 1; 
    int start = 0;

    for(int i=0;i<n;i++){
        for(int j=i;i<n;j++){
            int flag  = 1;

            for(int k = 0 ;k<(j-i + 1) / 2;k++){
                if(a[i+k] != a[j-k]){
                    flag = 0;
                }
            }


            if(flag && (j-i+1) > maxLen){
                maxLen = (j-i+1);
                start = i;
            }
        }
    }   
    cout<< a.substr(start , start + maxLen);

}


string expand(string str , int low ,int high){
    int len = str.length();
    while(low >=0 && high < len && (str[low] == str[high])){
        low--,high++;
    }
    return str.substr(low + 1, high - low - 1);
}

string LPSubstring(string str , int n){

    string max_str = "" , curr_str;
    int max_len = 0 , curr_len ;

    for(int i=0;i<n;i++){
        curr_str = expand(str,i,i);
        curr_len = curr_str.size();

        if(curr_len >max_len){
            max_len = curr_len;
            max_str = curr_str;
        }

        curr_str = expand(str , i , i+1);
        curr_len = curr_str.length();

        if(curr_len > max_len){
            max_len = curr_len;
            max_str = curr_str;
        }
    }
    return max_str;
}
int main()
{

    string str = "forgeeksskeegfor";
    cout << "\nLength is: " ;
     LPSBruteForce(str, str.size());

}