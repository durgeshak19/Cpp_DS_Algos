#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &dist){
    cout<<"Minimum Dist from Source to\n";
    for(int i=0;i<dist.size();i++){
        cout<<i <<" -> "<<dist[i]<<"\n";
    }
} 


int minDist(vector<int> &dist , vector<bool> &sptSet){

    int min = INT_MAX , min_index;
    int V = dist.size();
    for(int v = 0;v<V;v++){
        if(sptSet[v] == false && dist[v] <= min){
            min = dist[v] , min_index = v;
        }
    }

    return min_index;
}

void dijkstra(vector<vector<int>> & G, int s){

    int V = G.size();
    vector<int> dist(V , INT_MAX);
    vector<bool> sptSet(V,false);

    for(int count = 0; count<V-1;count++){
        int u = minDist(dist , sptSet);
        sptSet[u] = true;

        for(int v =0 ; v<V ; v++){

            if(!sptSet[v] && G[u][v] && dist[u] != INT_MAX
                && dist[u] + G[u][v] < dist[v])
                dist[v] = dist[u] + G[u][v];
        }
    }

    print(dist);
}

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif
    
    vector<vector<int>> Graph = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                            { 4, 0, 8, 0, 0, 0, 0,11, 0 },
                            { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                            { 0, 0, 7, 0, 9,14, 0, 0, 0 },
                            { 0, 0, 0, 9, 0,10, 0, 0, 0 },
                            { 0, 0, 4,14,10, 0, 2, 0, 0 },
                            { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                            { 8,11, 0, 0, 0, 0, 1, 0, 7 },
                            { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };


    dijkstra(Graph , 0);
    return 0;
}