#include <iostream>
#include <vector>
     
using namespace std;
     
bool iscycle(int i, vector<int>& visit, vector<int> & dfsvisit, vector<int> adj[]){
     visit[i] = 1;
     dfsvisit[i] = 1;
     
     for(auto it : adj[i]){
          if(!visit[it]){
               if(iscycle(it, visit, dfsvisit, adj))
                    return true;
          }
          else if(dfsvisit[it])
               return true;
     }
     dfsvisit[i] = 0;
     return false;
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
            }
        }
    }
     
     vector<int> visit(n+1, 0);
     vector<int> dfsvisit(n+1, 0);
     
     for(int i=1; i<=n; i++){
          if(!visit[i]){
               if(iscycle(i, visit, dfsvisit ,adj)){
                    cout<<"Yes Cycle Exists"<<endl;
                    return 0;
               }
          }
     }
     cout<<"No Cycle Exists"<<endl;
     return 0;
}
