class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k = -1;

        for(int i=nums.size()-1; i>0; i--){
            if(nums[i] > nums[i-1]) {
                k = i-1;
                break;
            }
        }
        if(k==-1) return reverse(nums.begin(), nums.end());

        for(int i=nums.size()-1; i>k; i--){
            if(nums[i] > nums[k] ) {
                swap(nums[i], nums[k]);
                break;
            }
        }

        reverse(nums.begin() + k + 1, nums.end());
    }
};