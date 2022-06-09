#include <iostream>
#include <vector>
#include<map>

using namespace std;

int main(){
     int n;
     cin>>n;
     vector<int> nums(n);
     
     for(int i=0; i<n; i++){
          cin>>nums[i];
     }
     sort(nums.begin(), nums.end());
     map<int, int> mp;
     
     for(int i=0; i<n; i++){
          mp[nums[i]]++;
     }
     
     for(auto it : mp){
          if(it.second > n/2){
               cout<<"yes"<<endl;
               break;
          }
     }
     
     int x = n/2;
     if(n&1)
          cout<<nums[x]<<endl;
     else{
          int y = (nums[x-1] + nums[x])/2;
          cout<<y<<endl;
     }
          
     return 0;
}
