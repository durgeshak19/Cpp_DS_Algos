
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void DFS(vector<int> adj[], int s, vector<bool> &visited)
    {
        visited[s]=true;
        for(int u : adj[s])
        {
            if(visited[u]==false)
                DFS(adj, u, visited);
        }
    }
    int countIslands(vector<int> adj[], int V)
    {
        vector<bool> visited(V, false);
        int count=0;
        for(int i=0; i<V; i++)
        {
            if(visited[i]==false)
            {
                DFS(adj, i, visited);
                count++;
            }    
        }
        return count;
    }
    pair<int, int> s2p(string val)
    {
        string val1="", val2="";
        for(int i=0; i<val.length(); i++)
        {
            if(val[i]==',')
            {
                val1=val2;
                val2="";
            }
            else
                val2+=val[i];
        }
        return {stoi(val1), stoi(val2)};
    }
    string p2s(pair<int, int> p)
    {
        return to_string(p.first) + "," + to_string(p.second);
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int gridC=grid[0].size(), gridR=grid.size();
        vector<pair<int, int>> arr;
        unordered_map<string, int> mp;
        
        int count=0;
        
        for(int i=0; i<gridR; i++)
        {
            for(int j=0; j<gridC; j++)
            {
                if(grid[i][j]=='1')
                {
                    pair<int, int> p = {i, j};
                    arr.push_back(p);
                    mp[p2s(p)]=count;
                    count++;
                }
            }        
        }
        
        // make the adjacencyList
        vector<int> adj[count];
        for(int i=0; i<count; i++)
        {
            int x=arr[i].first;
            int y=arr[i].second;
            
            for(int k=x-1; k<x+2; k++)
            {
                for(int l=y-1; l<y+2; l++)
                {
                    if((k>=0 && k<gridR)&&(l>=0 && l<gridC))
                    {
                        if(k==x && l==y)
                            continue;
                        if(grid[k][l]=='1')
                        {
                            adj[i].push_back(mp[p2s({k,l})]);
                        }
                    }
                    
                }
            }
        }
        
        for(int i=0; i<count; i++)
        {
            for(int x : adj[i])
                cout<<x<<" ";
            cout<<endl;
        }
        //cout<<count<<endl;
        
        return 0;//countIslands(adj, count);
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.numIslands(grid);
		cout << ans <<'\n';
	}
	return 0;
}