#include<bits/stdc++.h>
using namespace std;
//not working
bool isBipartiteUtil(vector<vector<int>> &G , vector<int> & color , int s){

    int V = G.size();
    queue<int> q;
    q.push(s);
    color[s] = 1;

    while(!q.empty()){

        int u = q.front();
        q.pop();
        //false for self loop 
        if(G[u][u] == 1) return false;

        for(int v = 0;v<V;v++){
            if(G[u][v] && color[v] == -1){
                color[v] = 1- color[u];
                q.push(v);
            }
            else if(G[u][v] && color[u] == color[v]){
                return false;
            }
        }

    }
    return true;

}

bool isBipartite(vector<vector<int>> &G ){

    int V = G.size();
    vector<int> color(V, false);

    for(int i=0;i<V;i++){
        if(color[i] == -1){
            if(isBipartiteUtil(G , color , i) == false){
                return false;
            }
        }
    }

    return true;
}

int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" ,"w" , stdout);
#endif
    

    //matrix representation of graph

    vector<vector<int>> G = { { 0, 1, 0, 1},
                              { 1, 1, 1, 0 },
                              { 0, 1, 0, 1 },
                              { 1, 0, 1, 0 }};

    bool  flag = isBipartite(G);
        
    cout<<(flag ? "Yes Bipartite" : "Oh Hell No!!! Not in anyway Bipartite");
    
}