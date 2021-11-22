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
            ll n,m;
            cin>>n>>m;
            ll a[n] , b[m];

            unordered_set<int> sa;
            unordered_set<int> sb;
            
            for(int i=0;i<n;i++)
            {   cin>>a[i];
                sa.insert(a[i]);
            }
            
            for(int i=0;i<m;i++)
            {   cin>>b[i];
                sb.insert(b[i]);
            }
            vector<int> res;
            for(auto n:sa){
                if(sb.find(n) != sb.end())
                    res.push_back(n);
            }
            
            if(res.size() == 0)
                cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                cout<<"1 "<<res[0]<<endl;
            }
            

        }   

    }