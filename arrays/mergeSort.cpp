// given array 
#include<iostream>
#include<vector>

void merge(vector<int> &v, int l, int mid, int h) {
    vector<int> c;

    int left = l;
    int right = mid + 1;

    while(left<=mid and right<=h) {
        if(v[left] < v[right]){
            c.push_back(v[left]);
            left++;
        } else {
            c.push_back(v[right]);
            right++;
        }
    }

    while(left<=mid)
        c.push_back(v[left++]);
    while(right<=h)
        c.push_back(v[right++]);
}

void mergeSortAlgo(vector<int> &v, l, h) {
    if(l<h) {
        mid = (l+h)/2;
        mergeSortAlgo(v, l, mid);
        mergeSortAlgo(v, mid+1, h);
        merge(v, l, m, h);
    }
}


int main() {
    vector<int> v = {2, 3,2, 45 , 6, 55,2 ,6, 75};

    int l = 0; 
    int h = v.size()-1;

    mergesortAlgo(v, l , h);
}
