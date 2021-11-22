#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<int>  *adj ;
    bool isCyclicUtil(int v, vector<bool> &visited , vector<bool> &s);
    bool isCyclicDFSUtil(int s);
    public:
    Graph(int V){
        this->V = V;
        adj = new vector<int>[V];
    }

    void addEdge(int u , int v){
        adj[u].push_back(v);
    }

    bool isCyclic();
    bool isCyclicDFS();
};

//recursive
bool Graph::isCyclicUtil(int v, vector<bool> &visited , vector<bool> &rs){

    if(visited[v] == false){
        visited[v] = true;
        rs[v] = true; // record stack

        for(auto x : adj[v]){
            if(visited[x] == false && isCyclicUtil(x,visited,rs) )
                return true;
            else if(rs[x])  
                return true;
        }
    }
    rs[v] = false;
    return false;
}



bool Graph::isCyclic(){
    
    vector<bool> visited(V,false);
    vector<bool> recStack(V,false);

    for(int i=0;i<V;i++){
        if(isCyclicUtil(i , visited, recStack))
            return true;
    }
    return false;
}


/* Wrong iterative version
bool Graph::isCyclicDFSUtil(int s){
    vector<bool> visited(V,false);
    stack<int> st;
    
    visited[s] = true;
    st.push(s);

    while(!st.empty()){
        int temp = st.top();
        st.pop();
        for(auto x:adj[s]){ 
            if(visited[x]  == false){
                visited[x] = true;
                st.push(s);
            }
            else if(visited[x] == true){
                return true;
            }

        }
    }

    return false;
}
bool Graph::isCyclicDFS(){
    for(int i=0;i<V;i++){
        if(isCyclicDFSUtil(i) == true){
            return true;
        }
    }
    return false;
}

*/
int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" ,"w" , stdout);
#endif
    Graph g(4);
    /* contains cycle
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    */
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    if(g.isCyclic()){
        cout<<"Contains Cycle\n";
    }
    else{
        cout<<"Do Not contains a cycle\n";
    }
    return 0;
}