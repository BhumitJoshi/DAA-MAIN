#include <iostream>
#include <vector>
#include <stdlib.h>
#include <unordered_map>
#include <iterator>

using namespace std;

int main(){
     int n,m;
     unordered_map<int, int> mp;
     cin>>n;
     vector<int> nums1(n);
     
     for(int i=0; i<n; i++){
          cin>>nums1[i];
          mp[nums1[i]]++;
     }
     
     cin>>m;
     vector<int> nums2(m);
     vector<int> ans;

     for(int i=0; i<m; i++){
          cin>>nums2[i];
          if(mp.find(nums2[i]) != mp.end()){
               if(mp[nums2[i]] > 0){
                    ans.push_back(nums2[i]);
                    mp[nums2[i]]--;
               }
          }
     }
     sort(ans.begin(), ans.end());
     for(auto it : ans)
          cout<<it<<" ";
}
