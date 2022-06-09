#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> num;
        for(int i=0; i<n; i++){
             int x;
             cin>>x;
             num.push_back(x);
        }
         int k;
         cin>>k;
         int count = 0;
        sort(num.begin(), num.end());
         
         for(int i=0; i<n; i++){
              for(int j=i+1; j<n; j++){
                   if(num[j] - num[i] == k)
                        count++;
                   else if (num[j] - num[i] > k)
                        break;
              }
         }
         cout<<count<<endl;
    }
}
