class Solution {
private:
    void merge(vector<int> &nums, int l, int mid, int h) {
        int left = l;
        int right = mid+1;
        vector<int> v;

        while(left<=mid and right<=h) {
            if(nums[left]<=nums[right]){
                v.push_back(nums[left]);
                left++;
            } else {
                v.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid) {
            v.push_back(nums[left]);
            left++;
        }
        while(right<=h){
            v.push_back(nums[right]);
            right++;
        }

        for(int i=l; i<=h; i++) {
            nums[i] = v[i-l];
        }
    }

    int countReversePair(vector<int> &nums, int l, int mid, int h) {
        // [1,2, 3,3] [4, 5,23,2]
        //  l.     m.  m+1.    h. 
        int right = mid+1;
        int cnt = 0;
        for(int i=l; i<=mid; i++) {
            while(right<=h and nums[i] > (long long)(2 * (long long)nums[right])){
                right++;
            }
            cnt+=(right-(mid+1));
        }
        return cnt;
    }

    int mergeAlgo(vector<int> &nums, int l, int h) {
        int cnt = 0;
        if(l>=h) return cnt;
        int mid = l + (h-l)/2;
        cnt += mergeAlgo(nums, l, mid);
        cnt += mergeAlgo(nums, mid+1, h);
        cnt += countReversePair(nums, l, mid, h);
        merge(nums, l, mid, h);
        return cnt;
    }
public:
    int reversePairs(vector<int>& nums) {
        return mergeAlgo(nums, 0, nums.size()-1);
    }
};

// the above soln uses merge sort algorithm, on Leetcode this is throwing TLE 
// TC is O(nlog(n));
// SC is O(n) = O(n) + O(log n)