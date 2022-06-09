#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
          vector<int> nums(n);
          for(int i=0; i<n; i++)
               cin>>nums[i];
          sort(nums.begin(), nums.end());
          
          int i=0;
          for( ; i<n-1; i++)
               if(nums[i] == nums[i+1])
                    break;
          
          if(i == n-1)
               cout<<"NO"<<endl;
          else
               cout<<"YES"<<endl;
     }
}
