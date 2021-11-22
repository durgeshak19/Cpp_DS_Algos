#include<bits/stdc++.h>
using namespace std;


class Edge{
    public:
    int src , dest;
};
class Graph{
    public:
    int V, E;
    Edge *edge;
};

class subset{
    public:
    int parent;
    int rank;
};

Graph* createGraph(int V,int E){
    Graph *G = new Graph();
    G->V = V;
    G->E = E;
    G->edge = new Edge[G->E];
}

int find(subset subsets[] , int i){
    if(subsets[i].parent != i){
        subsets[i].parent = find(subsets,subsets[i].parent);
    }
    return subsets[i].parent;
}

void Union(subset subsets[] , int xroot , int yroot){
     if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
 
    // If ranks are same, then make one as root and
    // increment its rank by one
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}
int isCycle(Graph* G)
{
    int V = G->V;
    int E = G->E;
 
    // Allocate memory for creating V sets
    subset* subsets = new subset[V];
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
 
    // Iterate through all edges of graph, find sets of both
    // vertices of every edge, if sets are same, then there
    // is cycle in graph.
    for (int e = 0; e < E; ++e) {
        int x = find(subsets, G->edge[e].src);
        int y = find(subsets, G->edge[e].dest);
 
        if (x == y)
            return 1;
 
        Union(subsets, x, y);
    }
    return 0;
}
int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    

}