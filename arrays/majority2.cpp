class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto it:mp){
            if(it.second > n/3) {
                nums.push_back(it.first);
            }
        }
        return nums;
    }
};

// TC - O(n)
// SC - O(n)