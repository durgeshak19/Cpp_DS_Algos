#include<bits/stdc++.h>
using namespace std;
//  typedef long long ll;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; 
    cin>>t;
    while(t--){

		int arr[4];
		for(int i=0;i<4;i++){
			cin>>arr[i];
		}
		int a = arr[0];
		int b = arr[1];
		int x = arr[2];
		int y = arr[3];
		int res = -1;
		if( x != y)
			res = (a*y - x*b)/(x - y);
		// if(res < 0){
			// cout<<"-1\n";
		// }else
		cout<<res<<"\n";
    }
}