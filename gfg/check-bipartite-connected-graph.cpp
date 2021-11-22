#include<bits/stdc++.h>
using namespace std;


bool isBipartite(vector<vector<int>> & G ,int s){

    int V = G.size();
    queue<int> q;
    vector<int> color(V,-1); // -1 not visited
    q.push(s);
    color[s] = 1;

    while(!q.empty()){

        int u = q.front();
        q.pop();

        //return false if there is a self loop
        if(G[u][u] == 1){
            return false;
        }

        for(int v = 0 ;v<V;v++){
            if(G[u][v] && color[v] == -1){
                color[v] = 1 - color[u];
                q.push(v);
            }

            else if(G[u][v] && color[v] == color[u]){
                return false ;
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

    bool  flag = isBipartite(G , 0);
        
    cout<<(flag ? "Yes Bipartite" : "Oh Hell No!!! Not in anyway Bipartite");
    
}