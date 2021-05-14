#include<iostream>

class Graph
{
    public:
    int V;
    int E;
    int *Adj;
};

class ListNode
{
    public:
    int vertexNum;
    ListNode* next;
};

Graph* adjListOfGraph()
{
    int i , x, y;
    ListNode* temp;
    Graph* G = (Graph*)malloc(sizeof(Graph));

    if(!G) 
        return;


    std::cout<<"No. of Vertices\n";
    std::cin>>G->V;

    std::cout<<"No. of Edges\n";
    std::cin>>G->E;

    G->Adj = (int*)malloc(sizeof(G->V) * sizeof(ListNode));

    for(i =0 ;i<G->V;i++)
    {

    }

}


