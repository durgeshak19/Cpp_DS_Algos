#include<bits/stdc++.h>
using namespace std;
// Spannig Tree is a subgraph of tree which connects all vertices together.
// MST out of all those graphs select edge which Makes least weighted graph.
// total : V-1 edges

// * * * * * * Kruskals algo * * * * * *   
// 1. Sort all the edges in non-decreasing order of their weight. 
// 2. Pick the smallest edge. Check if it forms a cycle with the spanning tree formed so far. 
// If cycle is not formed, include this edge. Else, discard it. (Union finding algorithm)
// 3. Repeat step#2 until there are (V-1) edges in the spanning tree.

class Edge{
    public:
    int src ,dest ,weight;
};

class Graph{
    public:
    //V - no of vertices 
    //E - no of edges
    int V, E;

    Edge *edge;
    //not using a constructor as
    Graph* createGraph(int V, int E);
};



int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    

}