#include<bits/stdc++.h>
using namespace std;
 
int frequencyOfNonVowels(string input) {
// programs return frequency of Non vowels
//in the given output example below the code it prints vowels frequency  
    
int count = 0;
 
for(auto c: input){
    if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' ||c == 'U'  ))
            count++;
}
    // cout<<count<<endl;
    return count; // return 5 for “rajasoft”
}

int main(){
    cout<<frequencyOfNonVowels("rajasoft");
}
