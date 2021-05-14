#include<bits/stdc++.h>

class Graph
{
    public:
    int V;
    int E;
    int **Adj;
};

Graph* adjMatrixOfGraph(){
    int i , u , v;
    Graph* G = (Graph*)malloc(sizeof(Graph));
    if(!G){
        std::cout<<"Memory Error";
        return ;
    }

    std::cout<<"No. of Vertices\n";
    std::cin>>G->V;

    std::cout<<"No. of Edges\n";
    std::cin>>G->E;

    G->Adj = (int**)malloc(sizeof(G->V * G->V));

    for(u = 0 ; u<G->V;u++){
        for(v = 0; v<G->V ; v++){
            G->Adj[u][v] = 0;
        }
    }

    for(i=0 ; i<G->E;i++){
        std::cout<<"Reading Edge : ";
        std::cin>>u>>v;
        G->Adj[u][v] = 1;
        G->Adj[v][u] = 1;
    }
    return G;
}