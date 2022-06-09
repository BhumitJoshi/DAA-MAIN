
/* 0 = not colored
   1 = Red
   -1 = Blue
*/

#include <iostream>
#include <queue>

using namespace std;

bool bipartite(int source, vector<int> adj[], int color[]){
     queue<int> q;
     q.push(source);
     color[source] = 1;

     while(!q.empty()){
          int node = q.front();
          q.pop();

          for(auto it : adj[node]){
               if(color[it] == -1){
                    color[it] = 1 - color[node];
                    q.push(it);
               }
               else if(color[it] == color[node])
                         return false;
               }
          }
     return true;
}

bool check_bipartite(vector<int> adj[], int n) {
    int color[n];
    memset(color, -1, sizeof color);
    for(int i = 0;i<n;i++) {
        if(color[i] == -1) {
            if(!bipartite(i, adj, color)) {
                return false;
            }
        }
    }
    return true;
}

int main(){
     int n;
     cin>>n;
     vector<int> adj[n];
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               int x;
               cin>>x;
               if(x != 0){
                    adj[i].push_back(j);
               }
          }
     }
     if(check_bipartite(adj, n))
          cout<<"Bipartite"<<endl;
     else
          cout<<"Not Bipartite"<<endl;
     return 0;
}
