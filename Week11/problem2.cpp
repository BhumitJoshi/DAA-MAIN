#include <iostream>
#include <vector>

using namespace std;

int count(vector<int>& nums, int n, int N, int i, int sum){
     if(n == i){
          if(sum == N)
               return 1;
          else
               return 0;
     }
     if(sum > N)
          return 0;
     
     int take = count(nums, n, N, i, sum + nums[i]);
     int not_take = count(nums, n, N, i+1, sum);
     return take + not_take;
}

int main(){
     int n;
     cin>>n;
     vector<int> nums(n);
     for(int i=0; i<n; i++){
          cin>>nums[i];
     }
     int N;
     cin>>N;
     cout<<count(nums, n, N, 0, 0)<<endl;
     return 0;
}

