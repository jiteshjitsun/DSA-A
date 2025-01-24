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

// moore's voting algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int ele = nums[0];
        
        // moore's voting algo
        for(int i=1; i<nums.size(); i++){
            if(cnt==0) {
                ele=nums[i];
                cnt+=1;
            }
            else if(nums[i]!=ele) {
                cnt--;
            } else {
                cnt+=1;
            }
        }
        int cnt1=0;
        // verifying 
        for(int i=0; i<nums.size(); i++){
            if(ele==nums[i])
                cnt1+=1;
        }
        if(cnt1 > nums.size()/2) 
            return ele;
        return -1;
    }
};

// TC - O(n)
// SC - O(1)