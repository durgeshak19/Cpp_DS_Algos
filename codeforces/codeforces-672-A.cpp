#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    int t; 
    cin>>t;
    while(t--){
        
        int n , k;
        cin>>n>>k;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);

        int count = 0;
        int j=1;
        while(j<n){
            while(arr[0] + arr[j] <= k){
                    count++;
                    arr[j] += arr[0];
                }
            j++;
        }
        cout<<count<<endl;
    }

}