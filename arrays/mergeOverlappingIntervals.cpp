class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int st = intervals[0][0];
        int ed = intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0] > ed) {
                ans.push_back({st, ed});
                st = intervals[i][0];
                ed = intervals[i][1];
                continue;
            } else if(intervals[i][0]<=ed) {
                ed = max(ed, intervals[i][1]);
            }
        }
        ans.push_back({st, ed});
        return ans;
    }
};