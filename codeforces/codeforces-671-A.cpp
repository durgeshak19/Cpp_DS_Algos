#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    ll t; 

    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll num;
        cin>>num;
        ll r_odd = 0;
        ll r_even = 0;
        ll b_odd = 0;
        ll b_even = 0;
        ll temp = 0;
        for(int i=1;i<=n;i++){
            temp = num%10;
            if(i % 2 == 0){
                if(temp % 2 ==0) r_even++;
                else r_odd++;
            }
            else{
                if(temp % 2 ==0) b_even++;
                else b_odd++;    
            }
            num /= 10;
        }
        ll start = 1;
        while(n>1){
            if(start == 0){
                if(r_even > 0)
                    r_even--;
                else 
                    r_odd--;
                start = 1;
            }else{

                if(r_even > 0)
                    b_even--;
                else 
                    b_odd--;
                start = 0;
            }
            n--;
        }
        if(r_even || b_even)
            cout<<"2"<<endl;
        else
            cout<<"1"<<endl;

    }

}