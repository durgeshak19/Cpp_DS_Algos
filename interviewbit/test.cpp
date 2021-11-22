#include<bits/stdc++.h>
using namespace std;
// find  mnimum angle between hour hand and miute hand
// hour 1- 12 mn 1 - 60
// 1 hr = 60 mn 
// 1hr =30deg 
// 60 = 30 , 1 = 0.5 deg
// // 1hr = 360 /12 = 30 deg , 1mn = 360 / 60  = 6deg;
// float findAngle(float hour ,float mn){

//     // float angleByHour = hour * 30;
//     // float angleBymn = mn * 6 ;
//     // float res = abs( angleByHour - angleBymn);
//     // return res;  
//     if(hour == 12 )
//         hour = 0;

//     if(mn == 60){
//         mn = 0;
//         hour = hour +1;
//         if(hour > 12){
//             hour = hour -12;
//         }
        
//     }
//     // float angleByHour = hour * 30 mn * 0.5 ;
    
//     // float angleByHour = (hour * 60 + mn )* 0.5 ;
//     // angleByHour += mn*6; 
//     float angleByHour = hour*30 +  (mn * 0.5)  ;
//     float angleBymn = mn * 6 ;
    


//     /// 10 : 50  = 0
//     // 3 : 30 = 75;
    
//     // 1:60 = 2 : 00 =60 

 
//     float x = abs(angleByHour - angleBymn);
//     float res = min(x , 360 - x);

//     return res; 
// }

//()

//{ { } } } { } } { { { } } { } { } { { }

// Input: { } } { }
// Output: { { } } { }
// {   = right
//} = left 
// {{} }
// stack = {{}
// { { } }

string balance(string str){

    string res = "";

    int n = str.size();
    stack<char> stk;

    int left  = 0;
    int right = 0;

//  {{{}{}} "}"

    // right > left
    int i=0;

    while(i<n){
        
        if(str[i] == '{'){
            right++;
        }
        else {
            left++;
        }
        if(right == left){ // balanced condition
            res += str[i];
            stk.push(str[i]);
        }
        else if(left > right){ // unbalanced condition
            while(left > right){
                res += '}';
                left--;
            }
        
        }
        res +=str[i];
        i++;
    }

    while(left<right){
        res += "}";
        left++;
    }
return res;
}
int main(){
    string res = "{{}{{{{}";
    cout<<balance(res);
}