#include <iostream>
#include <vector>
#include <set>
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
        set<int> s;
        for(auto it : nums){
            s.insert(it);
        }
        
        int k;
        cin>>k;
        for(auto it : s){
            if(--k == 0){
                cout<<it<<endl;
                break;
            }
        }
    }
}
