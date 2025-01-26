// first way is to iterate over 2 loops 
// O(n2)

// second way using maps

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 2, 7 , 11, 15 
        // 0  1   2  3
        // 2+7 = 9
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            if(mp.find((target-nums[i])) != mp.end()){
                return {i, mp[target-nums[i]]};
            } 
            mp[nums[i]]=i;
        }

        return {};
    }
};

// two pointer approach 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        vector<int> v = nums;
        sort(nums.begin(), nums.end());
        while(left<right) {
            if(nums[left] + nums[right] > target)
                right--;
            else if (nums[left] + nums[right] < target)
                left++;
            else {
                break;
            }
        }
        int a = INT_MAX;
        int b = INT_MAX;

        for(int i=0; i<v.size(); i++){
            if(v[i] == nums[left] and a==INT_MAX){
              a = i;
            } else if ( v[i] == nums[right] and b==INT_MAX){
                b = i;
            }
        }
        return {a, b};
    }
};