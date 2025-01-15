class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0 ;
        int high = nums.size()-1;

        while(high >= mid) {
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                mid+=1;
                low+=1;
            } else if(nums[mid]==2) {
                swap(nums[high], nums[mid]);
                high-=1;
            } else {
                  mid+=1;
            }
        }
    }
};