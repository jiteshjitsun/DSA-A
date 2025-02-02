
//brute force
// - looping over 4 oops and doing sorting it's gonna take O(n4) 

//better 
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> mp;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
            set<long long> mp1;
                for(int k=j+1; k<n; k++) {
                    long long sum = nums[i] + nums[j];
                    sum+=nums[k];
                    long long fourth = target - sum;

                    if(mp1.find(fourth) != mp1.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                        sort(temp.begin(), temp.end());
                        mp.insert(temp);
                    }
                    mp1.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(mp.begin(), mp.end());
        return ans;
    }
};


// best approach
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++) {
            if(i!=0 and nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<nums.size(); j++) {
                if(j!=i+1 and nums[j]==nums[j-1]) continue;
                int k = j+1;
                int l = nums.size()-1;

                while(k<l) {
                    long long sum = nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        res.push_back(temp);
                        k++;
                        l--;
                        while(k<l and nums[k]==nums[k-1])
                            k++;
                        while(k<l and nums[l]==nums[l+1])
                            l--;  
                    } else if (sum < target) {
                        k++;
                    } else 
                        l--;
                }
            }
        }
        return res;
    }
};