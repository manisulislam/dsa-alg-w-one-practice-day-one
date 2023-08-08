#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
//adjacency list
vector<int>adjList[N];

//height array
int height[N];

//vistited bool array
bool visited[N];

//dfs implementation
void dfs(int u){
    visited[u]=true;
    for(int v: adjList[u]){
        if(visited[v]==true) continue;
        dfs(v);
        if(height[v]+1> height[u]){
            height[u]=height[v]+1;
        }
    }
    
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int k;
    cin>>k;

    //dfs call
    dfs(1);

    //height print
    
     cout<<"Height of"<<" "<<k<<" "<<"="<<" "<<height[k]<<endl;
        
    
    return 0;
}