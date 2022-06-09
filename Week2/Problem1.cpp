#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <unordered_map>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
          cout<<endl;
          int n;
          cin>>n;
          unordered_map<int, int> mp;
          vector<int> num;
          for(int i=0; i<n; i++){
               int x;
               cin>>x;
               num.push_back(x);
               mp[x]++;
          }
          int k;
          cin>>k;
          auto it = mp.find(k);
          if(it == mp.end())
               cout<<"Key not present"<<endl;
          else
               cout<<k<<"-"<<mp[k];
     }
}
