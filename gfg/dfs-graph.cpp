#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<int> *adj;
    public:
    Graph(int V){
        this->V = V;
        adj = new vector<int>[V];
    }

    void addEdge(int , int);
    void DFS(int s);
};

void Graph::addEdge(int u , int v){
    adj[u].push_back(v);
}

void Graph::DFS(int s){

    vector<bool> visited(V,false);
    stack<int> st;
    st.push(s);
    visited[s] = true;
    while(!st.empty()){

        int temp = st.top();
        st.pop();

        cout<<temp<<" ";

        for(auto x : adj[temp]){
            if(visited[x] == false){
                visited[x] = true;
                st.push(x);
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
    g.DFS(2);
}