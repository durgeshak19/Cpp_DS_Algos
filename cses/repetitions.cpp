#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

// int main(){
    
//     string str;
//     cin>>str;

//     ll curr_sum = 1;
//     ll res_max = 0;

//     for(ll i=0;i<str.size();i++){

//         if(str[i] == str[i+1]){
//             curr_sum++;
//         }
//         else{
//             res_max = max(curr_sum , res_max);
//             curr_sum = 1;
//         }
//     }
//     cout<<res_max;
//     return 0;
// }

int main()
{
    string str;
    cin>>str;
    // str = "ACCGGGTTTT";

    int n = str.size();
    int count = 0;
    
    if(n == 0)
        return count;

    char c = str[0];
    count = 1;
    int mx = -2 ;

    for(int i=1;i<n;i++){

        if(c == str[i]){
            count++;
        }
        else{
            mx = max(count , mx);
            count = 1;
            c = str[i];
        }
    }
    mx = max(count , mx);
    cout<<mx ;

}