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
          int target;
          cin>>target;
          
          sort(nums.begin(), nums.end());
          
          int l,r,mid=0;
          int x;
          int i=0;
          for( ; i<n-1; i++){
               x = target - nums[i];
               l = i+1;
               r = n-1;
               while(l<=r){
                    mid = (l+r)/2;
                    if(nums[mid] == x){
                         cout<<endl<<nums[i]<<" "<<nums[mid];
                         break;
                    }
                    else if(nums[mid] < x)
                         l = mid+1;
                    else
                         r = mid-1;
               }
               if(l<=r)
                    break;
          }
          if(i==n-1)
               cout<<endl<<"No Such Element Exit";
     }
}
