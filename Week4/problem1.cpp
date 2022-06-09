#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& arr, int l, int m, int r, int* comparisons, int* inversions)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
    i = 0;
    k = l;
    j = 0;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(vector<int>& nums, int l, int r, int* comparisons, int* inversions){
    if(l < r){
        int mid = (l+r)/2;

        MergeSort(nums, l, mid, comparisons, inversions);
        MergeSort(nums, mid+1, r, comparisons, inversions);

        merge(nums, l, mid, r, comparisons, inversions);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, comparisons = 0, inversions = 0;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++)
            cin>>nums[i];
        
        MergeSort(nums, 0, n-1, &comparisons, &inversions);
        cout<<endl<<endl;
        for(auto it : nums){
            cout<<it<<" ";
        }
        cout<<endl<<"comparisons = "<<comparisons;
        cout<<endl<<"inversions = "<<inversions<<endl;
    }
}

