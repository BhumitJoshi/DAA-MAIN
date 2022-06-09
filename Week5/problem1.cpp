#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          vector<char> nums(n);
          unordered_map<int, int> mp;
          for(int i=0; i<n; i++){
               cin>>nums[i];
               mp[nums[i]]++;
          }
          char ch=0;
          int max=1;
          for(auto it : mp){
               if(it.second > max){
                    max = it.second;
                    ch = it.first;
               }
          }
          if(max == 1)
               cout<<endl<<"No Duplicates Present";
          else
               cout<<endl<<ch<<" - "<<max;
     }
}
