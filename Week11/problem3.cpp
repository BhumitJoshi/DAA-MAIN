#include <iostream>
#include <vector>

using namespace std;

bool partition(vector<int>& nums, int n, int sum, int s, int i){
     if(sum < s)
          return false;
     
     if(i == n){
          if(sum == s)
               return true;
          else
               return false;
     }
     s += nums[i];
     if(partition(nums, n, sum, s, i+1))
          return true;
     s-= nums[i];
     if(partition(nums, n, sum, s, i+1))
          return true;
     return false;
}

int main(){
     int n;
     cin>>n;
     vector<int> nums(n);
     for(int i=0; i<n; i++){
          cin>>nums[i];
     }
     
     int sum=0;
     for(int i=0; i<n; i++)
          sum += nums[i];
     
     if(sum & 1){
          cout<<"no"<<endl;
          return 0;
     }
     
     if(partition(nums, n, sum/2, 0, 0))
          cout<<"yes"<<endl;
     else
          cout<<"no"<<endl;
     return 0;
}
