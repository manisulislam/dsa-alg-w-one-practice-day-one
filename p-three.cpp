#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int adjMat[N][N];
vector<int>adjList[N];

int main(){
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        
        
    }
    
    //convert adjacency list to adjacency matrix
    for(int i=1; i<=n; i++){
        for(int j: adjList[i]){
            adjMat[i][j]=1;
        }
    }

    //print adjacency matrix
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n; j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}