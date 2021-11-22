#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<int> *adj;
    void topologicalUtil(int v, vector<bool> &visted , stack<int> &Stack);

    public:
    Graph(int V){
        this->V = V;
        adj = new vector<int>[V];
    }
    void addEdge(int u , int v){
        adj[u].push_back(v);
    }
    void topologicalSort();
};

void Graph::topologicalUtil(int v, vector<bool> &visited , stack<int> &Stack){


    visited[v] = true;

    for(auto x:adj[v]){
        if(!visited[x]){
            topologicalUtil(x,visited,Stack);
        }
    }

    Stack.push(v);
}
void Graph::topologicalSort(){

    vector<bool> visited(V,false);
    stack<int> Stack;

    for(int i=0;i<V;i++){
        if(!visited[i]){
            topologicalUtil( i, visited, Stack);
        }
    }

    while(!Stack.empty()){
        cout<<Stack.top()<<" -> ";
        Stack.pop();
    }

}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" ,"w" , stdout);
#endif
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    g.topologicalSort();
}