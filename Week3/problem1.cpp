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
     for(int i=0; i<n; i++){
          cin>>nums[i];
     }
     int comparisions=0;
     int shift=0;
     int j;
     int current;
     for(int i=1; i<n; i++){
          current = nums[i];
          j= i-1;
          while(j >= 0 && current < nums[j]){
               nums[j+1] = nums[j];
               comparisions++;
               shift++;
               j--;
          }
          nums[j+1] = current;
          shift++;
     }
     for(auto it : nums)
          cout<<it<<" ";
     cout<<endl<<"Comparisions : "<<comparisions<<endl
         <<"Shifts : "<<shift<<endl;
          
     }
     
}
