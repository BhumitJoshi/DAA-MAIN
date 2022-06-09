#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void Paths(int source, vector<bool>& visited,vector<int> adj[]){
     visited[source] = 1;
    for(auto it : adj[source]){
        if(!visited[it]){
            Paths(it, visited, adj);
        }
    }
}

int main()
{
    int n,x;
     cin>>n;
    vector<int> adj[n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>x;
            if(x == 1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    int source, destination;
    cin>>source>>destination;
    vector<bool> visit(n+1, 0);
     Paths(source, visit, adj);
     
     if(visit[destination])
        cout<<"Yes Path Exists"<<endl;
    else
        cout<<"No Such Path Exists"<<endl;
}
