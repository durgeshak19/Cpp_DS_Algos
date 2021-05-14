#include<bits/stdc++.h>
using namespace std;


enum State {Unvisited , visited , visiting};
class Graph 
{
    public:
    int V;
    vector<int>*adj;
    Graph(int V)
    {
        this->V = V;
        this->adj = new vector<int>[V];
    }
    
    void addEdge(int x,int y)
    {
        adj[x].push_back(y);
        adj[y].push_back(x); // for directed graph
    }

    bool isRoute(int x, int y);
};

bool Graph::isRoute(int x ,int y)
{
    //using BFS
    if(x == y)
        return true;
    vector<bool> visited(V,false);
    queue<int> q;

    q.push(x);
    while(!q.empty())
    {
        int curr = q.front();
        if(curr == y)
            return true;
        q.pop();
        visited[curr] = true;

        for(int i=0;i<adj[curr].size();i++)
        {
            if(!visited[adj[curr][i]])
            {
                q.push(adj[curr][i]);
            }
        }
    }
    return false;
}


int main()
{
    Graph g(6);
    g.addEdge(5,2);
    g.addEdge(5, 0);
    // g.addEdge(4, 0);
    // g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout<<g.isRoute(5,4)<<endl;
    cout<<g.isRoute(5,1)<<endl;
    return 0;
}