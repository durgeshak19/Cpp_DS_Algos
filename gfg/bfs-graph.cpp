#include<bits/stdc++.h>
using namespace std;

class Graph{
    
    int V =0 ;
    vector<int> *adj;
    public:

    Graph(int V){
        this->V = V;
        adj = new vector<int>[V];
    }

    void addEdge(int u , int v);
    void BFS(int s);

};
void Graph::addEdge( int u ,int  v){
    adj[u].push_back(v);
}

void Graph::BFS(int s){

    vector<bool> visited(V ,false);

    queue<int> q;

    visited[s] = true;

    q.push(s);

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout<<temp<<" ";

        for(auto x:adj[temp]){
            if(visited[x] == false){
                visited[x] = true;
                q.push(x);
            }
        }
    }

}


int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" ,"w" , stdout);
#endif


    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.BFS(2);
}