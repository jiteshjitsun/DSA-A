class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int shortestSubarrayLength = INT_MAX;
        long long cumulativeSum = 0;

        priority_queue<pair<long long , int> , vector<pair<long long, int>>, greater<>> prefixSumHeap;

            cumulativeSum += nums[i];

            // if sum greater than k 
            if(cumulativeSum >= k) {
                shortestSubarrayLength = min(shortestSubarrayLength, i+1);
            } 

            while(!prefixSumHeap.empty() and cumulativeSum - prefixSumHeap.top().first >=k ) {
                shortestSubarrayLength = min(shortestSubarrayLength, i-prefixSumHeap.top().second);
                prefixSumHeap.pop();
            }

            prefixSumHeap.emplace(cumulativeSum, i);
        }

        return shortestSubarrayLength == INT_MAX ? -1 : shortestSubarrayLength;
    }
};

// above is using pq ( min heap )
// min heap ko aise likhte h :
// priority_queue<pair<int, int>, vector<int, int>, greater<>> pq;