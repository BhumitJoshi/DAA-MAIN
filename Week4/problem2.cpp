#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int> &nums, int l, int r, int* comparisons,int* swaps){
    int pivot = nums[r];
    int i=l-1;
    int j=l;
    while(j < r){
        (*comparisons)++;
        if(nums[j] < pivot){
            swap(nums[++i], nums[j]);
            (*swaps)++;
        }
        j++;
    }
    swap(nums[++i], nums[j]);
    (*swaps)++;
    return i;
}

void Quicksort(vector<int> &nums, int l, int r, int* comparisons,int* swaps){
    if(l<r){
        int pivot = partition(nums, l, r, comparisons, swaps);

        Quicksort(nums, l, pivot-1, comparisons, swaps);
        Quicksort(nums, pivot+1, r, comparisons, swaps);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, comparisons=0, swaps=0;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++)
            cin>>nums[i];

        Quicksort(nums, 0, n-1, &comparisons, &swaps);
        cout<<endl<<endl;
        for(auto it : nums){
            cout<<it<<" ";
        }
        cout<<endl<<"comparisons = "<<comparisons;
        cout<<endl<<"swaps = "<<swaps<<endl;
    }
}
