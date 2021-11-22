#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

int n,m,h,t; multiset<int> tickets;
cin >> n >> m;

	for (int i=0;i<n;++i){

		cin >> h; tickets.insert(h);

	}

	for (int i=0;i<m;++i){

		cin >> t;

		auto it = tickets.upper_bound(t);

		if (it==tickets.begin()){

			cout << -1 << "\n";

		}

		else{

			cout << *(--it) << "\n";

			tickets.erase(it);

		}

	}

}   