class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int m = n/2;

        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto x:mp) {
            if(x.second > m)
                return x.first;
        }

        return 0;
    }
};

// TC - O(n)
// SC - O(n)