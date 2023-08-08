#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int adjMat[N][N];
vector<int>adjList[N];
int main(){
    int n;
    cin>>n;
    //input adjacency matrix
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){   
         cin>>adjMat[i][j];
         if(adjMat[i][j]==1){
             adjList[i].push_back(j);
         }
        }
    }
 
    //print adjacency list
    for(int i=1; i<=n; i++){
        cout<<"List"<<" "<<i<<" "<<":"<<" ";
        for(int j: adjList[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}