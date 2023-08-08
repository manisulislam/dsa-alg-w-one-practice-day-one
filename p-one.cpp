#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;

//adjacency list
vector<int>adj[N];

//visited bool array
bool visited[N];

//dfs implementation
void dfs(int u){
    //1
    
    visited[u]=true;
    
    for(int v: adj[u]){
        //2
        if(visited[v]==true) continue;
        dfs(v);
        //3
    }
    //4
    cout<<u<<" ";

}
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    dfs(1);
   

    return 0;
}