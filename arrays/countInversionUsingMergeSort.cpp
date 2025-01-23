#include <bits/stdc++.h> 


long long merge(long long arr[], int l, int mid, int h) {
    int left = l;
    int right = mid+1;
    vector<long long> v;

    long long cnt = 0;


    while(left<=mid and right<=h) {
        if(arr[left]<=arr[right]){
            v.push_back(arr[left]);
            left++;
        } else{
            v.push_back(arr[right]);
            cnt+=(mid-left+1);
            right++;
        }
    }

    while(left<=mid){
        v.push_back(arr[left]);
        left++;
    }
    while(right<=h){
        v.push_back(arr[right]);
        right++;
    }

    for(int i=l; i<=h; i++){
        arr[i] = v[i-l];
    }

    return cnt;
}

long long mergeAlgo(long long arr[], int l, int h) {
    long long cnt = 0;
    if(l<h) {
        int mid = (l+h)/2;
        cnt+=mergeAlgo(arr, l, mid);
        cnt+=mergeAlgo(arr, mid+1, h);
        cnt+= merge(arr, l, mid, h);
    }
    return cnt;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergeAlgo(arr, 0, n-1);
}