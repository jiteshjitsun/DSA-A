class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left = 0, right = 0, sumOfcurrentWindow = 0;
        int ans = INT_MAX;

        for(int i=0; i<nums.size(); i++) {
            sumOfcurrentWindow += nums[i];

            while(sumOfcurrentWindow >= target) {
                ans = min(ans, (i - left + 1));
                sumOfcurrentWindow -= nums[left];
                left+=1;
            }
        }

        return ans == INT_MAX ? 0 : ans; 
    }
};