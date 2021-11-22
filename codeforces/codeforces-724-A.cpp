#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

    int t; 
    cin>>t;
    while(t--){
        
        int n ;
        cin>>n;
        vector<int> arr(n);
        set<int> st;
        int flag = 0;


        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] < 0){
                flag = 1;
            }
            st.insert(arr[i]);
        }
        if(flag == 1){
            cout<<"NO"<<endl;
            continue;
        }
        else if(flag == 0){
        vector<int> b = arr;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                int x = abs(arr[i] - arr[j]);

                if(st.find(x) == st.end()){
                    b.push_back(x);
                    st.insert(x);
                    arr.push_back(x);
                }
                if(b.size()>300){
                    cout<<"NO"<<endl;
                }
            }
        }

        cout<<"YES"<<endl;
        cout<<b.size()<<endl;

        for(auto n:b){
            cout<<n<<" ";
        }    
        cout<<"\n";
        }       
    }

}