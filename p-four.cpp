#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;

//adjacent list
vector<int>adjList[N];

//depth
int depth[N];

//visited bool array
bool visited[N];

//dfs implementation
void dfs(int u){
    visited[u]=true;
    for(int v: adjList[u]){
        
        
       
        if(visited[v]==true) continue;
        depth[v]=depth[u]+1;
     
        dfs(v);
    }
    
}
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<m;i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);

    }
   
    int k;
    cin>>k;
    dfs(1);
    //depth print 
 
     cout<<"Depth of"<<" "<<k<<" "<<"="<<" "<<depth[k];
    
       
    
    return 0;
}