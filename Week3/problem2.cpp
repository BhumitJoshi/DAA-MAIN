#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

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
          
          int swaps=0;
          int comparisons=0;
          int small;
          
          for(int i=0; i<n-1; i++){
               small = i;
               for(int j=i+1; j<n; j++){
                    if(nums[small] > nums[j])
                         small = j;
                    comparisons++;
               }
               swap(nums[small], nums[i]);
               swaps++;
          }
          
          for(auto it : nums)
               cout<<it<<" ";
          cout<<endl<<"Comparisons : "<<comparisons
          <<endl<<"Swaps : "<<swaps<<endl;
     }
}
