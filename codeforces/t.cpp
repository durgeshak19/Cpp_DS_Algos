#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;
		int arr[n];
		map<int, int>m;
		vector<int> v;


		FOR(i, 0, n - 1)
		{
			cin >> arr[i];
			v.push_back(arr[i]);
			m[arr[i]] = 1;
		}

		int f = 0;


		for (int i = 0; i < v.size() - 1; i++) {
			for (int j = i + 1; j < v.size(); j++) {
				int diff = abs(arr[i] - arr[j]);
				if (v.size() > 300)
				{
					f = 1;
					break;
				}
				else
				{

					v.push_back(diff); 
					m[diff] = 1;


				}
			}
		}


		if (f == 0)

		{
			cout << "Yes" << endl;
			cout << v.size() << endl;
			for (auto i : v)
				cout << i << " ";
			cout << endl;

		}

		else
			cout << "NO" << endl;



	}



}