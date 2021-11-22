#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
    int src , dest;
};
class Graph{
    public:
    int V ,E;
    Edge *edge;
};

Graph* createGraph(int V , int E){
    Graph * G = new Graph();
    G->V = V;
    G->E = E;
    G->edge = new Edge[G->E * sizeof(Edge)];
    return G;
}

int find(vector<int> & parent , int i){
    if(parent[i] == -1){
        return i;
    }
    return find(parent , parent[i]);
}

void Union(vector<int> & parent , int x ,int y){
    parent[x] = y;
}

int isCycle(Graph *G){
    vector<int> parent(G->V,-1);

    for(int i=0;i<G->E ; i++){
        int x = find(parent,G->edge[i].src);
        int y = find(parent,G->edge[i].dest);

        if(x == y){
            return 1;
        }
        Union(parent , x , y);
    }
    return 0;
}
int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" ,"w" , stdout);
#endif

    int V = 3 , E = 3;
    Graph *G = createGraph(V, E);

    G->edge[0].src = 0;
    G->edge[0].dest = 1;
 
    // add edge 1-2
    G->edge[1].src = 1;
    G->edge[1].dest = 2;
 
    // add edge 0-2
    G->edge[2].src = 0;
    G->edge[2].dest = 2;
 
    if(isCycle(G))
        cout << "graph contains cycle";
    else
        cout << "graph doesn't contain cycle";
 
    return 0;
}