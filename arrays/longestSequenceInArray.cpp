// best method = here we used 
// unordered_set ( to reduce the complexity as we don't want sorting)
// so the tc is O(n) and sc is O(n) 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1) return 0;
        unordered_set<int> st(nums.begin(), nums.end()); // O(N) insertion
        int longest = 0;

        for (int num : st) {
            // Check if num is the start of a sequence
            if (st.find(num - 1) == st.end()) { 
                int currentNum = num;
                int count = 1;

                // Count the length of the sequence
                while (st.find(currentNum + 1) != st.end()) { 
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }
        return longest;
    }
};

// the approach I came with 
// it involves sorting so tc in worst case would be O(nlogn)
// sc is O(n)
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        // 1, 2, 3, 4, 100, 200
        // 0 0 1 2 3 4 5 6 7 8
        // 0 1 1 2
        if (nums.size() < 1)
            return 0;
        sort(nums.begin(), nums.end());
        int cnt = 1;
        int ans = INT_MIN;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] - nums[i - 1] == 0)
                continue;
            if (nums[i] - nums[i - 1] == 1)
            {
                cnt += 1;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);
        return ans;
    }
};